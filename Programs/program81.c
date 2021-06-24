//Accept string and return length of that string.
#include<stdio.h>
int strlenX(char str[])
{
	int iCnt=0;
	while(*str!='\0')
	{
		printf("\n%d: %c: %d",iCnt,*str,*str);
		iCnt++;
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[10];
	int iRet=0;
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	//fgets(Arr,10,stdin);
	iRet=strlenX(Arr);
	printf("%d\n",iRet);
	return 0;
}
