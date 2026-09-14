#include <bits/stdc++.h>
using namespace std;

int f1() {
    pair<int, int> p1;
    p1.first = 10;
    p1.second = 20;

    cout << "First value: " << p1.first << "\n";
    cout << "Second value: " << p1.second << "\n";

    return 0;
}


int f2() {
    // You can use {} to instantly create and assign a pair
    pair<string, int> student = {"Arfatul", 101};

    cout << "Name: " << student.first << ", Roll: " << student.second << "\n";

    return 0;
}


int f3() {
    // Stores: { ID, {Name, CGPA} }
    pair<int, pair<string, double>> student_data;

    student_data = {1, {"Alice", 3.95}};

    // Printing a nested pair
    cout << "ID: " << student_data.first << "\n";
    cout << "Name: " << student_data.second.first << "\n";
    cout << "CGPA: " << student_data.second.second << "\n";

    return 0;
}

int main() {
    f1();
    f2();
    f3();
}
