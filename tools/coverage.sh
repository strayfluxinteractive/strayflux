coveralls --gcov-options 'strayflux/build/strayfluxinteractive/strayflux/CMakeFiles/strayfluxinteractive_strayflux_test_main.dir/' -e 'strayflux/deps/' -e 'strayflux/build/' -e 'strayflux/blocks/strayfluxinteractive/strayflux/logger/easylogging++.h' --verbose | tr ',' '\n' | grep "'name':"