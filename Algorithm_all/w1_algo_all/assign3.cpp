#include<bits/stdc++.h>
using namespace std;

int frst_num(vector<int>&ar, int m)
{
    int l = 0;
    int r = ar.size() - 1;
    int res = -1;

    while(l <= r)
    {

        int mid = (l + r) / 2;

        if (ar[mid] == m)
        {
            res = mid;
            r = mid - 1;
        }
        else if (ar[mid] < m)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return res;

}

int sec_num(vector<int>&ar, int m)
{
    int l = 0;
    int r = ar.size() - 1;
    int res = -1;

    while(l <= r)
    {

        int mid = (l + r) / 2;

        if (ar[mid] == m)
        {
            res = mid;
            l = mid + 1;
        }
        else if (ar[mid] < m)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return res;

}

int main()
{

    int n;
    cin >> n;

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    } 

    int m;
    cin >> m;  

    int first = frst_num(ar, m);
    int second = sec_num(ar, m);

    if(second - first >= 1)
    { 
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    


    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int first_occurrence(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;
//     int result = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target) {
//             result = mid;
//             right = mid - 1;
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return result;
// }

// int last_occurrence(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;
//     int result = -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target) {
//             result = mid;
//             left = mid + 1;
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return result;
// }

// bool has_multiple_occurrences(const vector<int>& arr, int target) {
//     int first = first_occurrence(arr, target);
//     int last = last_occurrence(arr, target);
//     return last - first >= 1;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     } 

//     int k;
//     cin >> k;

//     if (has_multiple_occurrences(arr, k)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }