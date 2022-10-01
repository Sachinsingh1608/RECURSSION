/* PRINT N  EVEN NATURAL NUMBER IN REVERSE ORDER */
#include<stdio.h>
void evenn(int);
void evenn(int n)
{
if(n<1)
    return ;
      printf("%d ",n);
evenn(n-2);

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


