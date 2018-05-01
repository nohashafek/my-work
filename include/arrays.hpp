#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include "mathematics.hpp"
namespace arrays
{
struct DoubleArray
{
  double *base;
  int arraySize;
};
struct CharacterArray
{
  char *base;
  int size;
};

void printAll(double *base, int arraySize)
{

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << base[i] << std::endl;
  }
}
void printAll(DoubleArray array)
{
  for (int i = 0; i < array.arraySize; i++)
  {
    std::cout << array.base[i] << std::endl;
  }
}
double maxArray(double *base, int arraySize)
{
  double maxelement = base[0];
  for (int i = 1; i < arraySize; i++)
  {

    if (base[i] > maxelement)
    {
      maxelement = base[i];
    }
  }
  return maxelement;
}
double maxArray(DoubleArray array)
{
  double maxelement = array.base[0];
  for (int i = 1; i < array.arraySize; i++)
  {

    if (array.base[i] > maxelement)
    {
      maxelement = array.base[i];
    }
  }
  return maxelement;
}

double minArray(double *base, int arraySize)
{
  double minielement = base[0];
  for (int i = 1; i < arraySize; i++)
  {

    if (base[i] < minielement)
    {
      minielement = base[i];
    }
  }
  return minielement;
}
double minArray(DoubleArray array)
{
  double minielement = array.base[0];
  for (int i = 1; i < array.arraySize; i++)
  {

    if (array.base[i] < minielement)
    {
      minielement = array.base[i];
    }
  }
  return minielement;
}
double meanArray(double *base, int arraySize)
{
  double sum = 0;
  for (int i = 0; i < arraySize; i++)
  {
    sum = sum + base[i];
  }
  return sum / arraySize;
}
double meanArray(DoubleArray array)
{
  double sum = 0;
  for (int i = 0; i < array.arraySize; i++)
  {
    sum = sum + array.base[i];
  }
  return sum / array.arraySize;
}

double varianceArray(double *base, int arraySize)
{
  double sum = 0;
  double deviation = 0;
  double mean = arrays::meanArray(&base[0], arraySize);
  for (int i = 0; i < arraySize; i++)
  {
    deviation = mean - base[i];
    sum = sum + mathematics::square(deviation);
  }
  return sum / arraySize;
}
double varianceArray(DoubleArray array)
{
  double sum = 0;
  double deviation = 0;
  double mean = arrays::meanArray(&array.base[0], array.arraySize);
  for (int i = 0; i < array.arraySize; i++)
  {
    deviation = mean - array.base[i];
    sum = sum + mathematics::square(deviation);
  }
  return sum / array.arraySize;
}
int countCharacter(CharacterArray dna, char query)
{
  int counter = 0;
  for (int i = 0; i < dna.size; i++)
  {
    if (dna.base[i] == query)
    {
      counter++;
    }
  }

  return counter;
}
}

#endif // ARRAYS_HPP
