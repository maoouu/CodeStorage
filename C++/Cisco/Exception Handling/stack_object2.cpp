#include "mystack.h"
#include <iostream>
/*
    [Stacks (Version 2)]
    Our good old friend, the stack, is back! We’re going to rewrite it in order to:
    * make it more reliable and safe
    * show how exceptions can improve the quality of the code
    * present a simple example of building an independent, reusable module
    
    - We’ve introduced two important amendments compared to its previous incarnations:
    * The values stored in the stack are still located inside an array, 
    but the size of the array is defined dynamically by the constructor.
    
    * As a consequence of the previous modification, 
    we’ve had to add a destructor responsible for removing the array 
    at the end of the stack’s life.
*/

int main()
{
    try
    {
        Stack sample_stack(0);
        sample_stack.push(1);
        std::cout << sample_stack.pop() << std::endl;
    }
    catch (stack_bad_alloc err)
    {
        std::cerr << "No more space in the stack" << '\n';
    }
    catch (stack_size_error err)
    {
        std::cerr << "Stack size doesn't exist" << '\n';
    }
    catch (stack_overflow err)
    {
        std::cerr << "Stack unable to handle more pushes" << '\n';
    }
    catch (stack_empty err)
    {
        std::cerr << "Stack is empty" << '\n';
    }

    return 0;
}