#ifndef ECG_HPP
#define ECG_HPP
#include<cmath>
#include "arrays.hpp"

namespace ecg
{
   
    void analyzeECG( double *base , int arraySize , double &mean, double &variance, double &max, double &min )
    {

         
         variance =  arrays::varianceArray(base , arraySize);
         max =  arrays::maxArray(base , arraySize);
         mean =  arrays::meanArray(base , arraySize);
         min =  arrays::minArray(base , arraySize);
        
    }
   
    
    using ECGArray = arrays::DoubleArray;


struct Statistics
{
double mean=0;
double variance=0;
double min=0;
double max=0;

};
Statistics analyzeECG(  ECGArray ecg )
{
   Statistics analysis;

   analysis.mean = meanArray(ecg);
    analysis.variance =varianceArray(ecg);
   analysis.max=maxArray(ecg);
    analysis.min=minArray(ecg);
    return analysis;
}



}





#endif // ECG_HPP
