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

        
        for (int i = 0; i < n; i++)
        {  
            vector<int> b;
            for(int i=0;i<n;i++)
            {
                cin>>b[i];
            }

            for(int val: b)
            {
                if(val % 2 == 1)
                {
                    cout<< val << endl;
                }
            }

        }

        

    }



    return 0;
}