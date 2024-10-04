#include<iostream>
using namespace std;

class Character {
private:
	string name;
	int health;
	int strength;
	int defense;
	int damage;
	
	
	//Constructor 
	Character(string name, int health, int strength, int defense) {
		string name = "BOB";
		int health = (0, 100);
		int strength = (0, 50);
		int defense = (0, 50);
		int damage = (0);
		
		//Reduce health
		void takeDamage(int damage);
			health = health - (damage - defense);
	}

	void printStatus() {
		cout << "Character name:", name, "Health:", health, "Strength:", strength, "Defense:", defense, << endl;


	}


};



int main() {
	
	







}
