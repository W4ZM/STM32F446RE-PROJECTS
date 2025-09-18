# Cross compiling. "Generic" is used for embedded platforms
set(CMAKE_SYSTEM_NAME "Generic")

# Compilers
set(CMAKE_C_COMPILER "arm-none-eabi-gcc")

# Tells CMake not to try to link executables during its interal checks
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")