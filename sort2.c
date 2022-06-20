#include<stdio.h>
   void sort2(int a[],int n)
   {
   int swap,i,j;
    for(i=0;i<n-1;i++)
      {
        for(j=0;j<n-i-1;j++)
         {
           if(a[j]>a[j+1])
             {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
             }
         }
     }
   }

void main()
 {
  int n;
  printf("Enter the no.of elements into the array...");
  scanf("%d",&n);
  int a[n-1],i;
  printf("Enter the elements into the array...");
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   sort2(a,n);
   printf("The array after sorting is...\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);   
 }


