#include <stdio.h>
int main(){
    int num[5];
    printf("Enter 5 numbers : ");
    for(int i=0; i<=4; i++){
        scanf("%d", &num[i]);
    }
    int max= num[0];
    int min=num[0];
    for(int i=1; i<5; i++){
        if(num[i] > max){
            max = num[i];
        }
        if(num[i] < min){
            min = num[i];
        }
    }
    printf("Maximum : %d\n", max);
    printf("Minimum : %d", min);
    return 0;
}
