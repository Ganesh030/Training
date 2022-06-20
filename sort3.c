#include<stdio.h>
 void insertion(int a[], int n)
   {
    int trans,i,j;
    for(i=1;i<n;i++)
      {
       trans=a[i];
       j=i-1;
       while(a[j]<trans && j>=0)
          {
            a[j+1]=a[j];
            j--;
          }
       a[j+1]=trans;
      }
   }
void main()
 {
  int n;
  printf("enter the no.of elements into the array.....");
  scanf("%d",&n);
  int a[n-1],i;
  printf("Enter the elements...");
  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
  insertion(a,n);
  printf("The sorted array is....\n");
  for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
 }
