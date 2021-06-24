//Accept n no from user and accept another no as no,and find second occurence of that no.
#include<stdio.h>
#include<stdlib.h>
int SecondOccurence(int arr[],int iLength,int iNo)
{
	int i=0,iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(arr[i]==iNo)
		{
			iCnt++;
			if(iCnt==2)
			{
				break;
			}
		}
	}
	if(i==iLength)
	{
		return -1;
	}
	else
	{
		return i;
	}
}
int main()
{
	int *p=NULL,i=0,iSize=0,iRet=0,iNo=0;
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		printf("Unavailable to allocate memory\n");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&iNo);
	
	iRet=SecondOccurence(p,iSize,iNo);
	if(iRet==-1)
	{
		printf("no not found");
	}
	else
	{
		printf("Second occurence of no is at %d",iRet);
	}
	free(p);
	return 0;

}
	
