#include <stdio.h>

int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);

	int nums[n];
	printf("Enter the elements of array: ");

	for(int i=0; i<n; i++){
		scanf("%d", &nums[i]);
	}

	for(int i=0; i<n; i++){
		printf("%d  ", nums[i]);
	}
}
