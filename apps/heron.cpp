#include "mathematics.hpp" // for mathematics::heron
#include <iostream>        // for std::cout
#include <algorithm>       // for std::atof
#include <string>

int main(int argc, char **argv)
{
    /*
    mathematics::Triangle t{0, 0, 0};
    */
    double a=0;
     double b=0;
     double c=0;
    if(argc==1)
     {
         std::cin >> a >> b >> c ;
     }
     else if(argc==4)
     {
       a = std::atof(argv[1]); // a,b and c are the sides of the triangle
       b = std::atof(argv[2]);
       c = std::atof(argv[3]);
       /*
     double area = mathematics::heron(t);
    std::cout << "Area =  " << area << std::endl;
    */
      std::cout << mathematics::heron( a , b , c ) << std::endl;
    return 0; 
}
}