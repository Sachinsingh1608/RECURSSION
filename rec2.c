/* PRINT N NATURAL NUMBER IN REVERSE ORDER */
#include<stdio.h>
 void pn(int);
 void pn(int n)
 {
     if(n<1)
        return ;
          printf("%d ",n);
     pn(n-1);

 }
 int main()
 {
      int n;
    printf("enter a N:-");
    scanf("%d",&n);
     pn(n);
     return 0;
 }

