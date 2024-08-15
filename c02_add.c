#include <stdio.h>

int add(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}

int main()
{
	int a, b;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &a, &b);
	
	int res = add(a, b);
	printf("The sum is %d\n", res);

}
