#include<iostream> 
#include<cmath>
#include <string>
#include <conio.h>
#include <cstdlib>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	char YesNo;
	do
	{
		int x = 0;
		setlocale(LC_ALL, "Russian");
		char sign, sign2;
		link2:
		cout << "1.������� �� 10 ? 2 " "\n" << "2.������� �� 10 ? 8 " "\n" << "3.������� �� 10 ? 16 " "\n" << "4.������� �� 2,8,16 � 10 ������� " "\n";
		cout << "����� ��������:";
		cin >> sign;
		switch (sign)
		{
		case '4':
		{
			cout << "1.������� �� 2 ? 10  " "\n" << "2.������� �� 8 ? 10 " "\n" << "3.������� �� 16 ? 10" "\n" << "4.�����" "\n";
			cout << "����� ��������:";
			cin >> sign2;
			switch (sign2)
			{
			case '1':
			{
				int c = 0, ch = 0, i = 0, cc = 0, sum = 0;
				string S;
				cout << "������� ����� � 2 �.� ��� �������� � 10 �.�:" ;
				cin >> S;
				cc = atoi(S.c_str());
				for (int i = 0; i < S.size(); i++)
				{
					if (S[i] == '0' || '1' == S[i])
					{

						sum += (cc % 10) * pow(2, i);
						cc = cc / 10;
					}
					else
					{
						cout << "����������� ������." "\n";
					}

				}
				cout << "���������:" << sum << "\n";
				cin.get();
			}
			case '2':
			{
				char Prov[255];
				int z, i, c = 0;
				cout << "������� ����� � 8 �.� ��� �������� � 10 �.�: " ;
				cin >> Prov;
				for (i = 0; i < strlen(Prov); i++)  //strlen ����� ��������� � ������ 
				{
					if (Prov[i] >= '0' && '7' >= Prov[i])
					{
						z = Prov[i] - '0';
					}
					else
					{
						cout << "����������� ������." "\n";
						goto link;
					}
					c = c * 8 + z;
				}
				cout << "���������:" << c << '\n';
				cin.get();
				goto link;
			}
			case '3':
			{
				char S[256];
				cout << "������� ����� � 16 �.� ��� �������� � 10 �.�:";
				cin >> S;
				int i, x, y, z;
				x = 0;
				z = strlen(S) - 1; // �� �������� � string
				for (i = 0; S[i] != '\0'; i++)
				{
					switch (toupper(S[i])) // ������ �� � � 
					{
					case 'A': y = 10; break;
					case 'B': y = 11; break;
					case 'C': y = 12; break;
					case 'D': y = 13; break;
					case 'E': y = 14; break;
					case 'F': y = 15; break;
					case '1': y = 1; break;
					case '2': y = 2; break;
					case '3': y = 3; break;
					case '4': y = 4; break;
					case '5': y = 5; break;
					case '6': y = 6; break;
					case '7': y = 7; break;
					case '8': y = 8; break;
					case '9': y = 9; break;
					case '0': y = 0; break;
					default:
					{
						cout << "����������� ������.";
						goto link;
					}
					}
					x = x + y * pow(16, z);
					z--;
				}
				cout << "���������:" << x << "\n";
				cin.get();
				goto link;
			}
			case '4':
			{
				goto link2;
			}
			default:
			{
				cout << "����������� ������.";
				break;
			}
			}
			}
		case '1':
		{
			cout << "������� ����� � 10 �.� ��� �������� � 2 �.�:" ;
			cin >> x;
			if (x > 0)
			{
				int y = 0, s = 1;//s-������,y-�������
				while (x)
				{
					y += (x % 2) * s;
					x = x / 2;
					s = s * 10;
				}
				cout << "���������:" << y << "\n";
				cin.get();
				break;
			}
			else
			{
				cout << "����������� ������.";
				break;
			}

		}
		case '2':
		{
			cout << "������� ����� � 10 �.� ��� �������� � 8 �.�:" ;
			cin >> x;
			if (x > 0)
			{
				int y = 0, s = 1;//s-������,y-�������
				while (x)
				{
					y += (x % 8) * s;
					x = x / 8;
					s = s * 10;
				}
				cout << "���������:" << y << "\n";
				cin.get();
				break;
			}
			else
			{
				cout << "����������� ������.";
				break;
			}
		}
		case '3':
		{
			int val;
			cout << "������� ����� � 10 �.� ��� �������� � 16 �.�:" ;
			cin >> x;
			if (x > 0)
			{
			cout << "���������:" <<  hex << x << "\n";
			cin.get();
		     }
			else
			{
				cout << "����������� ������.";
				break;
			}
		}
		default:
		{
			cout << "����������� ������.";
			break;
		}
		}
		link:
		cout << "���������/����� ('Y'/'N')\n";
		cin >> YesNo;
		} while ((YesNo == 'Y' || YesNo == 'y'));
		cin.get();
		return;
	}
