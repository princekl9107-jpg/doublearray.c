#include <stdio.h>
int main()
{
    int arr[100][100],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the number[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    
    printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}