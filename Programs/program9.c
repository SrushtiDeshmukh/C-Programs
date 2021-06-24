// Accept marks from user and calculate there class.
#include<stdio.h>
#include<stdbool.h>
void CheckResult(int imarks)
{
	if((imarks<0)||(imarks>100))
	{
		printf("Invalid Marks\n");
		return;
	}
	if((imarks<35)&&(imarks>=0))
		printf("fail class\n");
	else if((imarks<50) && (imarks>=35))
		printf("third class\n");
	else if((imarks<60)&&(imarks>=50))
		printf("second class\n");
	else if((imarks<70)&&(imarks>=60))
		printf("first class\n");
	else 
		printf("first class with distinction\n");
}
int main()
{
	int imarks=0;
	printf("Enter the marks :\n");
	scanf("%d",&imarks);
	CheckResult(imarks);
	return 0;
}

