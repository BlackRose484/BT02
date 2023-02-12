#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 2 * n - 1;
    int l = 0;
    while (s >= 1)
    {
        for (int i = 0; i < l; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < s; i++)
        {
            cout << "*";
        }
        cout << endl;
        s -= 2;
        l++;
    }
    system("pause");
}