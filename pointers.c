#include <stdio.h>


int main() {
		
	int myAge = 43;     // Variable declaration
	int* ptr = &myAge;  // Pointer declaration

	
	// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
	printf("%p\n", ptr);
	
	// Dereference: Output the value of myAge with the pointer (43)
	printf("%d\n", *ptr);
	
	
	int num = 1;
	int num2 = 100;
	
	int* p_num2 = &num2;
	
	printf("This is before increment: %p\n", p_num2);
	printf("%d\n", *p_num2);
	
	p_num2 -= 1000;
	
	printf("This is after increment: %p\n", p_num2);
	
	printf("%d\n", *p_num2);

	
	
//	int num3 = num + *&num2;
	
//	printf("%d\n", num3);
	
	
	
  return 0;
}


void dump(){
		

}
