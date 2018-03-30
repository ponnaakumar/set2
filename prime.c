#include <stdio.h>
int main()
{
    int a,b,i,flag = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(a;a<b;a++)
    {
    for(i=2; i=a/2;++i)
    {
        if(a%i==0)
        {
         flag=1;
         break;
        }
        if (flag==0)
        printf("%d",a);
    }
    }
    return 0;
}
