# iSDC-P2-Translate-Python-Cpp

## Area of Caution
1. All `.cpp` has been removed from `#include`
2. maps/ hardcode has been changed to `../maps/` as binary will be run in the build subdirectory

## To Compile (with g++)
1. `mkdir build`
2. `g++ -std=c++11 debugging_helpers.cpp helpers.cpp localizer.cpp simulate.cpp tests.cpp -o build/localizer_tests`
3. `cd build`


## Optionally, to Compile (with Make)
1. `mkdir build`
2. `cd build`
3. `camke ..`
4. `make`

## To Run (in the build subdirectopry)
* make sure you are in the `build` director first or the executable won't able to find the maps.
* `./localizer_tests`
