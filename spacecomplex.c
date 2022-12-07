#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main()
{
    int MatSize = 500;

    int* M = (int*) malloc(MatSize * MatSize * sizeof(int));
    int* V = (int*) malloc(MatSize * sizeof(int));
    int* MV = (int*) malloc(MatSize * sizeof(int));
    
    initMatRand(M, 0, 15, MatSize);
    initVecRand(V, 0, 15, MatSize);

    while(1)
    {
     matVecMult(M, V, MV, MatSize);
    }
   
   return 0;
}