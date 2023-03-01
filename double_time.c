#include <stdio.h>

// this function takes 2 integer addresses and uses scanf to get input for the integer values

void input_time(int* hours, int* minutes ){
	
//	printf("%p\n", hours);
//	printf("%p\n", minutes);

//	printf("Value before scanning: ");
//	printf("%d\n", *hours);
//	printf("%d\n", *minutes);
	
	
	
	// scan for values
	printf("Input hours:");
	scanf("%d", hours);
	printf("Input minutes:");
	scanf("%d", minutes);
	
	
//	printf("Value after scanning: ");
//	printf("%d\n", *hours);	
//	printf("%d\n", *minutes);

	printf("HHMM Format: \n%d:%d\n", *hours, *minutes);
		

	
}

void clone(int x){
	
	printf("Old value before scanf: %d\n", x);
	
	scanf("%d", &x);
	
	printf("New value of x: %d\n", x);
	
}


int main() {
	
	
	int num1 = 0;
	int num2 = 0;
	
	int x = 0;
	
	
	input_time(&num1, &num2);
	
//	clone(x);
	


	
  return 0;
}


