#include <stdio.h>




// this function is called rotate
// this returns nothing
// this function takes 3 character parameters



void rotate(char character1, char character2, char character3){
	
	char temp;
	temp = character1;
	
	printf("Before assigning new value: %c %c %c ", character1, character2, character3);
	
	character1 = character2; // value of 2nd character goes into character1
	character2 = character3;
	character3 = temp;
	
	printf("After assigning new value: %c %c %c ", character1, character2, character3);
	
	
	
}

int main() {
	
	char val1 = 'x';
	char val2 = 'y';
	char val3 = 'z';
	
	char character1 = 'a';
	char character2 = 'b';
	char character3 = 'c';
	
	rotate(val1, val2, val3);
	

  return 0;
}


