#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        set<int> s;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        priority_queue<int> pq;

        for (auto it = s.begin(); it != s.end(); it++)
        {
            pq.push(*it);
        }

        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }

        cout << endl;



    }
    


    return 0;
}