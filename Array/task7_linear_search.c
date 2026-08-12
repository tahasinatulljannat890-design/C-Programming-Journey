#include <stdio.h>
int main(){
    int num[5],j,i,flag=0;
    printf("Enter 5 numbers : ");
    for(int i=0; i<5; i++){
        scanf("%d", &num[i]);
    }
    printf("Enter search number : ");
    scanf("%d", &j);
    for(int i=0; i<5; i++){
        if(j == num[i]){
            printf("Found at position = %d",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("NOT FOUND");
    }
    return 0;
}
