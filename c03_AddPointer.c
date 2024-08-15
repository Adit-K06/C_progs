#include <stdio.h>

void addPointer(int *a, int *b, int *result)
{
	*result = *a + *b;
}

int main()
{
	int a, b;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &a, &b);

	int result;
	addPointer(&a, &b, &result);

	printf("The sum is %d\n", result);
}
