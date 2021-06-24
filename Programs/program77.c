//Accept n no from user return second maximum of an array.
#include<stdio.h>
#include<stdlib.h>
int SecondMaximum(int arr[],int iLength)
{
	int i=0,SecMax=0,index=0;
	if((arr==NULL)||(iLength==0))
	{
		return -1;
	}
	SecMax=arr[0];
	for(i=0;i<iLength;i++)
	{
		if(arr[i]>SecMax)
		{
			SecMax=arr[i];
			index=i;
		}
	}
	SecMax=arr[0];
	for(i=0;i<iLength;i++)
	{
		if(i==index)
		{
			continue; 
		}
		else if(arr[i]>SecMax)
		{
			SecMax=arr[i];
		}		
	}
	return SecMax;
}
int main()
{
	int *p=NULL,i=0,iRet=0,iSize=0;
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		printf("Uavailable toallocate memory\n");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	iRet=SecondMaximum(p,iSize);
	printf("Second maximum is %d",iRet);	
	free(p);
	return 0;
}

