#include <stdio.h>

int sum(int n, int nums[]){
    int x = 0;

    for(int i=0; i<n; i++){
        x = x + nums[i];
    }

    return x;
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements of the array: ");

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int res = sum(n, nums);
    printf("The sum of all elements is %d\n", res);
}
