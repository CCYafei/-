#include <stdio.h>
void Multiplication_table(int n)
{
    int i;
    for(i = 0;i <= n;i++)
    {
        int j;
        for(j = 0;j <= i;j++)
        {
            printf("%2d * %2d = %-4d",i,j,i*j);
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    printf("这是一个用来输出乘法口诀表的程序.\n");
    printf("请输入一个整数:>");
    scanf("%d",&n);
    Multiplication_table(n);
    return 0;
}
