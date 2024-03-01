#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;

    vector<int> v(n);


    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int flag=0;

    sort(v.begin(), v.end());

    for(int i=0; i<n-1; i++)
    {
        if(v[i] == v[i+1])
        {
            flag = 1;
        }
        
    }

    // if(flag > 0)
    // {
    //     cout << "YES";
    // }
    // else 
    // {
    //     cout << "NO";
    // }

    string res = (flag > 0) ? "YES" : "NO";
    cout << res;

    return 0;
}