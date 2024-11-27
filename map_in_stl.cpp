#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp.insert({"Mahmud Hassan", 10});
    // mp.insert({"Shamim Hassan", 75});
    // mp.insert({"Jannat Hassan", 11});

    // for (auto it = mp.begin(); it !=mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // cout<<mp["Mahmud"]<<endl;
    // cout<<mp["Mahmud Hassan"]<<endl;

    mp["Mahmud Hassan"] = 79;
    mp["Tamim Hassan"] = 99;
    mp["Shamim Hassan"] = 59;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }


    cout<<mp["Mahmud Hassan"]<<endl; //shortcut

    // if (mp.count("Mahmud Hassan"))
    // {
    //     cout << "ase" << endl;
    // }
    // else
    // {
    //     cout << "Nai" << endl;
    // }

    return 0;
}