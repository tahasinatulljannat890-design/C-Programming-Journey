#include <stdio.h>
int main(){
    int n;
    printf("How many numbers do you like to input : ");
    scanf("%d", &n);

    int j[n],temp;
    printf("Enter numbers = ");

    //input the element of array 'j'
    for(int i=0; i<n; i++){
        scanf("%d", &j[i]);
    }
    //Bubble sorting
    for(int pass=0; pass<n-1; pass++){
        int swapped = 0;
        for(int i=0; i<n-1-pass; i++){
            if(j[i] > j[i+1]){
                temp = j[i];
                j[i] = j[i+1];
                j[i+1] = temp;
                swapped =1;
        }
        }
        if(swapped == 0) break;
        
    }
    //Sorted output
    printf("Sorted = ");
    for(int i=0; i<n; i++){
        printf("%d ", j[i]);
    }
    return 0;
}
