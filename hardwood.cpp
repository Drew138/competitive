#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

void brackets()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);
        double tot = 0;
        map<string, int> trees;

        while (getline(cin, s) && !s.empty())
        {
            D(s)
            tot++;
            trees[s] += 1;
        }

        cout << fixed << setprecision(4);
        for (auto const &y : trees)
        {
            cout << y.first << " " << (y.second * 100 / tot) << "\n";
        }
        cout << "\n";
        cin.ignore();
    }
}

int main()
{
    brackets();
}