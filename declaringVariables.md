# Declaration of variables

C++ is a strongly-typed language, and requires every variable to be declared with its type before its first use. This informs the compiler the size to reserve in memory for the variable and how to interpret its value. The sysntax to declare a new variable in C++ is straightforward. We simply write the type followed by the variable name(i.e., its identifier). For example:

```c++
int a;
float myNumber;
```

These are two valid declarations of variables. The first one declares a variable of type int with the identifier a. The second one declares a variable of type float with the identifier mynumber. Once declared, the variables a and mynumber can be used within the rest of their scope in the program.
If declaring more than one variable of the same type, they can all be declared in a single statement by separating their identifiers with commas. For example:

```c++
int a,b,c;
```

This declares three variables (a, b and c), all of them of type int, and has exactly the same meaning as:

```c++
int a;
int b;
int c;
```

To see what variable declarations look like in action within a program, let's have a look at the entire C++ code of the example about your mental memory proposed at the beginning of this chapter:

```c++
// operating with variables

#include <iostream>

using namespace std;

int main ()
{
    // declaring variables:
    int a, b;
    int result;

    // process
    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    // print out the result:
    cout << result;

    // termiante the program;
    return 0;
}
```

Don't be worried if something else than the varialbe declarations themselves look a bit strange to you. Most of it will be explained in more detail in coming chapters;
