/*Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input :C
Output : Your exam at 9.20 AM
Input :d
Output : Your exam at 10.30 AM */
#include<stdio.h>
#include<stdbool.h>
void DisplayTime(char *str)
{
	if(str==NULL)
	{
		return ;
	}
	while(*str!='\0')
	{
		if((*str=='A')||(*str=='a'))
			printf("Timing is 7 AM\n");
		else if((*str=='B')||(*str=='b'))
			printf("Timming is 8:30 AM\n");
		else if((*str=='C')||(*str=='c'))
			printf("Timming is 9:20 AM\n");
		else if((*str=='D')||(*str=='d'))
			printf("Timming is 10:30 AM\n");
		else
			printf("Enter valid division\n");
		str++;
	}
}
int main()
{
	char arr[10];
	bool bRet=false;
	printf("Enter the division\n");
	scanf("%[^'\n']s",arr);
	DisplayTime(arr);
	return 0;
}
