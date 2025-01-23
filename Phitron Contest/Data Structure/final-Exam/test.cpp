#include <bits/stdc++.h>
using namespace std;

struct Student {
    string id;
    int age;
    int marks;
    
    bool operator<(const Student& other) const {
        if (marks == other.marks) {
            return id > other.id;
        }
        return marks < other.marks;
    }
};

int main() {
    int n;
    cin >> n;
    priority_queue<Student> pq;

    for (int i = 0; i < n; ++i) {
        Student s;
        cin >> s.id >> s.age >> s.marks;
        pq.push(s);
    }

    int query;
    cin >> query;

    for (int i = 0; i < query; ++i) {
        int operation;
        cin >> operation;

        if (operation == 0) {  // Insert a student and print the current student with the maximum marks
            Student s;
            cin >> s.id >> s.age >> s.marks;
            pq.push(s);
            cout << pq.top().id << " " << pq.top().age << " " << pq.top().marks << endl;

        } else if (operation == 1) {  // Print the current student with the maximum marks
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top().id << " " << pq.top().age << " " << pq.top().marks << endl;
            }

        } else if (operation == 2) {  // Delete the student with the maximum marks and print the new maximum
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top().id << " " << pq.top().age << " " << pq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}