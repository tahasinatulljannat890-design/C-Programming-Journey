#include <stdio.h>
int main(){
    int num[5], sum = 0, product = 1;
    printf("Enter 5 numbers = ");

    //input values of num array
    for(int i=0; i<5; i++){
        scanf("%d", &num[i]);
    }

    //Calculate sum of array elements
    for(int i=0; i<5; i++){
        sum+=num[i];
    }
    printf("Sum = %d\n",sum);

    //Calculate product of array elements
    for(int i=0; i<5; i++){
        product*=num[i];
    }
    printf("Product = %d", product);

    return 0; 
}
