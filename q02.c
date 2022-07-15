#include <stdio.h>

typedef struct{
    int x;
    int y;
    float z;
}Node;

void mediaZ(int *x, int *y, float *z){
    *z = (*x + *y) / 2;
}

int main(){
    Node node;
    Node *pontNode = &node;
    
    puts("Digite o valor de X:");
    scanf("%d",&pontNode->x);
    
    puts("Digite o valor de Y:");
    scanf("%d",&pontNode->y);
    
    mediaZ(&pontNode->x,&pontNode->y, &pontNode->z);
    
    printf("MEDIA: %f", pontNode->z);

    return 0;
}
