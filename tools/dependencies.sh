#!/usr/bin/env bash

# Exit immediately if a command exits with a non-zero status
set -e
# Print commands and their arguments as they are executed.
set -x

# Bii code
wget http://apt.biicode.com/install.sh && chmod +x install.sh && ./install.sh

# G++
sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y
sudo apt-get update -qq
if [ "$CXX" = "g++" ]; then sudo apt-get install -qq g++-4.8; fi
if [ "$CXX" = "g++" ]; then export CXX="g++-4.8" CC="gcc-4.8"; fi
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-4.8 90
sudo apt-get install ggcov
which gcov
gcov --version

# Cmake
wget https://s3.amazonaws.com/biibinaries/thirdparty/cmake-3.0.2-Linux-64.tar.gz
tar -xzf cmake-3.0.2-Linux-64.tar.gz
sudo cp -fR cmake-3.0.2-Linux-64/* /usr
rm -rf cmake-3.0.2-Linux-64
rm cmake-3.0.2-Linux-64.tar.gz