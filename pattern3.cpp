#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int l = t;
    for (int i = 1; i <= t; i++)
    {
        if (i == 1 || i == t)
        {
            for (int j = 1; j <= t; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= t; j++)
            {
                if (j == 1 || j == t)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
        // l--;
    }
    return 0;
}