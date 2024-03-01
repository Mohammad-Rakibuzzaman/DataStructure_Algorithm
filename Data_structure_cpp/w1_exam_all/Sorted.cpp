#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int a;
    cin >> a;

    while(a--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        int flag = 0;

        for(int i=0; i<n-1; i++)
        {
            if(v[i] > v[i+1])
            {
                flag = 1;
                break;
            }

        }

        // if(flag > 0)
        // {
        //     cout << "NO" << endl;
        // }
        // else 
        // {
        //     cout << "YES" << endl;
        // }
        string res = (flag > 0) ? "NO" : "YES";
        cout << res << endl;

    }

    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for(int i=0; i<n; i++)
    // {
    //     cin >> v[i];
    // }
        
    // int flag = 0;

    // for(int i=0; i<n-1; i++)
    // {
    //     if(v[i] > v[i+1])
    //     {
    //         flag = 1;
    //         break;
    //     }

    // }

    // if(flag > 0)
    // {
    //     cout << "NO" << endl;
    // }
    // else 
    // {
    //     cout << "YES" << endl;
    // }

    return 0;
}