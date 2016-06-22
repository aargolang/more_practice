#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Character
{
public:
	int ac = 10;
	int hp = 25;
};

int rollD20();
int rollD6();

int main()
{
	// vars
	
	srand(time(NULL));
	Character player;
	Character enemy;
	bool gameDone = false;
	int hit = 0;

	//enemy.ac = 40;	
	// output values
	/*
	cout << "palyer.ac = " << player.ac << endl;
	cout << "palyer.hp = " << player.hp << endl;
	cout << "enemy.ac = " << enemy.ac << endl;
	cout << "enemy.hp = " << enemy.hp << endl;
	cout << "D20 roll: " << rollD20() << endl;	
	*/
	
	while (gameDone == false)
	{
		cout << "you attack!" << endl;
		if (rollD20() > enemy.ac)
		{
			hit = rollD6();
			cout << "you hit for " << hit << " hit points!" << endl;
			enemy.hp = enemy.hp - hit;
			cout << "enemy hit points: " << enemy.hp << endl;
			if (enemy.hp <= 0)
			{
				cout << "enemy died!" << endl;
				gameDone = true;
			}
		}
		else {
			cout << "you miss" << endl;
		}
	
		if (enemy.hp > 0)
		{	
			cout << "enemy attacks!" << endl;
			if (rollD20() >= player.ac)
			{
				hit = rollD6();
				cout << "enemy hit for " << hit << " hit points!" << endl;
				player.hp = player.hp - hit;
				cout << "your hit points: " << player.hp << endl;
				if (player.hp <= 0)
				{
					cout << "you died...." << endl;
					gameDone = true;
				}
			}
			else {
				cout << "enemy missed!" << endl;
			}
		}
		cout << endl;
	}

	if (enemy.hp <= 0){
		cout << "You Win!!!" << endl;
	}
	else {
		cout << "Game Over" << endl;
	}
	return 0;
}	

int rollD20()
{
	//srand(time(NULL));
	return ((rand() % 19) + 1);
}

int rollD6()
{
	//srand(time(NULL));
	return ((rand() % 5) + 1);
}
