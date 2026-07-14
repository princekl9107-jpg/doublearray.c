#include <stdio.h>
int main()
{
    int array[100][100],i,j,sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter the number[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+array[i][j];
        }
      
    }
    printf("the sum of double array =%d",sum);
    printf("\n");
    return 0;
     
}