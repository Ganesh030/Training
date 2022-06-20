#include<stdio.h>
void main()
{
int n,swap;
printf("Enter the no.of elements in the array...");
scanf("%d",&n);
int a[n-1];
printf("Enter the array elements...");
for(int i=0;i<n;i++) 
{
  scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
  {
    for(j=1;j<n;j++)
      {
        if(a[i]>a[j])
          {  
             swap=a[j];
             a[j]=a[i];
             a[i]=swap;
          }
      }
   }

for(i=0;i<n;i++) 
{
  printf("%d",a[i]);
}
              