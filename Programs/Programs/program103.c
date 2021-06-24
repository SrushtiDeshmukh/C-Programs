//Accept no and convert it into binary form.
#include<stdio.h>
void DisplayBinary(unsigned int iNo)
{
		unsigned int iDigit=0;
		printf("Given no in binary is\n");
		while(iNo>0)
		{
			iDigit=iNo%2;
			printf("%u\t",iDigit);
			iNo=iNo/2;
		}
	printf("\n");
}
int main()
{
	unsigned int iValue=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	DisplayBinary(iValue);
	return 0;
}
