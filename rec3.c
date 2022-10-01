/* PRINT N  ODD NATURAL NUMBER  */
#include<stdio.h>
void oddn(int);
void oddn(int n)
{
if(n<0)
    return ;
oddn(n-2);
printf("%d ",n);
}
int main()
{
    int n;
        printf("enter n:-");
    scanf("%d",&n);
    printf("*******************************\n");
    n=(2*n)-1;
    oddn(n);
    return 0;
}
