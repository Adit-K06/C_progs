#include <stdio.h>

void replacePointer(int n, int x, int *nums){
    for(int i=0; i<n; i++){
        if(*(nums + i) == x){
            *(nums + i) = -1;
        }
    }
}

int main(){
    int n;
    printf("Please enter the size of array: ");
    scanf("%d", &n);

    int nums[n];
    int *ptr = nums;
    printf("Please enter the elements of the array: ");

    for(int i=0; i<n; i++){
        scanf("%d", (ptr + i));
    }

    int x;
    printf("Plese enter the number to be replaced by -1: ");
    scanf("%d", &x);

    replacePointer(n, x, nums);

    printf("The new array is: [ ");
    for(int i=0; i<n; i++){
        if(i != n - 1){
            printf("%d, ", nums[i]);
        }
        else{
            printf("%d]\n", nums[i]);
        }
    }
}
