// Name: Advika Bhosle
// PRN: 24070123007
// Batch: EnTc A1

#include <iostream>
#include <cstdio>
using namespace std;

class Student {
    // properties/attributes
public: // make them public so main() can access them directly
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main() {
    Student s1;
    s1.name = "Advika";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.result = 9.6;
    
    Student s2;
    s1.name = "Barkha Kumari";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.result = 8.6;


    cout << s1.name << endl;
    cout << s1.branch << endl;
    cout << s1.subject << endl;
    cout << s1.result << endl;

    return 0;
}

// OUTPUT

Barkha Kumari
E&TC
C++
8.6


=== Code Execution Successful ===
