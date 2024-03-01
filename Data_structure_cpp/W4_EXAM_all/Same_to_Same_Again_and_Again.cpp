#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    list<int> a;
    list<int> b;

    while (!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }

    while (!q.empty())
    {
        b.push_back(q.front());
        q.pop();
    }

    if(a == b)
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }


    return 0;
}