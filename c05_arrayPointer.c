#include <stdio.h>

int main()
{
	int n;
	printf("Size of array: ");
	scanf("%d", &n);

	int nums[n];
	int *ptr = &nums[0];
	printf("Enter the elements of the array: ");

	for(int i=0; i<n; i++){
		scanf("%d", (ptr + i));
	}

	for(int i=0; i<n; i++){
		printf("%d  ", *(ptr + i));
	}
}
