#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(Student l, Student r) {
        if (l.marks == r.marks)
            return l.roll > r.roll;
        return l.marks < r.marks;
    }
};

int main() {
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;
    while (q--) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (!pq.empty()) {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        } else if (command == 1) { 
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
        } else if (command == 2) { 
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    Student top = pq.top();
                    cout << top.name << " " << top.roll << " " << top.marks << endl;
                }
            }
        }
    }

    return 0;
}
