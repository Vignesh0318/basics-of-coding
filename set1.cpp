#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
   
    multiset<int> m;
    for (int i = 0; i < x; i++)
    {
        int elements;
        cin >> elements;
        m.insert(elements);
    }

    // vector<int> v(m.begin(), m.end());
    map<int, int> mp;

    for(auto it : m)
    {
        mp[it] = mp[it]+1;
    }

    
    // for (int i = 0; i < x; i++)
    // {
    //     mp[v[i]] = mp[v[i]] + 1;
    // }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << "\n";
    }
    cout << "\n";

    set<int> s(m.begin(), m.end());

    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}