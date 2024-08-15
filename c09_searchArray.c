#include <stdio.h>
int search(int n, int x, int nums[]){
    int a = 0;

    for(int i=0; i<n; i++){
        if(nums[i] == x){
            a++;
        }
    }

    return a;
}

int main(){
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Please enter all the elements of the array: ");

    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int x;
    printf("Please enter the req number: ");
    scanf("%d", &x);

    int res = search(n, x, nums);

    printf("The number %d appears %d times in the given array: \n", x, res);
}
