#include <iostream>

#include <string>

using namespace std;
//---------------------������� � ���������---------------------------------------

//�������� ��������� �������������� ����������� ����� � �����������������.

//������� ����� : 142
//����������������� ����� ������ ����� 142 = 0x8e

// hex

string MyHex(int x)
{
	string str = "";
	int a;

	while (x > 16)
	{

		a = x % 16;      // ������ ����� 16-�� ������� ����� ( �� ��� � 10-����� ������� )
		x = x / 16;      // ������� �� ������� ( ��� ��� ����� )
		switch (a)
		{
		case 0:  str = "0" + str; break;
		case 1:  str = "1" + str; break;
		case 2:  str = "2" + str; break;
		case 3:  str = "3" + str; break;
		case 4:  str = "4" + str; break;
		case 5:  str = "5" + str; break;
		case 6:  str = "6" + str; break;
		case 7:  str = "7" + str; break;
		case 8:  str = "8" + str; break;
		case 9:  str = "9" + str; break;
		case 10:  str = "a" + str; break;
		case 11:  str = "b" + str; break;
		case 12:  str = "c" + str; break;
		case 13:  str = "d" + str; break;
		case 14:  str = "e" + str; break;
		case 15:  str = "f" + str; break;
		
		}
	}

	switch (x)
	{
	case 0:  str = "0" + str; break;
	case 1:  str = "1" + str; break;
	case 2:  str = "2" + str; break;
	case 3:  str = "3" + str; break;
	case 4:  str = "4" + str; break;
	case 5:  str = "5" + str; break;
	case 6:  str = "6" + str; break;
	case 7:  str = "7" + str; break;
	case 8:  str = "8" + str; break;
	case 9:  str = "9" + str; break;
	case 10:  str = "a" + str; break;
	case 11:  str = "b" + str; break;
	case 12:  str = "c" + str; break;
	case 13:  str = "d" + str; break;
	case 14:  str = "e" + str; break;
	case 15:  str = "f" + str; break;

	}

	return str;
}

//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------���� �����-------------------------------------

	int x;
	cout << "������� �����: ";
	cin >> x;


	
	cout << "����������������� ����� ������ ����� �����:  " << MyHex(x) << endl << endl;

	system("pause");



	return 0;
}
