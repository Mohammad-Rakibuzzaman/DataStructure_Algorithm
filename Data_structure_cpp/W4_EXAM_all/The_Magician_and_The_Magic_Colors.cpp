#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while(x--)
    {

        int y;
        cin >> y;
        
        string s;
        cin >> s;

        stack<char> st;

        for(char c:s)
        {

            if((!st.empty() && st.top() == 'B' && c == 'R') || (!st.empty() && st.top() == 'R' && c == 'B'))
            {
                st.pop();
                st.push('P');
            }


        }
        


    }


    return 0;
}