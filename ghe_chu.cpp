#include <bits/stdc++.h>
using namespace std;

int n, k;
int arr[100];
bool used[100];
void in()
{
    for (int i = 1; i <= k; i++)
    {
        char m = arr[i] + 96;
        cout << m;
    }
    cout << endl;
}

void ghep(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            arr[i] = j;
            used[j] = 1;
            if (i == k)
            {
                in();
            }
            else
            {
                ghep(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main()
{
    memset(used, 0, sizeof(arr));
    cin >> n >> k;
    ghep(1);

    system("pause");
}