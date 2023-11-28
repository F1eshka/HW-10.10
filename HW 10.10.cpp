#include <iostream>
using namespace std;

// От 1 до n
void sum(int a)
{
	a--;
	if (a > 0)
	{
		sum(a);
	}
	cout << a + 1 << " ";
}

int main()
{
	int a;
	cin >> a;
	sum(a);
}

// От A до B
int main()
{
	static int b = 5;
	static int a = 1;

	if (b < a)
	{
		cout << b;
		b++;
		if (b != a)
		{
			main();
		}
	}

	else if (b > a)
	{
		b--;
		cout << b;
		if (a < b)
		{
			main();
		}
	}
}
// Точная степень двойки
void degree(int a)
{
	if (a < 2)
	{
		cout << "no";
	}
	if (a == 2)
	{
		cout << "yes" << "\n";
	}

	int b = 0;

	if (a > 2)
	{
		b++;
		degree(a / 2);
	}
}

int main()
{
	int a;
	cin >> a;
	degree(a);
}

// Сумма цифр числа
int Sum(int a)
{
	if (a > 0)
	{
		return(a % 10) + Sum(a / 10);
	}
}

int main()
{
	int a;
	cin >> a;
	int sum = Sum(a);
	cout << "Sum: " << sum - 1;
}

// Цифры числа справа налево
void Sum(int a)
{
	if (a > 0)
	{
		cout << a % 10 << " ";
		Sum(a / 10);
	}
}

int main()
{
	int a;
	cin >> a;
	Sum(a);
}

// Цифры числа слева направо
void Sum(int a)
{
	if (a > 0)
	{
		Sum(a / 10);
		cout << a % 10 << " ";
	}
}

int main()
{
	int a;
	cin >> a;
	Sum(a);
}
