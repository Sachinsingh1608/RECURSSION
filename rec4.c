/* PRINT N  ODD NATURAL NUMBER IN REVERSE ORDER */
#include<stdio.h>
void oddn(int);
void oddn(int n)
{
if(n<0)
    return ;
    printf("%d ",n);

oddn(n-2);
}
int main()
{
    int n;
    printf("enter n:-");
    scanf("%d",&n);
    printf("******************************************************************\n");
    n=(2*n)-1;
    oddn(n);
    return 0;
}

