#include <iostream>

/*
    [Stacks]
    - A stack is a structure developed to store data in a very specific way.
    - The alternative name for a stack (but only in IT terminology, of course) is LIFO. 
    - This is an abbreviation for a description of the stack’s behaviour: “Last In – First Out”.
    - A stack is an object to two elementary operations conventionally named “push” 
    (when a new element is placed on the top) and “pop” (when an existing element is taken 
    away from the top).

    - Let’s try to implement a stack in “C++”. It’ll be a very simple stack. It’ll be able to store int values only.
    - We’ll show you how to do it in two independent approaches: [procedural] and [objective].
*/

/* Procedural Method */
int stack[100]; // stack array
int SP = 0;     // stack pointer

void push(int value)
{
    stack[SP++] = value;
}

int pop(void)
{
    return stack[--SP];
}

int main()
{
    push(4);
    push(2);
    push(0);

    std::cout << pop() << std::endl;
    std::cout << pop() << std::endl;
    std::cout << pop() << std::endl;

    return 0;
}