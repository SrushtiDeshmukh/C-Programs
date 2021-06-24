// Accept N numbers from user and accept one another number as NO,and find the first index of that no.
#include<stdio.h>
#include<stdlib.h>
int FirstOccurence(int arr[],int iLength,int iNo)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if(arr[i]==iNo)
		{
			break;
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
	int *p=NULL,i=0,iSize=0,iNo=0,iRet=0;
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(sizeof(int));
	
	if(p==NULL)
	{
		printf("Unavailable to allocate memory");
		return -1;
	}
	
	for(i=0;i<iSize;i++)
	{
		printf("Enter %d element:",(i+1));
		scanf("%d",&p[i]);
	}
	printf("Enter one no to find their index\n");
	scanf("%d",&iNo);
	
	iRet=FirstOccurence(p,iSize,iNo);
	if(iRet==-1)
	{
		printf("no not found\n");
	}
	else
	{
		printf("first occurence of %d is %d\n",iNo,iRet);
	}
	free(p);	
	return 0;
}
