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
---
* Below is a brief overview of what the code inside `main.cpp` is and does.
* As we progress, we'll look at these things in more detail.

#### Source Files: Extensions
---
* The file `main.cpp` has the extension `.cpp`, which means its a ___C++ source file___ or ___implementation file___.
* Source files contain __function bodies__ and thus, most of the executable code in a program.
* The names of source files usually have the extension `.cpp`, although other extensions such as `.cc`, `.cxx`, or `.c++` are sometimes used.
* For more complex programs, you'll come accross ___header files___ which have the extension `.h` (from `C`) and `.hpp`.
* In `C++20` and `C++23`, it is more common to see ___modules___ rather than header files.

#### Comments and Whitespace
---

* ___Whitespace___: essentially series of characters which creates space on a page but does not display a visible mark. Not very interesting.
* ___Comments___ in `C++` can be identified by `//` and/or `/*...*/`.

* For example:

    - `// I'm a comment`. This is a __single line comment__, aka __C++ style comments__.

    - The compiler will ignore everything that follows two successive forward slashes on a line

    - `/* text */` can hold multiple lines of comments. These are __block comments__, aka, __C style comments__.

        - I.e. `/* this comment is
                   over two lines. */`

    - Everything between `/**/` will be ignored by the compiler

#### Code
---

* `import std;`: 

    - This make the entire __standard library (std)__ available, including the `std::println()` functionality for printing out text and values.
    - `include` is an `include directive`; it simply tells `C++` to include what follows; the `std module`.

* `int main()`: 

    - All programs have this special function.
    - It represents the start of the program.
    - Note: it isn't __always empty__. I.e., you might see it written as `int main(int argc, char* argv[])`; more of that later.

* We now move inside of `int main()`.

    - `int num_protons {11};`
    - `int num_electrons {11};`
    - `int num_neutrons {12};`

    - These are __variables__. They represent regions of computer memory.
    - In the above case, we have __defined__ and __initialised__ 3 variables which are of ___integer type___; __whole numbers__ essentially.
    - The actual name we give to these variables, e.g., `num_protons`, is a way of naming the region of memory which has a value of __11__.
    - Note: the variables have been initialised using ___brace initialisation___ as opposed to using say, `int num_protons = 11;`, which is fine.
    - However, that traditional way of initialisation has some limitations which we'll explore later.

* __Arithmetic Operation__

    - The expression `int atomic_mass = num_protons + num_neutrons;` is simply addition.
    - We have taken two integers and added them together to get a 3rd integer.

* __Input and Output__

    - We display the result of addition and values of the variables we intialised by using `std::println();`
    - This function prints out what data/values its been given and `automatically inserts a new line`.
    - This is a `C++23` addition.
    - Prior to `std::println();`, you would use `std::print()` from `C++20` which comes from the `<print>` header file.
    - Before `C++20`, you would use `std::cout` which means ___character output___.
    - If you wanted to insert a new line after printing something out, you would either attach `"\n";` or `std::endl;` at the end.
    - `"\n";` means `new line` and `std::endl;` will also allow you to insert a new line.
    - However, there's more to it than that. `std::endl` ___flushes the buffer___, which means that whatever is in the buffer must be written to the console. More of that later.


#### The Standard Library and Modules
---

* We've already seen `import std;` in the program `main.cpp` and above. Lets chat more about this.
* So, `imports std;` ___imports___ the module named `std`, which allows all types and functionality that the module named `std` ___exports___ available in the program `main.cpp`.

* The __standard library module__ is special to `C++23` because it comes pre-configured with any `C++23`-compilient compiler. E.g. `g++ 15.1.0`.
* If you omit `import std;` you wouldn't be able to use, for example, `std::println()`.
* The `std` module is new in `C++23`.
* Before `C++23`, you had to know what you wanted to use from the `std` library.
* For example, if you wanted to use `std::println()` you had to import by doing `#include <print>`.

#### Functions
---

* Every `C++` program has at least one ___function___.
* In `main.cpp`, the only function present is `int main()`.
* A function is a named block of code that carries out a well-defined operation, such as __read the input data__, or __calculate the average value__.
* A function is ___executed___ or ___called___ by using its name.
* With the function `int main()` in our program `main.cpp`, all the executable code/functionality is included ___inside___ `int main()`.
* The `main()` function calls other functions, which in tern, can call.
* The function `int main()` is called the ___function header___, which identifies the function.
* Here, `int` is a type name that defines the type value that the `main()` function returns when it finishes execution - an ___integer___.
* An __integer__ is a ___whole number___ without a ___fractional component___.
* For example, `54` and `-2023` are examples of integers, while `3.1469` and `1/4` are not.
* In general, the parentheses following a name in a function definition enclose the specification for information to be passed to the function when you call it.
* In `main()`, theres nothing between the parentheses in this function, however, there can be, as we'll see.


#### Statements
---

* A ___statement___ is a basic unit in a `C++` program.
* All statesments are enclosed by `{}` and they all end with a semi-colon `;`.
* A statement defines something, such as a computation.
* The first statements we come across are the __variables__ used for the program. I.e.:

    ```cpp

    int num_protons {11};
    int num_electrons {11};
    int num_neutrons {12};

    ```

#### Variable assignment and initialization
---

* We have covered this, but here it is again:

* Take the first variable called `int num_protons {11};`. The same exact idea holds for the other two.

    - We defined a variable called `num_protons`, which is a named bit of memory for storing data.
    - The data this variable holds is an __integer__ with the value `11`.
    - You can see that we created this variable which can __only hold integer data types__.
    - For this variable, we ___defined___ and ___initialised___ this variable.
    - This can be seen if we look at this like so:
    - __Define__ the variable: `int num_protons {};`
    - __Initialise__ the variable: `num_protons {11};`
    - Here, you can see the process of defining and initialising a variable.
    - However, its best to just do this we've already done it; saves space; its on one line.

* With the variables (which are statements), we have initialised them via ___brace initialisation___ as can be seen via the braces `{}`.
* Its important to consider to consider other ways of initialising variables, or ___assigning them with a value___.
* Consider the three variables again:

    ```cpp

    int num_protons = 11;
    int num_electrons = 11;
    int num_neutrons = 12;

    ```

* This is very different to the original form.
* Here we have used `=` , or, the ___assignment operator___.
* By default, assignment ___copies___ the value on the right-hand side of the ___= operator___ to the variable on the left-hand side of the operator.
* This is called ___copy assignment___.
* Assignment can be used whenever we want to change the value held by a variable.
* I.e.:

    ```cpp

    int num_protons; // define a variable of type int named num_protons
    num_protons = 11; // copy assignment  of value 11 into variable num_protons

    ```

##### Other Forms of Initialisation
---

* Assignment is pretty straightforward. However, initialisation is quite complex.
* The code snippet below shows 5 common forms of initialisation:

    ```cpp

    int a; // default-initialisation (no initialiser)

    // traditional initialisation forms:

    int b = 5; // copy-initialisation (inital value after equals sign)
    int c (6); // direct-initialisation (intial value in parenthesis)

    // modern initialisation forms (prefered):

    int d {7}; // direct-list initialisation (initial value in braces)
    int e {}; // value-initialisation (empty braces) - empty so this value is 0

    ```

##### Copy Initialisation

* Recall, this looks like:

    ```cpp

    int num_protons = 11;

    ```

* Much like __copy-assignment__, this copies the value on the right-hand side of the equals into the variable

##### Brace Initialisation
---
