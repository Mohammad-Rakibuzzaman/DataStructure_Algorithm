#include<bits/stdc++.h>
using namespace std;

void mergeSortedArrays(int ar1[], int ar2[], int sz1, int sz2, int mergedAr[])
{

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < sz1 && j < sz2)
    {
        if(ar1[i] > ar2[j])
        {
            mergedAr[k] = ar1[i];
            i++;
        }
        else
        {
            mergedAr[k] = ar2[j];
            j++;
        }
        k++;
    }

    //extra val storeeee

    while (i < sz1)
    {
        mergedAr[k] = ar1[i];
        i++;
        k++;
    }

    while (j < sz2)
    {
        mergedAr[k] = ar2[j];
        j++;
        k++;
    }
}



int main()
{
    int a;
    cin >> a;
    int ar1[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar1[i];
    }
    int sz1 = sizeof(ar1) / sizeof(ar1[0]);

    int b;
    cin >> b;
    int ar2[b];
    for (int i = 0; i < b; i++)
    {
        cin >> ar2[i];
    }
    int sz2 = sizeof(ar2) / sizeof(ar2[0]);

    int mergedSz = sz1 + sz2;
    int mergedAr[mergedSz];

    mergeSortedArrays(ar1, ar2, sz1, sz2, mergedAr);

    for (int i = 0; i < mergedSz; i++)
    {
        cout << mergedAr[i] << " ";

    }



    return 0;
}