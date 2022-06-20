#include<stdio.h>
void primefactors(int n)
  {
    int i;
    for(i=2;i>1;i++)
      {
        while(n%i==0)
           {
             printf("%d\n",i);
             n=n/i;
           }
      }
   }

void mian()
  {
    int n;
    printf("Enter any value");
    scanf("%d",&n);
    primefactors(n);
  }
