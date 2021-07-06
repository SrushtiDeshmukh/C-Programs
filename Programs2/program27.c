//Accept N numbers from user and accept one another number as NO , check whether NO is present or not.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int arr[],int iLength,int iNo)
{
	int i;
	if((arr==NULL)||(iLength==0))
	{
		return false;
	}
	for(i=0;i<iLength;i++)
	{
		if(arr[i]==iNo)
		{
			break;			
		}
	}
	if(i==iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int *p=NULL,i=0,iSize=0,iNo=0;
	bool bRet=false;
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
	
	printf("Enter the no to check present or not\n");
	scanf("%d",&iNo);	
	
	bRet=Check(p,iSize,iNo);
	if(bRet==true)
	{
		printf("No is present\n");
	}
	else
	{
		printf("No not present");
	}
	free(p);
	return 0;
}
