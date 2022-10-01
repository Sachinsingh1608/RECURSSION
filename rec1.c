/* PRINT N NATURAL NUMBER */
#include<stdio.h>
 void pn(int);
 void pn(int n)
 {
     if(n<1)
        return ;
     pn(n-1);
     printf("%d ",n);
 }
 int main()
 {
    int n;
    printf("enter a N:-");
    scanf("%d",&n);
     pn(n);
     return 0;
 }
