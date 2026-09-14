#include <bits/stdc++.h>
using namespace std;

int f1() {
    string s;
    cin >> s; // Reads a single word (stops at space)
    cout << "You entered: " << s << "\n";

    return 0;
}



int f2() {
    string s1 = "Competitive";
    string s2 = "Programming";

    // You can add strings together using the + operator
    string s = s1 + " " + s2; 

    cout << "Result: " << s << "\n";

    return 0;
}



int f3() {
    string s = "hello";

    // Let's make every alternate character uppercase
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            s[i] = toupper(s[i]); 
        }
    }

    cout << "Modified string: " << s << "\n"; // Prints: HeLlO

    return 0;
}

int main() {
    f1();
    f2();
    f3();
}
