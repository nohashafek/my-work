#ifndef MEMBER5_HPP
#define MEMBER5_HPP
#include "ll.hpp"
#include <iostream>

namespace linkedlist
{

void filter( intLL &list, int value) //remove nodes with given data
{
    intnode *p;
    p = list.head;
    intnode *d;
    d=list.head;
    if (p->data==value)
    {
        list.head=p->next;
    }
    else 
    {
     while (p->data != value )
        {
            d=p;
            p=p->next;
        }
    
        d->next=p->next;
    }
    delete p ;
}
void filter( doubleLL &list, double value) //remove nodes with given data
{
    doublenode *p;
    p = list.head;
    doublenode *d;
    d=list.head;
    if (p->data==value)
    {
        list.head=p->next;
    }
    else 
    {
     while (p->data != value )
        {
            d=p;
            p=p->next;
        }
    
        d->next=p->next;
    }
    delete p ;
}
void filter( charLL &list, char value) //remove nodes with given data
{
    charnode *p;
    p = list.head;
    charnode *d;
    d=list.head;
    if (p->data==value)
    {
        list.head=p->next;
    }
    else 
    {
     while (p->data != value )
        {
            d=p;
            p=p->next;
        }
    
        d->next=p->next;
    }
    delete p ;
}
//........................................................................
bool isEmpty(intLL &list)
{
return (list.head=nullptr);
}
bool isEmpty(doubleLL &list)
{
return (list.head=nullptr);
}
bool isEmpty(charLL &list)
{
return (list.head=nullptr);
}
//........................................................................
int size(intLL &list)
{
    int i = 0;
    intnode *jumper;
    jumper = list.head;
    while (jumper != nullptr)
    {
        jumper = jumper->next;
        i = i + 1;
    }
    return i;
}
double size(doubleLL &list)
{
    int i = 0;
    doublenode *jumper;
    jumper = list.head;
    while (jumper != nullptr)
    {
        jumper = jumper->next;
        i = i + 1;
    }
    return i;
}
int size(charLL &list)
{
    int i = 0;
    charnode *jumper;
    jumper = list.head;
    while (jumper != nullptr)
    {
        jumper = jumper->next;
        i = i + 1;
    }
    return i;
}
//...........................................................................
void printAll(intLL & list)
{
    intnode *current;
    current =list. head;

    while (current != nullptr)
    {
    std::cout << current->data <<std::endl;
    current = current->next;
    }
}
void printAll(doubleLL & list)
{
    doublenode *current;
    current =list. head;

    while (current != nullptr)
    {
    std::cout << current->data <<std::endl;
    current = current->next;
    }
}
void printAll(charLL & list)
{
    charnode *current;
    current =list. head;

    while (current != nullptr)
    {
    std::cout << current->data <<std::endl;
    current = current->next;
    }
}
//..............................................................................
void clear(intLL & list)
{
    intnode *current;
    while (list.head != nullptr)
    {
        current= list.head->next;
        delete list.head; 
        list.head = current;
    }
}
void clear(doubleLL & list)
{
    doublenode *current;
    while (list.head != nullptr)
    {
        current= list.head->next;
        delete list.head; 
        list.head = current;
    }
}
void clear(charLL & list)
{
    charnode *current;
    while (list.head != nullptr)
    {
        current= list.head->next;
        delete list.head; 
        list.head = current;
    }
}
//...................................................................................
int front( intLL &list )
{
    return list.head->data;
}
double front( doubleLL &list )
{
    return list.head->data;
}
char front( charLL &list )
{
    return list.head->data;
}
//...................................................
int back ( intLL &list )
{
    return list.tail->data ;
}
double back ( doubleLL &list )
{
    return list.tail->data;
}
char back ( charLL &list )
{
    return list.tail->data;
}
}
#endif // MEMBER5_HPP
