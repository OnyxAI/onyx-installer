#
# spec file for package onyx_installer
#
# Copyright (c) 2017 contact@onyxlabs.fr
#
# All modifications and additions to the file contributed by third parties
# remain the property of their copyright owners, unless otherwise agreed
# upon. The license for this file, and modifications and additions to the
# file, is the same license as for the pristine package itself (unless the
# license for the pristine package is not an Open Source License, in which
# case the license is the MIT License). An "Open Source License" is a
# license that conforms to the Open Source Definition (Version 1.9)
# published by the Open Source Initiative.

# Please submit bugfixes or comments via http://bugs.opensuse.org/
#

%define onyx_tar src
%define onyx_name onyx_installer
%define onyx_package onyx-installer

Summary: onyx Installer for Linux
Name: %{onyx_package}
Version: 1
Release: PLACEHOLDER
Source: %{onyx_tar}.tar.gz
URL: https://github.com/OnyxProject/Onyx
License: GPL-2.0
Group: Multimedia
%if 0%{?suse_version} == 1110
BuildRoot:      %{_tmppath}/%{name}-%{version}-build
%endif

%if 0%{?mandriva_version} > 2006
export PATH=/usr/lib/qt4/bin:$PATH
export QTDIR=%{_prefix}/lib/qt4/
%endif

%if 0%{?mandriva_version}
BuildRequires:    libqt4-devel -kernel
%endif

%if 0%{?suse_version}
BuildRequires: update-desktop-files
%endif

# Common build dependencies
BuildRequires:	libqt4-devel
BuildRequires:	desktop-file-utils
BuildRequires:	gcc-c++

%if !  0%{?suse_version}
# Common dependencies
Requires:       libmng
Requires: 		qt
Requires: 	parted
# Patch
Requires:       patch
%endif

%if 0%{?fedora} || 0%{?centos_version} == 700 || 0%{?rhel_version} == 700
Requires: 	libjpeg-turbo
Requires: 	libtiff
Requires: 	libpng
%else
%if !  0%{?suse_version}
Requires:	libjpeg8
Requires:	libtiff5
Requires:	libpng12-0
%endif
%endif

# Don't make this noarch although it is just a fetch script otherwise the following wont' work:

# dep_postfix macro is used to append "-32bit" to dependencies for x86_64 on openSUSE
%define dep_postfix %{nil}
%ifarch x86_64
  %if 0%{?suse_version}
    %define dep_postfix -32bit
  %endif
%endif
%if 0%{?fedora}
  %define dep_postfix %{?_isa}
%endif

%if 0%{?suse_version}
Requires:       libX11-6%{dep_postfix} >= 1.4.99.1
%endif
%if 0%{?fedora} || 0%{?rhel_version} || 0%{?centos_version}
Requires:       libX11%{dep_postfix} >= 1.4.99.1
%endif


%description
Onyx Installer allows you to install Onyx on a variety of devices

%prep
%setup -n %{onyx_tar}

%build
if [ -f Makefile ]; then echo "Cleaning" && make clean; fi
echo Building installer
%if 0%{?fedora} || 0%{?rhel_version} || 0%{?centos_version}
qmake-qt4
%else
qmake
%endif
make
if [ $? != 0 ]; then echo "Build failed" && exit 1; fi

%check
#make check

%install
rm -rf %{buildroot}

#folderss
install -d %{buildroot}%{_bindir}
install -d %{buildroot}%{_datadir}/onyx
#install -d %{buildroot}%{_libdir}/onyx
install -d %{buildroot}/usr/share/applications

#files
install -m 755 %{onyx_name} %{buildroot}%{_datadir}/onyx/%{onyx_name}
install -m 755 onyxinstaller %{buildroot}%{_datadir}/onyx/onyxinstaller
#symlink for bin folder
#ln -s %{_datadir}/onyx/%{onyx_name} %{buildroot}%{_bindir}/%{onyx_name}
#ln -s %{_datadir}/onyx/onyxinstaller %{buildroot}%{_bindir}/onyxinstaller
ln -s %{_datadir}/onyx/onyxinstaller %{buildroot}%{_bindir}/onyxinstaller
#lenguage files for qt
#install -m 644 *.qm %{buildroot}%{_datadir}/onyx/
#cp *.qm %{buildroot}%{_datadir}/onyx/ > /dev/null 2>&1

#desktop icon
%if 0%{?suse_version}
%suse_update_desktop_file -i onyxinstaller
%endif

%if 0%{?fedora} || 0%{?rhel_version} || 0%{?centos_version}
desktop-file-install --dir=${RPM_BUILD_ROOT}%{_datadir}/applications onyxinstaller.desktop
desktop-file-validate %{buildroot}%{_datadir}/applications/onyxinstaller.desktop
%endif

#icon image
install -m 644 icon.png %{buildroot}%{_datadir}/onyx/icon.png

%clean
rm -rf $RPM_BUILD_ROOT

%post
%if 0%{?suse_version} >= 1140
%desktop_database_post
#%icon_theme_cache_post
#%mime_database_post
%endif

%postun
%if 0%{?suse_version} >= 1140
%desktop_database_postun
#%icon_theme_cache_postun
#%mime_database_postun
%endif

%files
%defattr(-,root,root,0755)
%{_datadir}/onyx
%defattr(-,root,root)
%{_bindir}/onyxinstaller
%{_datadir}/onyx/%{onyx_name}
%{_datadir}/onyx/onyxinstaller
#%{_datadir}/onyx/*.qm
/usr/share/applications/onyxinstaller.desktop
%{_datadir}/onyx/icon.png
#%{_libdir}/onyx/*


%changelog
* Sun 06 Aug 2017 Aituglo
- OBS initial release, thanks to Ivan Gonzalez (malkavi) for help
