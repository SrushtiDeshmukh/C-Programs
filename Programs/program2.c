# include "header2.h"

int main()
{
	int a=0;
	int b=0;
	int res=0;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	
	res=maximum(a,b);
	printf("the maximum value is %d\n",res);	
    return 0;
}

