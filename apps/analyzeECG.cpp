#include "ecg.hpp" // for ecg::analyzeECG
#include "helpers arrays.hpp" // for helpers::loadECG

int main( int argc , char **argv )
{
    if( argc != 2 )
    {
        std::cout << "Invalid usage!" << std::endl;
        return 1;
    }
    else
    {
        int size = 0;
        double *ecgArray = helpers::getECG( argv[1] , size );

        double average = 0, standardDev = 0, max = 0 , min = 0;
        ecg::analyzeECG( &ecgArray[0] , size ,average , standardDev , max , min );

        std::cout <<"ECG average : " << average << std::endl
                 << "ECG variance: " << standardDev << std::endl
                 << "ECG range   : (" << min << "," << max << ")" << std::endl;

        delete [] ecgArray;
        return 0;
    }
}
