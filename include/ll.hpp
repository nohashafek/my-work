#ifndef MEMBER4_HPP
#define MEMBER4_HPP
#include <iostream>

namespace linkedlist
{
struct intnode 
{
    int data;
    intnode *next ;
};
struct doublenode 
{
    double data;
    doublenode *next ;
};
struct charnode 
{
    char data;
    charnode *next ;
};

struct intLL
{
    intnode *head ;
    intnode *tail ;
};
struct doubleLL
{
    doublenode *head ;
    doublenode *tail ;
};

struct charLL
{
    charnode *head ;
    charnode *tail ;
};
//...........................................................
void insertFront( intLL &list , int data )
{
list.head=new intnode{data,list.head};
}
void insertFront( doubleLL &list , double data )
{
list.head=new doublenode{data,(list.head)};
}
void insertFront( charLL &list , char data )
{
list.head=new charnode{data,(list.head)};
}

//...................................................
void insertBack ( intLL &list,int data )
{
list.tail->next=new intnode{data,nullptr};
list.tail=list.tail->next;
}
void insertBack ( doubleLL &list , double data )
{
list.tail->next=new doublenode{data,nullptr};
list.tail=list.tail->next;
}
void insertBack ( charLL &list , char data )
{
list.tail->next=new charnode{data,nullptr};
list.tail=list.tail->next;
}
//...........................................................
void removeFront( intLL &list )
{
    intnode *p;
    p = list.head;
    list.head=list.head->next;
    delete p;
}
void removeFront( doubleLL &list )
{
    doublenode *p;
    p = list.tail;
    list.head=list.head->next;
    delete p;   
}
void removeFront( charLL &list )
{
    charnode *p;
    p = list.tail;
    list.head=list.head->next;
    delete p;  
}

//..............................................................
void removeBack( intLL &list )
{
    intnode *p=list.head;
   
    while (p->next!=list.tail)
    {
        p=p->next;
    }
delete list.tail ;
p->next=nullptr;
list.tail=p;
}
void removeBack( doubleLL &list )
{
    doublenode *p=list.head;
   
    while (p->next!=list.tail)
    {
        p=p->next;
    }
delete list.tail ;
p->next=nullptr;
list.tail=p;
}
void removeBack(charLL &list )
{
    charnode *p=list.head;
   
    while (p->next!=list.tail)
    {
        p=p->next;
    }
delete list.tail ;
p->next=nullptr;
list.tail=p;
}
//......................................................
int getAt( intLL &list, int index )
{
    intnode *p;
    p=list.head;
    int i;
    for (i=0;i<=(index-1);i++)
    {
        p=p->next ;
    }
return p->data ;
}
double getAt( doubleLL &list, int index )
{
    doublenode *p;
    p=list.head;
    int i;
    for (i=0;i<=(index-1);i++)
    {
        p=p->next ;
    }
return p->data ;
}
char getAt( charLL &list, int index )
{
    charnode *p;
    p=list.head;
    int i;
    for (i=0;i<=(index-1);i++)
    {
        p=p->next ;
    }
return p->data ;
}
//......................................................
void removeAt( intLL &list , int index )
{
    int x=getAt(list , index);
    intnode *p;
    p = list.head;
    intnode *d;
    d=list.head;
    if (p->data==x)
    {
        list.head=p->next;
    }
    else 
    {
     while (p->data != x )
        {
            d=p;
            p=p->next;
        }
    
        d->next=p->next;
    }
    delete p ;
}
void removeAt( doubleLL &list , int index )
{
    double x=getAt(list, index);
    doublenode *p;
    p = list.head;
    doublenode *d;
    d =list.head;
    if (p->data==x)
    {
        list.head=p->next;
    }
    else 
    {
     while (p->data != x )
        {
            d=p;
            p=p->next;
        }
    
        d->next=p->next;
    }
    delete p ;
}
void removeAt( charLL &list , int index )
{
    char x=getAt(list, index);
    charnode *p;
    p = list.head;
    charnode *d;
    d =list.head;
    if (p->data==x)
    {
        list.head=p->next;
    }
    else 
    {
     while (p->data != x )
        {
            d=p;
            p=p->next;
        }
    
        d->next=p->next;
    }
    delete p ;
}

}

#endif

