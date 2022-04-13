#include<stdio.h>
#include<windows.h>
int main()
{
    int a[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            a[i][j] = i * 4 + j;
        }
    }
    for (i = 0; i < 12; i++)
    {
        printf("a[%d]=%d\n", i,*(*a+i));
    }

    system("pause");
    return 0;

}