#include <stdio.h>
int main(){
    int num[10],even = 0,odd = 0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<10; i++){
        if(num[i] % 2 == 0) {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Count Even = %d\nCount Odd = %d", even, odd);
    return 0;
}
