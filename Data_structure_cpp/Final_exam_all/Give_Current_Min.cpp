#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }

    int n;
    cin >> n;

    while(n--)
    {
        int c;
        cin >> c;

        if(c == 0)
        {
            int k;
            cin >> k;

            pq.push(k);
            cout << pq.top() << endl;
        }
        else if(c == 1)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if(c == 2)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else 
            {
                pq.pop();

                if(pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                     cout << pq.top() << endl;
                }     
                
            }
        }

    }

    return 0;
}