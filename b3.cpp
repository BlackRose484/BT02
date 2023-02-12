#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 1;
    int l = n;
    while (start <= 2 * n - 1)
    {
        for (int i = 0; i < l; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < start; i++)
        {
            cout << "*";
        }
        cout << endl;
        start += 2;
        l--;
    }
    system("pause");
}