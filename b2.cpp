#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 0;
    while (n != 0)
    {
        for (int i = 0; i < l; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
        n--;
        l++;
    }
    system("pause");
}