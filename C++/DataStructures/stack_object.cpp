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

/* Object-Oriented Method */
//=================================================

class Stack
{
private:
    int stackstore[100]; // int vector
    int SP;              // stack pointer

public:
    Stack(void);          // stack constructor
    void push(int value); // "push" method
    int pop(void);        // "pop" method
};

Stack::Stack(void)
{
    SP = 0;
}

void Stack::push(int value)
{
    stackstore[SP++] = value;
}

int Stack::pop(void)
{
    return stackstore[--SP];
}

//=================================================

class AddingStack : Stack // subclass "AddingStack"
{
private:
    int sum;

public:
    void push(int value);
    int pop(void);
    int getSum(void);
    AddingStack(void);
};

AddingStack::AddingStack(void) : Stack() // subclass constructor
{
    sum = 0;
}

void AddingStack::push(int value)
{
    sum += value;
    Stack::push(value);
}

int AddingStack::pop(void)
{
    int val = Stack::pop();
    sum -= val;
    return val;
}

int AddingStack::getSum(void)
{
    return sum;
}

//=================================================

int main()
{
    Stack little_stack, another_stack, funny_stack;

    // little_stack.SP++; /* returns an error */

    /*
    little_stack.push(1);
    another_stack.push(little_stack.pop() + 1);
    funny_stack.push(another_stack.pop() + 2);
    std::cout << funny_stack.pop() << std::endl;
    */

    AddingStack super_stack;

    for (int i = 1; i < 10; i++)
        super_stack.push(i);

    std::cout << super_stack.getSum() << std::endl;

    for (int i = 1; i < 10; i++)
        super_stack.pop();

    std::cout << super_stack.getSum() << std::endl;

    return 0;
}