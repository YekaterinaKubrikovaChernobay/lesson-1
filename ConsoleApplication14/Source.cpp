#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
		int x;
		cout << "Введите номер задания" << endl;
		cin >> x;
		switch (x)
		{
		case (1):
		{   
			float proc = 0.2;
			int stvb = 100, dn, m, stvs, stvv;
			
			cout << "Введите продолжительность разговора = " << endl;
			cin >> m;
			
			cout << "Введите день недели = " << endl;
			cin >> dn;

			switch (dn)
			{
			case  6:
			case  7:
			{
				stvs = (stvb*proc);
				float ff = (stvb - stvs)*m;

				cout << "Стоимость переговоров в субботу (в минуту) = " <<ff << endl;
				//stvv = (stvb*proc);
				cout << "Это воскр. В воскр цена разговора составит = " << ff << endl;
			}
			break;

			default:
				break;
			}





		}
		
		case (2):
		{
			int st, sk1, sk2;
			
			cout << "Введите стоимость покупки = " << endl;
			cin >> st;

			if (st<500)
				switch (sk1)
		case 5:
			{
				cout << "Сумма с учетом скидки составит = " << (st - (st / 100) * 5) << endl;
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
					cout << "Скидка 5%-" << (st / 100)*sk1 << endl;
					cout << "Скидка 10% - " << (st / 100)*sk2 << endl;
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

