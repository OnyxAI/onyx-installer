#!/bin/bash
echo Building installer files for OBS

TARGET="onyx_installer"
OUTPUT="obs"
pushd ${TARGET}
rm Makefile >/dev/null 2>&1
VERSION=$(cat ${TARGET}.pro | grep VERSION | tail -n 1 | awk {'print $3'})
popd
mkdir ${OUTPUT}
mkdir ${OUTPUT}/src
cp -ar ${TARGET}/* ${OUTPUT}/src/
pushd ${OUTPUT}
echo Creating tarball
tar -czf src.tar.gz src/
rm -rf src/
popd
cp onyx-installer.spec ${OUTPUT}
echo Updating RPM versioning
sed -e s/PLACEHOLDER/${VERSION}/ -i ${OUTPUT}/onyx-installer.spec
echo Updating Debian versioning
cp debian.changelog debian.control debian.dsc debian.rules ${OUTPUT}
sed -e s/PLACEHOLDER/${VERSION}/ -i ${OUTPUT}/debian.changelog
sed -e s/PLACEHOLDER/${VERSION}/ -i ${OUTPUT}/debian.dsc
# Update on server
echo ${VERSION} > latest_linux
echo Files are now ready for OBS
