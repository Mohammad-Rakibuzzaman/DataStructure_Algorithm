#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        
        int x;
        cin >> x;

        map<int, int> mp;

        int mc_val = 0;
        int mx_c = 0;

        for(int i = 0; i < x ; i++)
        {
            int v;
            cin >> v;


            mp[v]++;

            if(mp[v] > mx_c || mp[v] == mx_c && v > mc_val)
            {
                mc_val = v;
                mx_c = mp[v];
            }
            
            
        }

        cout << mc_val << " " << mx_c << endl;

    }
    
    return 0;
}
