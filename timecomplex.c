#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(void) {
    
        int MatSize = 3;
        
        int* M = (int*) malloc(MatSize * MatSize * sizeof(int));
        int* V = (int*) malloc(MatSize * sizeof(int));
        int* MV = (int*) malloc(MatSize * sizeof(int));
        
        initMatRand(M, 0, 15, MatSize);
        initVecRand(V, 0, 15, MatSize);
        int start = clock();
        matVecMult(M, V, MV, MatSize);
        int end = clock();
        double duration = (double)(end-start)/CLOCKS_PER_SEC;
        printf("time elapsed: %f\n", duration);
    

    return 0;
}     