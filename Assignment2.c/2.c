#include <stdio.h>
#include <math.h>

int main()
{
	int number,numberToInsert,position;
	printf("Enter the number where another number is to be inserted:");
	scanf("%d",&number);
	printf("Enter the number to be inserted:");
	scanf("%d",&numberToInsert);
	printf("Enter the position from LSB:");
	scanf("%d",&position);
	int numberOfBits=0,eraser,n=numberToInsert;
	while (n>=1)
	{
		eraser+=(pow(2,numberOfBits));
		numberOfBits+=1;
		n=n/2;
	}
	int result=(number&(~(eraser<<position)))|(numberToInsert<<position);
	printf("Result:%d",result);
	return 0;
}
