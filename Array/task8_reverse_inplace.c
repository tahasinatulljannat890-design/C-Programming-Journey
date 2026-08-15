#include <stdio.h>
int main(){
    int A[5];
    int temp;//this is our temporary variable
    printf("Enter values of A = ");

    //taking inputs of array A
    for(int i=0; i<5; i++){
        scanf("%d", &A[i]);
    }
    
    //Reversing the value of A
    for(int i=0; i<5/2; i++){
    temp = A[i];
    A[i] = A[4-i];
    A[4-i] = temp;
    }

    //printing the reversed value of A
    printf("Reversed value of A= ");
    for(int i=0; i<5; i++){
        printf("%d ",A[i]);
    }
    return 0;
}
