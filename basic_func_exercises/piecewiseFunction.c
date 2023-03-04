#include <stdio.h>




// this function returns a float
// this function takes 1 float value named x
// if x is less than or equal to -2, this function will return x+2
// if x is less than -2 and less than or equal to 1, return 3
// if x is greater than 1, return -x^2

float piecewise(float x){
	// if x is less than or equal to -2, this function will return x+2
	if (x <= -2.0){
		return x+2.0;
	}
	
	// if -2 is less than x and x is less than or equal to 1, return 3
	if (-2.0 < x && x <= 1.0){
		return 3.0;
	}
	
	// if x is greater than 1, return -x^2	
	if (x > 1.0){
		return x * x * -1.0;
	}
}









int main (){
	
	float myNumbers[] = {-4.0 , 0.0, -2.0, 1.0, 1.5};
	
//	piecewise(-4.0);

//	printf("%.2f\n", piecewise(myNumbers[0]));
//	printf("%.2f\n", piecewise(myNumbers[1]));
//	printf("%.2f\n", piecewise(myNumbers[2]));
//	printf("%.2f\n", piecewise(myNumbers[3]));
//	printf("%.2f\n", piecewise(myNumbers[4]));
	
	
//	int i = piecewise(2.0);
		
	// this loop prints 0-4
	// 
	
	int counter;
	
	for(counter = 0; counter < 5; counter++){
		printf("Counter is now: %d\n", counter);
		
		// counter = 3            myNumbers[counter = 3]
		
		printf("%.2f\n", piecewise(myNumbers[counter]));
	}
		
	
	
	
	
	
	return 0;
}
