#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	// seed random number
	srand(time(NULL));
	
	cout << (rand() % 100) << endl;
	
	return 0;
}	
