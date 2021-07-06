/*Accept N numbers from user and return frequency of even numbers.
Input :N  :6
Elements : 85 66 3 80 93 88
*/
#include<stdio.h>
#include<stdlib.h>
int CountEven(int arr[],int iLength)
{
	int i,iCnt=0;
	if((arr==NULL)||(iLength==0))
	{
		return -1;
	}
	for(i=0;i<iLength;i++)
	{
		if((*(arr+i)%2)==0)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int *p=NULL,i=0,iSize=0,iRet=0;
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
	iRet=CountEven(p,iSize);
	printf("No of even elements in array are %d\n",iRet);
	free(p);
	return 0;
}
