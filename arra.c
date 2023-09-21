#include<stdio.h>
#include<conio.h>
int main()
{
 int i,a[5]={1,2,3,4,5},b[5]={10,20,30,40,50,},c[5];
for (i=0,i<5,i++)
    {
         c[i]=a[i]+b[i];
         printf("%d",c[i]);
    }
    return 0;
}
