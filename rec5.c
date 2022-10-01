/* PRINT N EVEN NATURAL NUMBER */
#include<stdio.h>
void evenn(int);
void evenn(int n)
{
if(n<1)
    return ;


evenn(n-2);
    printf("%d ",n);
}
int main()
{
    int n;
    printf("enter n:-");
    scanf("%d",&n);
    printf("******************************************************************\n");
    n=(2*n);
    evenn(n);
    return 0;
}


