#include <stdio.h>

int Max(int n, int *nums){
	int max = *nums;

	for(int i=0; i<n; i++){
		if(max < *(nums + i)){
			max = *(nums + i);
		}
	}

	return max;
}

int Min(int n, int *nums){
	int min = *nums;

	for(int i=0; i<n; i++){
		if(min > *(nums + i)){
			min = *(nums + i);
		}
	}

	return min;
}

int main()
{
	int n;
	printf("Plese enter the sie of the array: ");
	scanf("%d", &n);

	int nums[n];
	int *ptr = nums;
	printf("Enter the elements of the array: ");

	for(int i=0; i<n; i++){
		scanf("%d", (ptr + i));
	}

	int max = Max(n, nums);
	int min = Min(n, nums);

	printf("Maximum number is %d\n", max);
	printf("Minimum number is %d\n", min);
}
