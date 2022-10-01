/* PRINT DECIMAL TO BINARY */
#include<stdio.h>
void biyn(int);
void biyn(int n)
{
    int f;
f=n;

    if(n)
    {
f=n%2;
biyn(n/2);
printf("%d",f);
    }
    else
    return ;

}
int main()
{
     int n;
     printf("enter n :-");
     scanf("%d",&n);
    biyn(n);
    return 0;
}
