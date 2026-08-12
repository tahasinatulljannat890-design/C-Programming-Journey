#include <stdio.h>
int main() {
    int A[3],B[3],total=0;
    printf("Enter the value of A = ");
    for(int i=0; i<3; i++){
        scanf("%d", &A[i]);
    }
    printf("A = { ");
    for(int i=0; i<3; i++){
        printf("%d", A[i]);
        if(i<2){
            printf(",");
        }
    }
    printf("}\n");
    printf("Enter the value of B = ");
    for(int i=0; i<3; i++){
        scanf("%d", &B[i]);
    }
    printf("B = {%d,%d,%d}\n", B[0],B[1],B[2]);
    for(int i=0; i<3; i++){
        total+=A[i]*B[i];
    } 
    printf("Dot Product = %d", total);
    return 0;
}
