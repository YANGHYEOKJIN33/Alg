#include<stdio.h>

int countDigitsRecur(int value, int b, int d)
{
	
	if(value == 0)
		return 0;
	if(value % b == d)		
		return 1+countDigitsRecur(value / b, b, d);
	
	return countDigitsRecur(value / b, b, d);
}



int main()
{
	int value, b, d;
	scanf("%d %d %d", &value, &b, &d);
	printf("%d", countDigitsRecur(value, b, d));
	return 0;
}
