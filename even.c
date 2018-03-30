#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	for(a=a+1;a<b;a++)
	{
		if(a%2==0)
		{
			printf("%d",a);
		}
	}
	return 0;
}
