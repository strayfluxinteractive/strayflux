#!/usr/bin/env bash

# Exit immediately if a command exits with a non-zero status
set -e
# Print commands and their arguments as they are executed.
set -x
shopt -s extglob
shopt -s dotglob

bii init strayflux
mkdir -p ./strayflux/blocks/strayfluxinteractive/strayflux
mv !(strayflux) ./strayflux/blocks/strayfluxinteractive/strayflux
cd strayflux
bii find -um
bii cpp:configure --enable-gcov
bii cpp:build
cd bin
ls -la
strayfluxinteractive_strayflux_test_main
cd ..