#include <stdio.h>
 int main() {
    int num[5];
    printf("Enter 5 numbers : ");
    for(int i=0; i<5; i++){
    scanf("%d", &num[i]);
    }
    int max = num[0];
    int sec = num[0];
    for(int i=1; i<5; i++){
        if(num[i] > max){
            max = num[i];
        }
        if(num[i] > sec && num[i] != max){
            sec = num[i];
        }
    }
    printf("Second large number : %d", sec);
    return 0;
 }
