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
		cout << "サイコロを２個振ったときの合計値は何でしょう" << endl;
		cin >> a;

		InitRand();
		cout << DiceX() + DiceY() << ' ';

		sum = a;
		cout << sum << endl;

		if (sum == (DiceX()) + (DiceY() ) )
		{
			cout << "一致しました！" << endl;
		}
		else
		{
			cout << "残念…合わなかった" << endl;
		}

		
	}
	cout << endl;
	
}

*/