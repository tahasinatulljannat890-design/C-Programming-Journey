#include <stdio.h>
int main(){
    int num[5];
    printf("Enter 5 numbers : ");
    for(int i=0; i<=4; i++){
        scanf("%d", &num[i]);
    }
    int total=0;
    for(int i=0; i<5; i++){
        total+=num[i];
    }
    int Average = total/5;
    printf("Average = %d", Average);
    return 0;
}
