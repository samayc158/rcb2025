#include <iostream>
#include <stack>
using namespace std;

stack<char> s;

void State1(string w , stack<char> & s , int i);
void State2(string w , stack<char> & s , int i);
void State3(string w , stack<char> & s , int i);

void State1(string w , stack<char> & s , int i){
	cout<<"State 1"<<endl;
	if(i==w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	if(w[i] == 'a' || w[i] == 'b'){
		s.push(w[i]);
		State1(w,s,i+1);
	}
	else{
		State2(w,s,i+1);
	}
}

void State2(string w , stack<char> & s , int i){
	cout<<"State 2"<<endl;
	if(i==w.length()){
		if(s.empty()){
			cout<<"String Accepted"<<endl;
			return;
		}
		else{
			cout<<"String Rejected"<<endl;
			return;
		}
	}
	if(s.empty()){
		cout<<"String Rejected"<<endl;
			return;
	}
	else{
		if(s.top() == w[i]){
			s.pop();
			State2(w,s,i+1);
		}
		else{
			cout<<"String Rejected"<<endl;
			return;
		}
	}
}

int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a;
    State1(a,s, 0);
    return 0;
}
