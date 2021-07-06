/*Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N :
Elements : 85	66	3	80	93	88
Output :53	(234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>
int DisplayDiff(int Arr[],int iLength)
{
	int i=0,iSum1=0,iSum2=0,iDiff=0;
	if((Arr==NULL)||(iLength==0))
	{
		return -1;
	}
	
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iSum1=iSum1+Arr[i];
		}
		else
		{
			iSum2=iSum2+Arr[i];
		}
	}
	iDiff=iSum1-iSum2;
	return iDiff;
}
int main()
{
	int *arr=NULL,i=0,iSize,iRet=0;
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	arr=(int*)malloc(iSize*sizeof(int));
	if(arr==NULL)
	{
		printf("Unavailable to allocate memory");
		return -1; 
	}
	printf("Enter the elements\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet=DisplayDiff(arr,iSize);
	printf("Difference betn summation of even & odd is %d\n",iRet);
	free(arr);
	return 0;
}

