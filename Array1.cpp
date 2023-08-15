
#include<stdio.h>
#include<string.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[2][3][4] ={{{1,2,3,4},{},{}} , {{1,2,3,4},{},{}} }
    
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // int a;
    // a = 5;
    // a = 7;

    for(int i =0;i<r;i++)
    {
      for (int j = 0; j < c;j++)
      printf("%d ",arr[i][j]);
      printf("\n");
    }
    int x;
    scanf("%d",&x);
    // printf("New Array :\n");
    // arr[1][1] += 5 ;
    for(int i =0;i<r;i++)
    {
       for (int j = 0; j < c;j++)
        printf("%d ",arr[i][j]);
      printf("\n");
    }
}