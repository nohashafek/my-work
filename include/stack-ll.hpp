#ifndef MEMBER1_HPP
#define MEMBER1_HPP
namespace stack
{

    struct IntegersStack
    {
        int array[100];
        int top = -1;
    };


     int size( IntegersStack &stack ) 
    {
       return ( stack.top + 1 );
    }

    bool isEmpty( IntegersStack &stack )
         
           {
              return ( stack.top == -1 );
           }


    void push( IntegersStack &stack , int data )
    {
                ++stack.top;
                stack.array[stack.top]=data;
    }



    int pop( IntegersStack &stack )
    { 
        
                int lifo = stack.array[ stack.top ];
               --stack.top;
                 return lifo;            
    
    }

   void clear( IntegersStack &stack )
   {
       stack.top = -1;
       
   }
int front( IntegersStack &stack )
{
    return stack.array[stack.top];
}

//Char
 struct CharStack
    {
        char array[100];
        int top = -1;
    };


void push( CharStack &stack, char data )
{
      ++stack.top;
         stack.array[stack.top]=data;
                  
   
}

char pop( CharStack &stack)
{
    if (stack.top==-1)
        {return 'n';}
    else 
    {
    char lifo = stack.array[stack.top];
    --stack.top;
    return lifo;
    }
    }



int size( CharStack &stack )
{
    return ( stack.top + 1 );
}


bool isEmptyStack( CharStack &stack )
{
    return ( stack.top == -1 );
}
void clear( CharStack &stack )
   {
       stack.top = -1;
       
   }






}
#endif // MEMBER1_HPP
