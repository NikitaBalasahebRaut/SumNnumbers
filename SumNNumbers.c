/*
 Problem statement :
 Accept N numbers from user and perform the addition of that N numbers.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 18

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   1
 Output : 10
 
 Input :
 Value of N : 9
 Numbers are :  5   -3   7   1   0    5     0   -8    1
 Output : 8
 
 */

/*
    Algorithm
 
    START
        Accept the value of N
        Accept all N numbers
        Pass that value of N and N numbers to the function
 
        Function will perform the addition
        Accept the addition from the function
 
        Display the addition
    END
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int SumNNumbers(int iSize,int arr[])
 {
	 int iSum = 0;
	 int iCnt = 0;
	 
	 for(iCnt = 0; iCnt < iSize; iCnt++)
	 {
		 iSum = iSum + arr[iCnt];
	 }
	 return iSum;
 }
 
 int main()
 {
    int iValue = 0;
	int iCnt = 0;
	int iRet = 0;
	
	int *ptr = NULL;
	
	printf("Enter The value of N \n");
	scanf("%d",&iValue);
	
	ptr = (int*)malloc(sizeof(int)*iValue);
	
	printf("Enter The values \n");
	
	for(iCnt = 0;iCnt < iValue; iCnt++)
	{
	   scanf("%d\t",&ptr[iCnt]);
	}
	
	printf("Entered elements are \n");
	for(iCnt = 0;iCnt < iValue; iCnt++)
	{
	   printf("%d \t",ptr[iCnt]);
	}
	
	iRet = SumNNumbers(iValue,ptr);
	
	printf("\n Addition of all numbers is : %d\n",iRet);
	
 return 0;
 }
 
 
 /*
 
 output
 
 Enter The value of N
5
Enter The values
41
78
12
14
2
Entered elements are
41      78      12      14      2
 Addition of all numbers is : 147

*/