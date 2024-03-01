#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i=0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long> pre(n);

    // sort(v.begin(), );

    pre[0] = v[0];

    for(int i=1; i < n; i++)
    {
        pre[i] = v[i] + pre[i-1];
    }

    // for(int i=0; i < n; i++)
    // {
        
    // }
    reverse(pre.begin(), pre.end());
    
    for(int i=0; i < n; i++)
    {
        cout << pre[i] << " ";
    }



    return 0;
}