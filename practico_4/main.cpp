#include <iostream>

#include "./lib/minimoIterativo.hpp"
#include "./lib/invierte_iterativo.hpp"

int main()
{
 int arreglo[5];

 for ( int i = 0; i<5; i+=1){
   std::cout << arreglo[i] << std::endl;
    std::cout << "-" << std::endl;
 }
 Invierte_Iterativo( arreglo, 5);

 for ( int i = 0; i<5; i+=1){
   std::cout << arreglo[i] << std::endl;
    std::cout << "-" << std::endl;

 }

}


