// Accept N numbers from user and accept one another number as NO,return frequency of NO form it.
#include<stdio.h>
#include<stdlib.h>
int Count(int arr[],int iLength,int iNo)
{
	int i,iCnt=0;
	if((arr==NULL)||(iLength==0))
	{
		return -1;
	}
	for(i=0;i<iLength;i++)
	{
		if(arr[i]==iNo)
		{
			iCnt++;
		}
	}
	return iCnt;
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
	printf("enter one another no\n");
	scanf("%d",&iNo);
	iRet=Count(p,iSize,iNo);
	printf("frequency of %d is %d\n",iNo,iRet);
	free(p);
	return 0;
}
