#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;
    cin.ignore();

    while (x--)
    {
        string sentence;
        getline(cin, sentence);   

        stringstream ss(sentence);
        string s;

        map<string, int> mp;

        string mx_word;

        int count_mx = 0;
        while (ss >> s)
        {
            mp[s]++;
            
            if(mp[s] > count_mx)
            {
                mx_word = s;
                count_mx = mp[s];

            }
            // cout << mx_word << " " << count_mx << endl;
           
        }

        cout << mx_word << " " << count_mx << endl;

    }
    
    return 0;
}

