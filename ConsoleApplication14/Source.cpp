#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
		int x;
		cout << "������� ����� �������" << endl;
		cin >> x;
		switch (x)
		{
		case (1):
		{   
			float proc = 0.2;
			int stvb = 100, dn, m, stvs, stvv;
			
			cout << "������� ����������������� ��������� = " << endl;
			cin >> m;
			
			cout << "������� ���� ������ = " << endl;
			cin >> dn;

			switch (dn)
			{
			case  6:
			case  7:
			{
				stvs = (stvb*proc);
				float ff = (stvb - stvs)*m;

				cout << "��������� ����������� � ������� (� ������) = " <<ff << endl;
				//stvv = (stvb*proc);
				cout << "��� �����. � ����� ���� ��������� �������� = " << ff << endl;
			}
			break;

			default:
				break;
			}





		}
		
		case (2):
		{
			int st, sk1, sk2;
			
			cout << "������� ��������� ������� = " << endl;
			cin >> st;

			if (st<500)
				switch (sk1)
		case 5:
			{
				cout << "����� � ������ ������ �������� = " << (st - (st / 100) * 5) << endl;
			}
            break;
			{
				switch ( sk2)
					case 10:
		
				{
				default:
					break;
				}

				{
				default:
					
				}


			/*switch (st)
			{
			case st:			{
					cout << "������ 5%-" << (st / 100)*sk1 << endl;
					cout << "������ 10% - " << (st / 100)*sk2 << endl;
			}
					
			}
			break;
				}
				
			default:
				break;
			}
			*/

				
			}


}		

