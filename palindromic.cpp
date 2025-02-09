#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int a, d = 0;
    cin >> a;
    while (a > 0)
    {
        int c = 0;
        string s;
        cin >> s;
        vector<int> n;
        for (char c : s)
            n.push_back(c - '0');

        for (int i = 0; i <= (n.size() - 1) / 2; i++)
        {
            if (n[i] != n[n.size() - i-1])
                c++;
        }
        if (c == 0)
            cout << "Case " << ++d << ": Yes" << endl;
        else
            cout << "Case " << ++d << ": No" << endl;

        a--;
    }
}
