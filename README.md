# STM32F446RE-PROJECTS
bunch of stm32f4 dev board projects without using the CubeIDE ..  
___  

## How to build  
(im using linux)
```bash
git clone https://github.com/W4ZM/STM32F446RE-PROJECTS.git
cd STM32F446RE-PROJECTS
mkdir build && cd build
cmake ..
make
```
## Flash the firmware  
(using [openocd](https://github.com/openocd-org/openocd))
```bash
make flash
```
