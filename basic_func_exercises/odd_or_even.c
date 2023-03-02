#include <stdio.h>



// write a function that takes an integer and returns "E" if it is even and "O" if it is odd
// hint: use % (modulo) operator

int odd_or_even(int val1)
{
	
	if (val1 % 2 == 0) {
		printf("E");
	} else {
		printf("O");
	}
	return 0;
}
int main() 
{
	int num;
	printf("Input a value: ");
	scanf("%d", &num);
	printf("The value is: ", odd_or_even(num));
	
	odd_or_even(num);
	


  return 0;
}


