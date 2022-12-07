#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "mylib/mylib.h"
FILE *testtime;

int main(void) {
    testtime = fopen("time.dat","w");
    for(int MatSize = 1000; MatSize <=5000; MatSize +=100) {
        int* M = (int*) malloc(MatSize * MatSize * sizeof(int));
        int* V = (int*) malloc(MatSize * sizeof(int));
        int* MV = (int*) malloc(MatSize * sizeof(int));
        
        initMatRand(M, 0, 15, MatSize);
        initVecRand(V, 0, 15, MatSize);
        int start = clock();
        matVecMult(M, V, MV, MatSize);
        int end = clock();
        double duration = (double)(end-start)/CLOCKS_PER_SEC;
        fprintf(testtime, "(%d,%f),", MatSize, duration);
    }

    return 0;
}     