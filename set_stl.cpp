#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    cout << s.count(1000) << endl; //O(logN)
    if (s.count(1000))
    {
        cout << "ase" << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    return 0;
}