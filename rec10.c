/* REVERSE OF NUMBER */
#include<stdio.h>
void revn(int);
void revn(int n)
{
    int x;
    if(n)
    {
        x=n%10;
        printf("%d",x);
        revn(n/10);

    }
    else
        return ;
}
int main()
{
     int n;
     printf("enter n :-");
     scanf("%d",&n);

    revn(n);
    return 0;
}
