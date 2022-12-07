#include <stdio.h>
#include <stdlib.h>

void printMat(int* M, int MatSize){

    printf("[");
    for(int i=0; i < MatSize; i++){
        printf("\n");
        for(int j=0; j < MatSize; j++){
            printf("%d,\t",M[MatSize*i+j]);
        }
    }
    printf("]\n");

}

void printVec(int* V, int MatSize){
    printf("[");
    for(int i=0; i<MatSize; i++){
        printf("\n");
        printf("%d,\t",V[i]);
    }
    printf("]\n");
}

void matVecMult(int* M, int* V, int* MV, int MatSize){

    for(int i=0; i<MatSize; i++){
        MV[i]=0;
        for(int j=0; j<MatSize; j++){
            MV[i] += M[MatSize*i+j]*V[j];
        }
    }

}

void initMatRand(int* M, int lower, int upper, int MatSize){
    for (int i = 0; i < MatSize; i++){
        for (int j = 0; j < MatSize; j++)
        {
            M[i*MatSize+j] = (rand() % (upper-lower+1)) + lower;
        } 
    }
}

void initVecRand(int* V, int lower, int upper, int MatSize){
    for (int i = 0; i < MatSize; i++){
        V[i] = (rand() % (upper-lower+1)) + lower;
    }
}