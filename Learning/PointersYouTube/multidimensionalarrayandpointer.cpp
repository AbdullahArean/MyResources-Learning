#include <stdio.h>

int main()
{
    
    int marr[3][3]={1,2,3,4,5,6,7,8,9};
    int (*p)[3] =marr;
    printf("%d %d\n",p, p[0]);
    printf("%d %d %d %d\n",**p,**marr,*marr[0],marr[0][0]);
    printf("%d %d %d %d\n",**(p+1),**(marr+1),*marr[1],marr[1][0]);
    printf("%d %d %d %d\n",*(*(p+1)+1),*(*(marr+1)+1),*(marr[1]+1),marr[1][1]);
    printf("%d %d %d %d\n",*(*(p+1)+2),*(*(marr+1)+2),*(marr[1]+2),marr[1][2]);
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d %d %d\n", marr[i][j],*(p[i]+j),*(*(p+i)+j));
        }
    }
    int tmar[3][2][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int(*pc)[2][2] = tmar;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k< 2; k++)
            {
                printf("Using Pointer: %d %d %d\n", pc[i][j][k], *(pc[i][j] + k), *(*(pc[i] + j) + k),*(*(*(pc+i)+j)+k));
                 printf("Using array: %d %d %d\n", tmar[i][j][k], *(tmar[i][j] + k), *(*(tmar[i] + j) + k),*(*(*(tmar+i)+j)+k));
            }
        }
    }
    return 0;
}