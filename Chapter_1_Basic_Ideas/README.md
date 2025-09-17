# Chapter 1: Basic Ideas
---
## Standard Libraries
---
* The ___Standard Library___ is a huge collection of __routines__ and __definitions__ that provide the __functionality__ required by many programs.
* For example:
    - `String` processing,
    - `Input/Output (I/O)` operations,
    - `Concurrency` and `Synchronization`,
    - `Sorting` and `Searching`
    - and the list goes on.

* We've only scratched the surface. `C++23` contains over `100 modules`.
* We can also create our own modules, something we'll do down the line.

## C++ Program Concepts
---
* We now jump straight into a basic program, which will give us a decent amount of insight into whats going on.
* It is usual to create what most programmers call the __obligatory Hello, World!__ program.
* However, I'm not going to do that. My use of `C++` and other programming languages in general, is to apply them to scientific problems.
* The program:

`main.cpp`

```cpp
// this program calculates the atomic mass of a neutral sodium atom
// and it prints out the number of electrons, protons and neutrons

import std;

int main() {

    int num_protons {11};
    int num_electrons {11};
    int num_neutrons {12};

    // atomic mass of a neutral sodium atom
    int atomic_mass = num_protons + num_neutrons;

    // output data about sodium atom
    std::println("The atomic mass of a neutral sodium atom is {}.", atomic_mass);
    std::println("A sodium atom has {} electrons, {} protons and {} neutrons.", 
                 num_electrons, num_protons, num_neutrons);

    // not really required but here it is
    return 0;
}
```
* Now compile and build the executable:
```cpp
$ g++ -std=c++23 -fmodules -fsearch-include-path bits/std.cc -c -o std.o
$ g++ -std=c++23 -fmodules main.cpp -o main
$ ls
gcm.cache  main  main.cpp  std.o
$ ./main
The atomic mass of a neutral sodium atom is 23.
A sodium atom has 11 electrons, 11 protons and 12 neutrons.
```
### Code Explanation
