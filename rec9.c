/* DECIMAL TO OCTAL */
#include<stdio.h>
void biyn(int);
void biyn(int n)
{
    int f;
f=n;

    if(n)
    {

        f=n%8;

  biyn(n/8);
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
