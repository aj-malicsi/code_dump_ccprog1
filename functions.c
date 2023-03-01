#include <stdio.h>


void display_health(int hp){
	printf("This is ur current hp: %d", hp);
}


void display_mana(int m){
	printf("This is ur current mana: %d", m);
}


void display_hp_and_mana(int hp, int m){
	display_health(hp);
	display_mana(m);
	
	
}


int take_damage(int hp, int dmg){
	// this function returns the difference of 2 values
	// health - sword damage
	
	// this function reduces your health based on damage
	// it returns ur new health after taking damage
	
	int new_hp = hp - dmg;
	
	return new_hp;
	
}




int main() {
	
	char name = 100;
	

	
	int health = 100;
	int mana = 60;
	
	int sword_damage = 10;
	
	int new_health = take_damage(health, sword_damage);
	
	display_health(new_health);
	
	printf("\n");
	
	display_health( take_damage(new_health, sword_damage) );
	
	display_p_and_mana(new_health, mana);
	
	
	
	
	
	
	
	

	
  return 0;
}


