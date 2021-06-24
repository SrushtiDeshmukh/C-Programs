//Summation of all no's upto that no.
//Input - 3
//Output- 6
#include<stdio.h>
int sumation(int no);
int main()
{
	int no=0,sum=0;
	printf("enter the no\n");
	scanf("%d",&no);
	sum=sumation(no);
	printf("sum up all nos upto that no is %d\n",sum);
	return 0;
}
int sumation(int no)
{
	int sum=0,i=1;
	if(no<0)
		no=-no;
	if(no==0)
		return 0;
	while(i<=no)
	{
		sum=sum+i;
		i++;
	}
	return sum;
}
