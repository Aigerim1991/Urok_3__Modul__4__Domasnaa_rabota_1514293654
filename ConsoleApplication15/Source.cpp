#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
bigboss:
	int N;
	cout << "������ ����� �������" << "\n";
	cin >> N;
	switch (N)
	{

	case 1:
	{
		int n, fact=1;
		for (n=1; n <= 10; n++)
		{
			fact *= n;
			cout << "n!"<<"="<<fact<<" "<<"n2"<<"="<<pow(n,2)<< endl;
		}
	}
	break;
	case 2:
	{
		int n;
		cin >> n;
		int max = n % 10;
		while ((n /= 10) > 0)
			if (n % 10 > max)
				max = n % 10;
		cout << "���������� �����" <<" "<< max << "\n";
	}
	break;
	case 3:
	{
		int n;
		cin >> n;
		int sum = 0;
		int i;
		for ( i=10;i<=n;i++)
		n /= 10;
	    sum += i;
			
		
		
		cout << "������ �����: " << n << ' ' << '\n';
		cout << "����� ����: " << sum << '\n';
	}
	break;
	case 4:
	{
		unsigned int n, b = 0;
		cout << "������ �����:";
		scanf("%d", &n, b);
		while (n != 0)

		{
			b = b * 10 + n % 10;
			n = n / 10;
			
			
		}
		if (b==b)
          cout << "����� � ������������ ����:" << b << "\n";

	}
	break;
	case 5:
	{
		int sum = 0;
		for (int i = 12; i < 80; i++)
		{
			sum += i*i;
		}
		cout << "����� ���� ���������:" << sum << endl;
	}
	break;
	case 6:
	{
		
		for (int i=22; i < 88; i++)
		{
			
			int	raznost = (22 - 88)*(22 + 88);
		cout << "�������� ���������" << raznost << "\n";
		}
		
	}
	break;
	case 7:
	{
		int a;
		cin >> a;
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			int	raznost = (a-n)*(a+n);
			cout << "�������� ���������" << raznost << "\n";

		}
	} 
	break;
	case 8:
	{
		int n ;
		cin >> n;
		int min = n % 10;
		while ((n /= 10) > 0)
			if (n % 10 < min)
				min= n % 10;
		cout<<"���������� �����"<<min<<"\n";
	}
	break;
	case 9:
	{
		int i;
		/*int sum = 0;
		
			int komanda;
			
			int mesto;
			for (komanda = 1; komanda <=20; komanda++)
			{
				int ochko = 50 - rand() % 5;
			mesto = ochko%komanda;
			
			
			}
			cout << mesto<<"-"<< "����� ������ �������"  << "\n";*/

			int god,centner = 0;//� ����� ���� ����������� �������� 22 �������� � �������;

			for (god = 2017; god <= 2020; god++)
			{
				
				 centner = 22 + rand() % 30;
				
			}
			cout << "B" <<" "<< god << "-����" <<" "<< "����������� ���������"<<" "<<centner<<" "<<"�������� � �������" << "\n";

	}
	break;
	case 10:
	{
		int i,d,n;
		cin >> n;
		for (i=1;i<=n;i++)
		{
			if (n>10)
			d = (n / 10) % 10;
		}
		cout << "������������� �����" << "  " << d << "\n";
	}
	break;
	case 11:
	{
		int i,m,d;
		cin >> m;
		for (i = 1; i <= 1000; i++)
		{
			float c = i % 100;
			d = c / m;
		
		}
		cout << "��� �������" << d << endl;
	}
	break;
	default:
		break;
	} 











	goto bigboss;


}