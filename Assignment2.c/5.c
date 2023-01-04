#include <stdbool.h>
#include <stdio.h>
bool powerOftwo(int n)
{
	if (n == 1)
		return true;

	else if (n % 2 != 0 || n == 0)
		return false;

	return powerOftwo(n / 2);
}
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
	if (powerOftwo(n) == 1)
		printf("True\n");
	else
		printf("False\n");
}
