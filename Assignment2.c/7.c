#include <stdbool.h>
#include <stdio.h>
#define INT_BITS 32
int leftRotate(int n, unsigned int d)
{
   return (n << d)|(n >> (INT_BITS - d));
}

int rightRotate(int n, unsigned int d)
{
   return (n >> d)|(n << (INT_BITS - d));
}
int main()
{
  int n = 16;
  int d = 2;
  printf("Left Rotation of %d by %d is ", n, d);
  printf("%d", leftRotate(n, d));
  printf("\nRight Rotation of %d by %d is ", n, d);
  printf("%d", rightRotate(n, d));
  getchar();
}
