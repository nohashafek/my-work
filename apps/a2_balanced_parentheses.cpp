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
}
bool compare(char y , char z)
{
    return ( y==z );
}
int main( int argc , char **argv )
{
stack::CharStack stack;
int i;
bool B=true;
if ((argv[1][0]==')')||(argv[1][0]==']')||(argv[1][0]=='}'))
    {
        std::cout<<"Unbalanced parentheses"<<std::endl;
    }
   else
    {    for (i=1 ;i<=(argc-1); i++)
        {
            if ((argv[i][0]=='{')||(argv[i][0]=='(')||(argv[i][0]=='['))
           {
               char a=transverse (argv[i][0]);
               stack::push(stack,a );
           }
           
                else
                {
                    char b=stack::pop(stack);

				
                    if ((compare(b,argv[i][0]))!=true)
                        {
			    B=false;
                            std::cout<<"Unbalanced parentheses"<<std::endl;
                        }
    
                }

        }
        if ((stack::isEmptyStack(stack))&&(i==(argc))&&B)
            {
                std::cout<<"Balanced parentheses"<<std::endl;
            }
                else
                {   if (B)
                     {std::cout<<"Unbalanced parentheses"<<std::endl;}   
                }
        
    }

}
