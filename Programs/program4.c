//Accept no from user and display all the nos till that no
//input-5
//output- 1 2 3 4 5
#include<stdio.h>
void Display(int ino);
int main()
{
	int ivalue=0;
	printf("enter the no");
	scanf("%d",&ivalue);
	Display(ivalue);
	return 0;
	
}
void Display(int ino)
{
	int cnt=1;
	if(ino==0)
		return;
	if(ino<0)
		ino=-ino;
	while(cnt<=ino)
	{
		printf("%d ",cnt);
		cnt=cnt+1;
	}
}
