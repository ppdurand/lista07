#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
  int X, Y;
  float Z;
}node;

int main(void) {

    node *pStruct;

    pStruct = malloc(TAM * sizeof(node));

    if(!pStruct){
        puts("Nao foi possivel alocar o ponteiro");
        exit(1);
    }

    pStruct->X = 10;
    pStruct->Y = 11;
    pStruct->Z = (float)(pStruct->X + pStruct->Y)/2;

    printf("\nX: %d \nY: %d\n", pStruct->X, pStruct->Y);
    printf("MEDIA: %.2f\n", pStruct->Z);

    return 0;
}