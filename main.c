#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main()
{
    int MatSize = 3;

    int* M = (int*) malloc(MatSize * MatSize * sizeof(int));
    int* V = (int*) malloc(MatSize * sizeof(int));
    int* MV = (int*) malloc(MatSize * sizeof(int));
    
    initMatRand(M, 0, 10, MatSize);
    initVecRand(V, 0, 10, MatSize);

    matVecMult(M, V, MV, MatSize);

    printf("Matrix = ");
    printMat(M, MatSize);
    printf("Vector =");
    printVec(V, MatSize);
    printf("Matrix Vector = ");
    printVec(MV, MatSize);

    free(M);
    free(V);
    free(MV);

    return 0;
}
