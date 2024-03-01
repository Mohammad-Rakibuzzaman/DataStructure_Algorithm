#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};


class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int x; 
    cin >> x;

    priority_queue<Student, vector<Student>, cmp> pq;

    for(int i = 0; i < x; i++)
    {
        int r, m;
        string s;

        cin >> s >> r >> m;
        pq.push(Student(s, r, m));
        
    }

    int n;

    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;

        if(a == 0)
        {
            int r, m;
            string s;
            cin >> s >> r >> m;
            pq.push(Student(s, r, m));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl; 

        }

        else if(a == 1)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }

        else if(a == 2)
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
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }


        }



    }







    return 0;
}