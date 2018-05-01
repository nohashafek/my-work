#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"



char complementaryBase( char base )
{
     if( base == 'A' )
    {
        return 'T';
    }
    else if( base == 'T' )
    {
        return 'A';
    }
    else if( base == 'C' )
    {
        return 'G';
    }
    else
    {
        return 'C';
    }
}
int countCharacter( char *basePointer , int size , char query )
{
    if(query=='A'){
int j=0;
for(int i=0;i<size;i++){
if(query==basePointer[i])
j=j+1;
}
return j;
}

if(query=='G'){
int j=0;
for(int i=0;i<size;i++){
if(query==basePointer[i])
j=j+1;
}
return j;

}

if(query=='C'){
int j=0;
for(int i=0;i<size;i++){
if(query==basePointer[i])
j=j+1;
}
return j;
}

if(query=='T'){
int j=0;
for(int i=0;i<size;i++){
if(query==basePointer[i])
j=j+1;
}
return j;
}
} 

char * complementarySequence( char *base, int size )
{
    char *na=new char[size];

    int i=0;
    int j=size-1;
    for( i;i<size;i++){
    na[j]=complementaryBase(base[i]);
    j--;
    }
    std::copy( &na[0] , &na[13 - 1] , &base[0] );
    return base;
}

char *analyzeDNA( char *base, int size, int &countA, int &countC, int &countG, int &countT )
{
    countA=countCharacter( base ,  size ,  'A' );
    countC=countCharacter( base ,  size ,  'C' );
    countG=countCharacter( base ,  size ,  'G' );
    countT=countCharacter( base ,  size ,  'T' );
    base=complementarySequence( base, size );

}




#endif // DNA_HPP
