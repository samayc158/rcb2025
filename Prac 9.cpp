#include <iostream>
using namespace std;

void State1(string w, int i);
void State2(string w, int i);
void State3(string w, int i);
void State4(string w, int i);
void State5(string w, int i);


void State1(string w, int i) {
    cout << "State 1" << endl;
    if (i == w.length()) {
        cout << "String Rejected" << endl;
        return;
    } else {
        if (w[i] == 'a') {
            w[i] = 'X'; // Mark 'a' as processed
            State2(w, i + 1);
        } else if (w[i] == 'Y') {
            State5(w, i + 1);
        } else {
            cout << "String Rejected" << endl;
        }
    }
}

void State2(string w, int i) {
    cout << "State 2" << endl;
    if (i == w.length()) {
        cout << "String Rejected" << endl;
        return;
    } else {
        if (w[i] == 'b') {
            w[i] = 'Y'; // Mark 'b' as processed
            State3(w, i + 1);
        } else if (w[i] == 'Y' || w[i] == 'a') {
            State2(w, i + 1);
        } else {
            cout << "String Rejected" << endl;
        }
    }
}

void State3(string w, int i) {
    cout << "State 3" << endl;
    if (i == w.length()) {
        cout << "String Rejected" << endl;
        return;
    } else {
        if (w[i] == 'c') {
            w[i] = 'Z'; // Mark 'c' as processed
            State4(w, i-1); // Return to start
        } else if (w[i] == 'b' || w[i] == 'Z') {
            State3(w, i + 1);
        } else {
            cout << "String Rejected" << endl;
        }
    }
}

void State4(string w, int i) {
    cout << "State 4" << endl;
    if (i == w.length()) {
        cout<<"String Rejeced "<<endl; // Check if the entire string is marked
    } else {
        if (w[i] == 'b' || w[i] == 'Y' || w[i] == 'Z' || w[i] == 'a') {
            State4(w, i - 1);
        } else if(w[i] == 'X'){
        	State1(w, i + 1);
		}else {
            cout << "String Rejected" << endl;
        }
    }
}

void State5(string w, int i) {
    cout << "State 5" << endl;
    if (i == w.length()) {
        cout << "String Accepted" << endl;
        return;
    } else {
        if (w[i] == 'Z' || w[i] =='Y') {
            State5(w, i + 1);
        } else {
            cout << "String Rejected" << endl;
        }
    }
}



int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a;
    State1(a, 0);
    return 0;
}

