#include <stdio.h>

// no changes

float logIncome(float budget) {

  float incomeInput;

  printf("How much income will you add today?\n");
  scanf("%f", &incomeInput);


  return incomeInput;
}

float logExpense(float budget) {

  float expenseInput;

  printf("How much is your expense today?\n");
  scanf("%f", &expenseInput);
  
  return expenseInput;
}


void displayTotalDailyIncome(float dailyIncome) {

  printf("This is your total income for the day\n");
  printf("PHP %.2f\n", dailyIncome);
}

void displayTotalDailyExpense(float dailyExpense) {

  printf("This is your total expense for the day\n");
  printf("PHP %.2f", dailyExpense);
}

void display_stats(char leapInput, int currentMonth, int currentDate, char currentDay, float startingBudget) {

  printf("These are your inputs: \n");
  printf("Leap year:%c, Month: %d Date: %d Day: %c Budget: %.2f\n", leapInput, currentMonth, currentDate, currentDay,
         startingBudget);
}

int skipDate(int currentDate){
	int nextDate;
	nextDate = currentDate + 1;
	

	return nextDate;
	
}



char skipDay(char currentDay){
	
	char nextDay;
	switch(currentDay){
		
		case 'S':
		nextDay = 'M';
		return nextDay;
		break;
		
		case 'M':
		nextDay = 'T';
		return nextDay;
		break;
		
		case 'T':
		nextDay = 'W';
		return nextDay;
		break;
		
		case 'W':
		nextDay = 'H';
		return nextDay;
		break;
		
		case 'H':
		nextDay = 'F';
		return nextDay;
		break;
		
		case 'F':
		nextDay = 'A';
		return nextDay;
		break;
		
		case 'A':
		nextDay = 'S';
		return nextDay;
		break;
		
	
	}
	
	
}

int checkEndWeek(char currentDay){
	
	switch(currentDay){
		
		case 'S':
		return 7;
		break;
		
		case 'M':
		return 6;
		break;
		
		case 'T':
		return 5;
		break;
		
		case 'W':
		return 4;
		break;
		
		case 'H':
		return 3;
		break;
		
		case 'F':
		return 2;
		break;
		
		case 'A':
		return 1;
		break;
		
	
	}
	
}


int checkMonth(int month){
	
	if(month == 1 || month == 3 || month == 5 || month ==7 || month == 8|| month == 10 || month == 12){
		return 0;
	}
	
	if(month == 4 || month == 6 || month == 9 || month == 11){
		return 1;
	}
	
	else {
		return 2;
	}
}





  

int main() {

  char leapInput;
  char currentDay;
  int currentMonth;
  int currentDate;
  float startingBudget;
  int running = 1;
  float dailyIncome;
  float dailyExpense;
  
  float repeatingIncome = 0;
  
  float newBudget;
  float incomeInput;
  float expenseInput;
  
  
  float currentBudget;

  int incomeDate;
  
  
  printf("Is this a leap year? Y for Yes, N for No\n");
  scanf("%c", &leapInput);


  printf("What month is it? Choose from 1-12\n");
  scanf("%d", &currentMonth);



  printf("What date is it? Choose from 1-31\n");
  scanf(" %d", &currentDate);


  printf("What day is it today?\n");
  scanf(" %c", &currentDay);

  printf("What is your starting budget?\n");
  scanf("%f", &startingBudget);

  printf("Your starting budget is: %f\n", startingBudget);

  display_stats(leapInput, currentMonth, currentDate, currentDay,
                startingBudget);
                
  
                
  
  
  printf("Loop is starting\n");
  
  while(running == 1){
  	// body of loop
  	
  	int menuInput;
  	
  	
  	printf("Today is %c %d/%d\n", currentDay, currentMonth, currentDate);
  	
  	printf("\nWhat would you like to do? Please select from the following: \n");
	printf("1 - Log Income\n");
	printf("2 - Log Expense\n");
	printf("3 - Schedule Repeating Income\n");
	printf("4 - Schedule Repeating Expense\n");
	printf("5 - Schedule Repeating Rent Expense\n");
	printf("6 - Display Total Daily Income\n");
	printf("7 - Display Total Daily Expense\n");
	printf("8 - Display current budget\n");
	printf("9 - Display payabales\n");
	printf("10 - End the day\n");
	printf("11 - Skip to the end of the week\n");
	printf("12 - Skip to the end of the month\n");
	printf("13 - Skip to the end of the year\n");
	printf("14 - Skip to the specified date\n");
	
	scanf("%d", &menuInput);
	
//	if(currentDate == incomeDate){
//  		printf("ur income is coming\n");
//  		currentBudget += repeatingIncome;
//			  }

	if(currentBudget == 0){
		currentBudget = startingBudget;
	}		
	
	
  	switch (menuInput) {
	  case 1: //user inputs income per day, can be repeated infinitely per day
	    dailyIncome = dailyIncome + logIncome(startingBudget);
	    printf("You earned PHP %.2f today\n", dailyIncome);
	    break;
	  case 2: //user inputs expense per day, can be repeated infinitely per day
	    dailyExpense = dailyExpense + logExpense(startingBudget);
	    printf("You spent PHP %.2f today\n", dailyExpense);
	    break;
	  case 3: ;
	  
	 	printf("repeating income: %d\n", repeatingIncome);
	  
	  	if(repeatingIncome >= 0){
	  		printf("Input a date for scheduled income: \n");
  			scanf("%d", &incomeDate);
  		
	  		printf("this is the date: %d\n", incomeDate);
	  		
	  		
	  		printf("Input amount for scheduled income: \n");
	  		scanf("%f", &repeatingIncome);
	  		
	  		printf("this is the income: %.2f\n", repeatingIncome);
	  		
		  }
		  
		else{
			
			char update;
			printf("Do you really want to update? Y or N \n");
  			scanf("%c", &update);
  			
  			if(update == 'Y' || update == 'y'){
  				
  				char remove;
  				printf("Do you want to remove existing repeating income? Y or N \n");
  				scanf("%c", &remove);
  				
  				if(remove == 'Y' || remove == 'y'){
  					repeatingIncome = 0;
  					
				  }
				  
				else if(remove == 'N' || remove == 'n'){
					printf("Update the date for scheduled income: \n");
	  				scanf("%d", &incomeDate);
	  		
			  		printf("this is the date: %d\n", incomeDate);
			  		
			  		
			  		printf("Update the amount for scheduled income: \n");
			  		scanf("%f", &repeatingIncome);
			  		
			  		printf("this is the income: %.2f\n", repeatingIncome);
					
				}
  				
  					
  				
			}
			
			else if(update == 'N' || update == 'n'){
				printf("Going back...");
				
			}
  			
  			
			
			
		}
	  
	    

	  	break;
	  	
	  	
	  	
	  case 4:
	  	printf("no function yet\n");
	  	break;
	  	
	  case 5:
	  	printf("no function yet\n");
	  	break;
	  	
	  case 6: //this should display total income for the day regardless how many logIncome you input per day
	  	displayTotalDailyIncome(dailyIncome);
	  	break;
	  	
	  case 7: // this should display total expense for the day regardless how many logExpense you input per day
	  	displayTotalDailyExpense(dailyExpense);
	  	break;
	  	
	  case 8:
//	    newBudget = startingBudget + dailyIncome - dailyExpense;
	  	printf("your current budget is: PHP %.2f\n", currentBudget);
	  	break;
	  	
	  	
	  case 9:
	  	printf("still no function");
	    break;
	  case 10: 
	  //skips to the end of day. should display current budget  *not yet finished
  		currentDate += 1;
  		currentDay = skipDay(currentDay);
  		
  		
  		
  		if (currentDate > 31 && checkMonth(currentMonth) == 0){
  			currentDate -= 31;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				printf("ur income is coming\n");
  				currentBudget += repeatingIncome;
			  }
  			
		}
		
		if (currentDate > 30 && checkMonth(currentMonth) == 1){
  			currentDate -= 30;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
  			
  			
		}
		
		// if date is over 28 and its feb and its not a leap year
		if (currentDate > 28 && checkMonth(currentMonth) == 2 && leapInput == 'N'){
  			currentDate -= 28;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
  			
  			
		}
		
		// if date is over 28 and its feb and its a leap year
		
		if (currentDate > 29 && checkMonth(currentMonth) == 2 && leapInput == 'Y'){
  			currentDate -= 29;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
		}
		
		if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }

  		break;
  		
  		
  		
  	  case 11: ; //skips to the end of week.  should display current budget  *not yet finished
  	    int ctr;
  	    int endOfWeek = currentDate + checkEndWeek(currentDay);
  	    
//  	    printf("Current Date: %d\n Current Day: %c\n End of week: %d\n", currentDate, currentDay, endOfWeek);

  	  	for(ctr = currentDate; ctr < endOfWeek; ctr++){
  	  		currentDate += 1;
  	  		currentDay = 'S';
  	  		
  	  		
  	  		if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
//  	  		printf("ctr: %d\n currentDate: %d\n", ctr, currentDate);
			}
			
		// if date is over 31 and month is not feb
		
  		if (currentDate > 31 && checkMonth(currentMonth) == 0){
  			currentDate -= 31;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
  			
		}
		
		if (currentDate > 30 && checkMonth(currentMonth) == 1){
  			currentDate -= 30;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
  			
		}
		
		// if date is over 28 and its feb
		if (currentDate > 28 && checkMonth(currentMonth) == 2 && leapInput == 'N'){
  			currentDate -= 28;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
  			
		}
		
		if (currentDate > 29 && checkMonth(currentMonth) == 2 && leapInput == 'Y'){
  			currentDate -= 29;
  			currentMonth += 1;
  			
  			if(currentDate == incomeDate){
  				currentBudget += repeatingIncome;
			  }
  			
		}
		
		break;
  	
    
  	  	
  	 case 12: ;
  	 
  	 	int endOfMonth;
  	 	
  	 	if(checkMonth(currentMonth) == 0){
  	 		endOfMonth = 31;
		   }
		
		if(checkMonth(currentMonth) == 1){
			endOfMonth == 30;
		}
		
		if(checkMonth(currentMonth) == 2 && leapInput == 'N'){
			endOfMonth == 28;
		}
		
		if(checkMonth(currentMonth) == 2 && leapInput == 'Y'){
			endOfMonth == 29;
		}
		
		
	  	 for(ctr = currentDate; ctr < endOfMonth; ctr++){
	  	 	
			  	
	  	  		currentDate += 1;
	  	  		currentDay = skipDay(currentDay);
	  	  		
	  	  		if(currentDate == incomeDate){
  					currentBudget += repeatingIncome;
			  	}
	  	  		
	  	  		
//	  	  		printf("ctr: %d\n currentDate: %d\n currentDay: %c\n", ctr, currentDate, currentDay);
				}
				
  	  	
  	  	break;
  	 case 13: ;
  	 
  	int ctrDate, ctrMonth;
  	 	

		
		for(ctrMonth = currentMonth; ctrMonth < 12; ctrMonth++){
			printf("month now: %d\n", currentMonth);
			
			
						
			if(checkMonth(currentMonth) == 0){
	  	 		endOfMonth = 31;
	  	 		
			   }
			
			else if(checkMonth(currentMonth) == 1){
				endOfMonth = 30;
			}
			
			else if(checkMonth(currentMonth) == 2 && leapInput == 'N'){
				endOfMonth = 28;
			}
			
			else if(checkMonth(currentMonth) == 2 && leapInput == 'Y'){
				endOfMonth = 29;
			}

			// run the loop, goes thru the month
			for(ctrDate = currentDate; ctrDate < endOfMonth; ctrDate++){
				printf("today its: %d %c", currentDate, currentDay);
		  	  		currentDate += 1;
		  	  		currentDay = skipDay(currentDay);
		  	  		printf("but now its %d %c", currentDate, currentDay );
		  	  		
		  	  		if(currentDate == incomeDate){
  						currentBudget += repeatingIncome;
			  		}
	  	  		
		  	  		
			}
			
			// after loop is done, change date back to 1, change day, add +1 to month
			
			currentDate = 1;
			currentDay = skipDay(currentDay);
			
			currentMonth += 1;
			
			printf("\n");
		
		}
		
		
		if(currentMonth == 12){
			printf("month now: %d\n", currentMonth);
			endOfMonth = 31;
			printf("its %d \n", currentDate);
			for(ctrDate = currentDate; ctrDate < endOfMonth; ctrDate++){
		  	  		currentDate += 1;
		  	  		currentDay = skipDay(currentDay);
		  	  		printf("%d ", currentDate);
		  	  		
		  	  		if(currentDate == incomeDate){
  						currentBudget += repeatingIncome;
			  		}
	  	  		
		  	  		
			}
		}
  	 	

		
		break;
  	  	
  		
	  default:
	  	printf("Invalid input. Try again\n");
	  	break;
	  	
}	
  	
  	
//  	running = cont();
  	
  	
}

  
  

	

	



  return 0;
}


