#include <stdbool.h>
#include <stdio.h>
int toggleBit(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}
int main()
{
   int n = 5, k = 1;
   printf("%d with %d-th bit Toggled: %d\n",
           n, k, toggleBit(n, k));
   return 0;
}
