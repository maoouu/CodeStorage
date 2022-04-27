#include "mystack.h"

stack_size_error::stack_size_error(const std::string &msg) : std::length_error(msg){};
stack_bad_alloc::stack_bad_alloc(void) : std::bad_alloc(){};
stack_overflow::stack_overflow(const std::string &msg) : std::logic_error(msg){};
stack_empty::stack_empty(const std::string &msg) : std::logic_error(msg){};

Stack::Stack(int input_size)
{
    if (input_size <= 0)
        throw stack_size_error("Size must not be <= 0");
    try
    {
        stack_store = new int[input_size];
    }
    catch (std::bad_alloc &err)
    {
        throw stack_bad_alloc();
    }
    stack_size = input_size;
    SP = 0;
}

Stack::~Stack(void)
{
    delete[] stack_store;
}

void Stack::push(int input_value)
{
    if (SP == stack_size)
        throw stack_overflow("Stack size exceeded max size");
    stack_store[SP++] = input_value;
}

int Stack::pop(void)
{
    if (SP == 0)
        throw stack_empty("Stack is empty.");
    return stack_store[--SP];
}
