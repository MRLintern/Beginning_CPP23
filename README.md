# Beginning C++23 - Scientists and Engineers
---

## Introduction
---
* This is a "tutorial" of sorts which teaches `C++23` using the book, ___Beginning C++23___ by __Ivor Horton__ and __Peter Van Weert__.
* However, my version/take looks at learning `C++23` for solving problems in the ___Physical Sciences___ and ___Engineering___.
* The book is pretty good in my opinion, however, I feel it lacks detail r.e. __compiling__ the software from the start.
* This is the general `README.md` for this project. A `README.md` will be used for every chapter, with notes explaining the code and the theory behind it.
* Note: you can find the source code from the official repository for the book [here](https://github.com/MRLintern/beginning-cpp23).

## Requirements
---
* __Compiler__: `g++ 15.1.0`.
* __OS__: `Linux (Ubuntu 20.04)`.
* __CMake__: `version 4.0.2`.
* __Text Editor__: any will do: e.g. `Sublime Text`, which I've used. Or,
* __IDE__: e.g., `Code::Blocks`, which can be used on both `Linux` and `Windows`. If you're on `Windows 10/11`, you can use `Visual Studio`.

## Compiling
---
* `Modules` are used throughout. I.e. from the get-go, `modules` will be used: E.g. `import std;`.
* This will require will require a number of steps to compile and build the executable; see below to see how to do this:
* Build `std module interface`:
* `$ g++ -std=c++23 -fmodules -fsearch-include-path bits/std.cc -c -o std.o`
* The source file is called `main.cpp`:
* `$ g++ -std=c++23 -fmodules main.cpp -o main`
* Run executable:
* `$ ./main`
* For later programs which require more source files, `CMake` will be used.
