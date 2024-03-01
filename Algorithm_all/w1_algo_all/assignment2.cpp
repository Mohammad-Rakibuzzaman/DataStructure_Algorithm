#include<bits/stdc++.h>
using namespace std;

int search_num(int x[], int n, int m)
{
    int l = 0;
    int r = n - 1;

    while(l <= r)
    {

        int mid = (l + r) / 2;

        if (x[mid] == m)
        {
            return mid;
        }
        else if (x[mid] < m)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return -1;



}

int main()
{

    int n;
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    } 

    int m;
    cin >> m;   

    int ver = search_num(x, n, m);

    if(ver == -1)
    {
        cout << "Not Found" << endl;
    }
    else 
    {
         cout << ver << endl;
    }


    return 0;
}