#include <iostream>
#include <algorithm>
#include "stack-ll.hpp"

int main( int argc , char **argv )
{
    if (argc<3)
    {
        std::cout << "Insert at least 2 elements" << std::endl ;
    }

    else 
    
    {
    
        int price[argc-1] ;
        int span[argc-1] ;
        stack::IntegersStack holder ;

        for (int i=0 ; i<argc-1 ; ++i)
        {
            price[i] = std::atoi(argv[i+1]) ;
        }

        span[0] = 1 ;
        stack::push(holder,0) ;

        for (int i = 1 ; i<argc-1 ; ++i)
        {

            int x = 0 ; // we don't need x put I used it to be able to call pop

            while( price[i] >= price[holder.array[holder.top]] && holder.top != -1)
            {  
                x = stack::pop(holder) ;
            }
            
            if (holder.top == -1)
            {
                span[i] = i+1 ;
            }
            else 
            {
                span[i] = i - (holder.array[holder.top]) ;
            }
                
                stack::push(holder,i) ;
            
        }

        for (int i = 0; i<argc-1 ;++i)
        {
            std::cout<<span[i]<<" "<<std::endl ;
        }
    }

}