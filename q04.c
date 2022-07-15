#include <stdio.h>
#include <stdlib.h>

#define tam 2

typedef struct node{
  int X, Y;
  float Z;
  struct node *p;
}node;


int main(void) {
    node *pStruct;

    pStruct = malloc(tam * sizeof(node));

    if(!pStruct){
        puts("ERRO AO ALOCAR A MEMORIA");
        exit(1);
    }

    pStruct->X = 10;
    pStruct->Y = 11;
    pStruct->Z = (float)(pStruct->X + pStruct->Y)/2;

    pStruct-> p  = (pStruct+1);
    (pStruct+1)-> X = 20;
    (pStruct+1)-> Y = 27;
    (pStruct+1)->Z = (float)((pStruct+1)->X + (pStruct+1)->Y)/2;
    
    printf("\nX: %d \nY: %d\n", pStruct->X, pStruct->Y);
    printf("\nX: %d \nY: %d\n", (pStruct+1)->X,(pStruct+1)->Y);
    printf("MEDIA: %.2f\n", pStruct->Z);
    printf("MEDIA DO PROXIMO: %d", pStruct->p->X);

    return 0;
}