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
	if(w[i] == 'a'){
		s.push('a');
		State2(w,s,i+1);
	}
	else{
		cout<<"String Rejected"<<endl;
		return;
	}
}

void State2(string w , stack<char> & s , int i){
	cout<<"State 2"<<endl;
	if(i==w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	if(w[i]=='a'){
		s.push('a');
		State2(w,s,i+1);
	}
	else if(w[i]=='b'){
		s.pop();
		State3(w,s,i+1);
	}
}

void State3(string w , stack<char> & s , int i){
	cout<<"State 3"<<endl;
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
	if(w[i]=='a'){
		cout<<"String Rejected"<<endl;
			return;
	}
	else{
		if(s.empty()){
			cout<<"String Rejected"<<endl;
			return;
		}
		else{
			s.pop();
			State3(w,s,i+1);
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
