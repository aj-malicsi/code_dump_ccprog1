#include <stdio.h>




// this function is called rotate
// this returns nothing
// this function takes 3 character parameters
//text


void rotate(char character1, char character2, char character3){
	
	char temp;
	temp = character1;
	
	printf("Before assigning new value: %c %c %c ", character1, character2, character3);
	
	character1 = character2; 
	character2 = character3;
	character3 = temp;
	
	printf("After assigning new value: %c %c %c ", character1, character2, character3);
	
	
	
}

int main() {
	
	char val1 = 'x';
	char val2 = 'y';
	char val3 = 'z';
	
	
	rotate(val1, val2, val3);
	

  return 0;
}


