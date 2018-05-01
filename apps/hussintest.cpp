
#include "member5.hpp"

// g++ -std=c++11 testLinkedList.cpp -o someTest
// ./someTest

int main()
{
    linkedlist::IntegerLinkedList m;

    linkedlist::insertFront(  m , 10 );
    linkedlist::insertFront(  m , 23 );
    linkedlist::insertFront(  m , 44 );
    linkedlist::insertFront(  m , 22 );
    linkedlist::insertFront(  m , 10 );
    linkedlist::insertFront(  m , 10 );
    linkedlist::insertFront(  m , 10 );

    linkedlist::printAll( m );
}
