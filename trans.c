#include<stdio.h>
void main()
{  
  int m,n;
  printf("Enter the row and column size...");
  scanf("%d %d",&m,&n);
  int a[m][n],b[n][m],i,j;
  printf("Enter the array elements...\n");
  for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
       {
          scanf("%d",&a[i][j]);
      }
   }

 for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
       {
          b[j][i]=a[i][j];
      }
   }

for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
       {
          printf("%d\t",b[i][j]);
      }   printf("\n");
   }

}
