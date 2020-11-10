/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InitRand()
{
	srand((unsigned int)time(NULL));
}

int DiceX()
{
	return rand() % 6 + 1;
}

int DiceY()
{
	return rand() % 6 + 1;
}

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		int a = 0;
		int sum = 0;
		cout << "ƒTƒCƒRƒ‚ð‚QŒÂU‚Á‚½‚Æ‚«‚Ì‡Œv’l‚Í‰½‚Å‚µ‚å‚¤" << endl;
		cin >> a;

		InitRand();
		cout << DiceX() + DiceY() << ' ';

		sum = a;
		cout << sum << endl;

		if (sum == (DiceX()) + (DiceY() ) )
		{
			cout << "ˆê’v‚µ‚Ü‚µ‚½I" << endl;
		}
		else
		{
			cout << "Žc”Oc‡‚í‚È‚©‚Á‚½" << endl;
		}

		
	}
	cout << endl;
	
}

*/