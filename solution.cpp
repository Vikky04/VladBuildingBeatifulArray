#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a[n];
        bool result = true;
        int odds = 0, evens = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                evens++;
            else
                odds++;
        }
        // cout << evens << " " << odds << endl;
        sort(a, a + n);
        if (evens == n || odds == n || a[0] % 2 != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
