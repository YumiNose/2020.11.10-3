
#include <iostream>
using namespace std;

int Judg(int cpu, int player)
{
	int result = 1;
	if ((cpu == 0 && player == 2) || (cpu == 1 && player == 0) || (cpu == 2 && player == 1))
	{
		result = -1;
	}
	else if(cpu == player)
	{
		result = 0;
	}
	return result;
}

int resultCout(int t)
{
	switch (t)
	{
	case -1:cout << "���Ȃ��̕����ł�" << endl; break;
	case  0:cout << "���������I�������" << endl << endl; break;
	case  1:cout << "���Ȃ��̏����ł�" << endl; break;
	}
}

int I(int j)
{
	switch (j)
	{
	case 0: cout << "�O�[" << endl; break;
	case 1: cout << "�`���L" << endl; break;
	case 2: cout << "�p�[" << endl; break;
	}
}


int main()
{
	
}