// Name: Advika Bhosle
// PRN: 24070123007
// Batch: EnTc A1

#include <iostream>
#include <cstdio>
using namespace std;

class Car {  
public: 
    string name;
    string brand;
    string model;
    float year;
}; 
int main() {
    //Car 1
    Car carObj1;
    carObj1.name = "Car1";
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    //Car 2
    Car carObj2;
    carObj2.name = "Car2";
    carObj2.brand = "Audi";
    carObj2.model = "SLX";
    carObj2.year = 2002;

    //Car 1 details
    cout << carObj1.name << " " << carObj1.brand << " " 
         << carObj1.model << " " << carObj1.year << endl;

    //Car 2 details
    cout << carObj2.name << " " << carObj2.brand << " " 
         << carObj2.model << " " << carObj2.year << endl;

    return 0;
}

//Ouput

Car1 BMW X5 1999
Car2 Audi SLX 2002


=== Code Execution Successful ===
