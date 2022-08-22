#include<stdio.h>
int main()
{
   int m,n,p,q;
   printf("Enter number of row and column of matrix 1:\t");
   scanf("%d",&m);
   printf("Enter number of columns of matrix 1:\t");
   scanf("%d",&n);
   printf("Enter number of rows of matrix 2:\t");
   scanf("%d",&p);
   printf("Enter number of columns of matrix 2:\t");
   scanf("%d",&q);
   int x[m][n],y[p][q],z[m][q],i,j,k,sum=0;
   printf("Enter the first matrix\n");
   for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
           {
             scanf("%d",&x[i][j]);
           }
      }
   printf("Enter the second matrix\n");
   for(i=0;i<p;i++)
      {
        for(j=0;j<q;j++)
           {
             scanf("%d",&y[i][j]);
           }
      }
   if(n==p) 
    {
        for(i=0;i<m;i++)
           {
             for(j=0;j<q;j++)
                {
                  sum=0;
                  printf("\n sum = %d\n", sum);
                  for(k=0;k<n;k++)
                     {
                        sum+=(x[i][k]*y[k][j]);
                     }
                  z[i][j]=sum;
                   
                }
           }
    
     printf("Array after matrix multiplication:\n");
     for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
           {
             printf("%d\t",z[i][j]);
           }
           printf("\n");
      }
    }
    else
        printf("Invalid input");
   return 0;
}