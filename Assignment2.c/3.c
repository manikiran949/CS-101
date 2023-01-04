#include<stdio.h>
int main()
{
   int a,b,c,d,e, larg;
   printf("Enter five Numbers\n");
   scanf("%d %d %d %d %d",&a,&b,&c,&d, &e);
    if(a>b)
      {  if(a>c)
          {
              if(a>d)
              {
                if(a>e)
                  larg = a;
                else
                  larg = e;
              }
              else
              {
                  if(d>e)
                    larg = d;
                   else
                    larg = e;
              }
          }
          else
          {  if(c>d)
               {
                    if(c>e)
                        larg = c;
                    else
                        larg = e;
               }
             else
             {
                 if(d>e)
                    larg = d;
                 else
                    larg = e;
             }

            }
      }
    else
      { if(b>c)
           {
               if(b>d)
               { if(b>e)
                   larg = b;
                 else
                    larg = e;
               }
               else
               { if(d>e)
                   larg = d;
                 else
                    larg = e;
               }
           }
           else
           { if(c>d)
               { if(c>e)
                   larg = c;
                 else
                   larg = e;
               }
              else
              { if(d>e)
                   larg = d;
                else
                   larg = e;
              }
           }
      }
    printf("%d is Largest Number",larg);

    return 0;
}






4a=18442
4b=33
4c=18467
4d=41
