/* PRINT N SQUARE OF NUMBER */
#include<stdio.h>
 void sq(int);
 void sq(int n)
 {
     if(n<1)
        return ;
     sq(n-1);
     printf("%d ",n*n);
 }
 int main()
 {
     int n;
     printf("enter n :-");
     scanf("%d",&n);
     sq(n);
     return 0;
 }
