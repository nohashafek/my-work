#ifndef MEMBER2_HPP
#define MEMBER2_HPP
#include <iostream>
struct Node
{
    double data;
  struct Node *next;
};
struct pointer
{
Node *Top;
};
void creatstack (pointer* pos)
{
pos->Top=NULL;
}
void push(double element,pointer* pos)
{Node *pon=new Node;
pon->data=element;
pon->next=pos->Top;
pos->Top=new Node;
};
void pop(double *poe ,pointer *pos)
{
Node *pn;
*poe=pos->Top->data;
pn=pos->Top;
pos->Top=pos->Top->next;
delete pn;
};
int stackisempty(pointer *pos)
{if(pos->Top==NULL)
return 1;
else
return 0;
};
int stacksize(pointer *pos)
{
int x;
Node *pn = pos->Top;
for (x=0;pn;pn=pn->next)
x++;
return x;
}
void clearstack(pointer *pos)
{
Node *pn = pos->Top;
while (pn)
{pn=pn->next;
delete pos->Top;
pos->Top=pn;
}
}
double front(pointer *pos)
{return pos->Top->data;
}



#endif // MEMBER2_HPP
