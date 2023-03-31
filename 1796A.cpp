#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, k, i;
    string s, fb = "FBFFBFFBFBFFBFFBF";
    cin >> t;
    while (t--)
    {
        cin >> k >> s;
        if (search(fb.begin(), fb.end(), s.begin(), s.end()) != fb.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
