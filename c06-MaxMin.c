#include <stdio.h>

int Max(int n, int nums[]){
	int max = nums[0];

	for(int i=1; i<n; i++){
		if(max < nums[i]){
			max = nums[i];
		}
	}

	return max;
}

int Min(int n, int nums[]){
	int min = nums[0];

	for(int i=1; i<n; i++){
		if(min > nums[i]){
			min = nums[i];
		}
	}

	return min;
}

int main()
{
	int n;
	printf("Size of array: ");
	scanf("%d", &n);

	int nums[n];
	printf("Enter the elements of array: ");

	for(int i=0; i<n; i++){
		scanf("%d", &nums[i]);
	}

	int max = Max(n, nums);
	int min = Min(n, nums);

	printf("Maximum number is %d\n", max);
	printf("Minimum number id %d\n", min);
}
