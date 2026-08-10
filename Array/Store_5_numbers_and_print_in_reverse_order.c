#include <stdio.h>
int main() {
    int num[5];
    printf("Enter the 5 numbers : ");
    for(int i=0; i<=4; i++){
        scanf("%d", &num[i]);
    }
    printf("Reverse : ");
    for(int i=4; i>=0; i--){
        printf("%d ", num[i]);
    }
    return 0;
}
