#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct{

  int X;
  int Y;
  float Z;

}node;


int main(void) {
    int *pNode;

    pNode = malloc(2*sizeof(int));
    if(!pNode){
        puts("Nao foi possivel alocar memoria");
        exit(1);
    }

    *(pNode+1) = 15;

    printf("%d\n", pNode[1]);

    pNode = malloc(3*sizeof(2));

    printf("%d\n", pNode[1]);
    
    return 0;
    }