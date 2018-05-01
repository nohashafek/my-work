#include <iostream>
#include "stack-ll.hpp"
char transverse (char x)
{
    if (x=='(')
        return ')';
    if (x=='[')
        return ']';
    if (x=='{')
        return '}';
    if(x == ')')
        return '(';
    if(x == ']')
        return '[';
    if(x=='}')
        return '{';
}
bool compare(char y , char z)
{
    return ( y==z );
}
int main( int argc , char **argv ) {
    stack::CharStack stack;
    int counter = 0;
    char currentChar = argv[1][counter++];
    while (currentChar != '\0') {

        if (stack::isEmptyStack(stack)) {
            stack::push(stack, currentChar);
        } else {
            char ch = stack::pop(stack);
            if (ch != transverse(currentChar)) {
                stack::push(stack, ch);
                stack::push(stack, currentChar);
            }
        }
        currentChar = argv[1][counter++];
    }
    if ((stack::isEmptyStack(stack))) {
        std::cout << "Balanced parentheses in the expression" << std::endl;
    } else {
        std::cout << "Unbalanced parentheses in the expression" << std::endl;
    }
}