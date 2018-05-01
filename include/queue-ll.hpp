#ifndef MEMBER3_HPP
#define MEMBER3_HPP
#include "ll.hpp"
#include "ll.hpp"

namespace queue
 
{   //Remeber "Don't Repeat yourself" ^_^
	
    void enqueue( linkedlist::doubleLL &queue , double data );
    double dequeue( linkedlist::doubleLL &queue );
    double front( linkedlist::doubleLL &queue );
    bool isEmpty( linkedlist::doubleLL &queue );
    double size( linkedlist::doubleLL &queue );
    void clear( linkedlist::doubleLL &queue );

    void enqueue( linkedlist::charLL &queue , char data );
    char dequeue( linkedlist::charLL &queue );
    char front( linkedlist::charLL &queue );
    bool isEmpty( linkedlist::charLL &queue );
    char size( linkedlist::charLL &queue );
    void clear( linkedlist::charLL &queue );
    

    void enqueue( linkedlist::doubleLL &queue , double data )
    {
        linkedlist::insertBack( queue , data ) ;
    }

    double front( linkedlist::doubleLL &queue )
    {
        return linkedlist::front( queue ) ;
    }

    double dequeue( linkedlist::doubleLL &queue )
    {
        double x = queue::front( queue ) ;
        linkedlist::removeFront( queue ) ;
        return x ;
    }

    
    bool isEmpty( linkedlist::doubleLL &queue )
    {
        return linkedlist::isEmpty( queue ) ;
    }

    double size( linkedlist::doubleLL &queue )
    {
        return linkedlist::size( queue ) ;
    }

    void clear( linkedlist::doubleLL &queue )
    {
        linkedlist::clear( queue );
    }


/* Using Character */

    void enqueue( linkedlist::charLL &queue , char data )
    {
        linkedlist::insertBack( queue , data ) ;
    }

    char front( linkedlist::charLL &queue )
    {
        return linkedlist::front( queue ) ;
    }

    char dequeue( linkedlist::charLL &queue )
    {
        char x = queue::front( queue ) ;
        linkedlist::removeFront( queue ) ;
        return x ;
    }

    bool isEmpty( linkedlist::charLL &queue )
    {
        return linkedlist::isEmpty( queue ) ;
    }

    char size( linkedlist::charLL &queue )
    {
        return linkedlist::size( queue ) ;
    }

    void clear( linkedlist::charLL &queue )
    {
        linkedlist::clear( queue );
    }
}


#endif // MEMBER3_HPP
