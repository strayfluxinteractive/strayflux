
# Initializes block variables
INIT_BIICODE_BLOCK()


# Including tools.cmake from biicode/cmake user block
# see https://www.biicode.com/biicode/cmake
INCLUDE(biicode/cmake/tools)

# Actually create targets: EXEcutables and libraries.
ADD_BIICODE_TARGETS()

# Activate CPP11
ACTIVATE_CPP11(INTERFACE ${BII_BLOCK_TARGET})
