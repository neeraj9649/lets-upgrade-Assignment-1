#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int l=t;
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < l - 1; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (2 * i) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
		l--;
	}
	return 0;
}