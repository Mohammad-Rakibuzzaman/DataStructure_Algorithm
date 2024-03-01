// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;
    
//     while(x--)
//     {
//         string s;
//         cin >> s;

        
//         stack<char> st;
        
//         for(char c:s)
//         {

//             if (!st.empty() &&  c == 'B'  &&  st.top() == 'A')
//             {
//                 st.pop();
//             }
//             else if (!st.empty() && c == 'A' && st.top() == 'B')
//             {
//                 st.pop();
//             }
//             else 
//             {
//                 st.push(c);
//             }
            
        
//         }

//         if(st.empty())
//         {
//             cout << "YES" << endl;
//         } 
//         else 
//         {
//             cout << "NO" << endl;
//         }
//     }


//     return 0;
    
// }


//ANOTHER METHOD
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    while(x--)
    {
        string s;
        cin >> s;

        
        stack<char> st;
        
        for(char c:s)
        {

            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                if (c == 'A' && st.top() == 'B')
                {
                    st.pop();
                }
                else if (c == 'B' && st.top() == 'A')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }

        if(st.empty())
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }

            
    }
        


    return 0;
    
}




// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;        
//     stack<char> st;
        
//     for(char c:s)
//     {
//         st.push(c);   
//     }

//         // if(st.empty())
//         // {
//         //     cout << "YES" << endl;
//         // } 
//         // else 
//         // {
//         //     cout << "NO" << endl;
//         // }
//     cout << st.top() << endl;



//     return 0;
// }

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// bool isValidString(const string& s) {
//     stack<char> st;

//     for (char c : s) {
//         if (c == 'B' && !st.empty() && st.top() == 'A') {
//             st.pop();
//         } else if (c == 'A' && !st.empty() && st.top() == 'B') {
//             st.pop();
//         } else {
//             st.push(c);
//         }
//     }

//     return st.empty();
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         string s;
//         cin >> s;

//         if (isValidString(s)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }









// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// bool isValidString(const string& s) {
//     stack<char> st;

//     for (char c : s) {
//         if (c == 'B' && !st.empty() && st.top() == 'A') {
//             st.pop();
//         } else if (c == 'A' && !st.empty() && st.top() == 'B') {
//             st.pop();
//         } else {
//             st.push(c);
//         }
//     }

//     return st.empty();
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         string s;
//         cin >> s;

//         if (isValidString(s)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }