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