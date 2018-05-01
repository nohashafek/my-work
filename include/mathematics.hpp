#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath> // for std::sqrt

namespace mathematics
{
struct Triangle
{
    double a;
    double b;
    double c;
};
double calculation(double a, double b, char operation)
{
    if (operation == '+')
    {
        return a + b;
    }
    else if (operation == '-')
    {
        return a - b;
    }
    else if (operation == '*')
    {
        return a * b;
    }
    else if (operation == '/')
    {
        return a / b;
    }
    else
    {
        return 0;
    }
}

double heron(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    double area = std::sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
double heron(Triangle t)
{
    double s = (t.a + t.b + t.c) / 2;
    double area = std::sqrt(s * (s - t.a) * (s - t.b) * (s - t.c));
    return area;
}
double square(double num)
{
    return num * num;
}
}

#endif // MATHEMATICS_HPP
