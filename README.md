# DreamyEngine


# About

An engine to build your dreams 


# Building the project 

- this project uses [cmake](https://cmake.org/) to build so install it first
- make a directory in the root directory of the project in which you want to build it (For eg. build)
- then use cmake for the desired build system in the build directory you just created

### Make
```bash
cmake .. -G "Unix Makefile"
```
 
 ### Visual Studio (windows)
 ```bash
 cmake ..
 ```
 
 ### Ninja
 ```bash
 cmake .. -G "Ninja"
 ```