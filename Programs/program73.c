// Accept N numbers from user and accept one another number as NO,find the last occurence of that no
#include<stdio.h>
#include<stdlib.h>
int LastOccurence(int arr[],int iLength,int iNo)
{
	int i=0;
	for(i=iLength-1;i>=0;i--)
	{
		if(arr[i]==iNo)
			break;
	}
	return i;
}
int main()
{
	int *p=NULL,i=0,iSize=0,iRet=0,iNo=0;
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unavailable to allocate memory");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}	
	
	printf("enter the element to find its last occurence\n");
	scanf("%d",&iNo);

	iRet=LastOccurence(p,iSize,iNo);
	if(iRet==-1)
	{
		printf("no not found");
	}
	else
	{
		printf("the last occurence of %d is %d\n",iNo,iRet);
	}
	free(p);
	return 0;
	
}
