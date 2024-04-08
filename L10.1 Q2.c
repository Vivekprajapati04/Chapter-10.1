#include<stdio.h>

divide(int x){
	if(x%3==0 && x%5==0)
	{
		printf("The given number is divisible by both 3 & 5.");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
		
	}
	
}

int main()
{
	int y;
	printf("Enter Your Number=");
	scanf("%d",& y);
	divide(y);
}