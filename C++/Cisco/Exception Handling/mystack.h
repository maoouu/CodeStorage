#ifndef __MYSTACK__
#define __MYSTACK__

#include <iostream>
#include <exception>
#include <stdexcept>

//======================================
/*
    Build the following classes:
    1.) stack_size_error()
    2.) stack_bad_alloc()
    3.) stack_overflow()
    4.) stack_empty()
*/
//======================================
class stack_size_error : public std::length_error
{
public:
    explicit stack_size_error(const std::string &msg);
};
//======================================
class stack_bad_alloc : public std::bad_alloc
{
public:
    explicit stack_bad_alloc(void);
};
//======================================
class stack_overflow : public std::logic_error
{
public:
    explicit stack_overflow(const std::string &msg);
};
//======================================
class stack_empty : public std::logic_error
{
public:
    explicit stack_empty(const std::string &msg);
};
//======================================

class Stack
{
private:
    int *stack_store;
    int stack_size;
    int SP; // stack pointer

public:
    Stack(int input_size = 100); // stack constructor
    ~Stack();                    // stack deconstructor
    void push(int value);        // "push" method
    int pop(void);               // "pop" method
};

//======================================

#endif