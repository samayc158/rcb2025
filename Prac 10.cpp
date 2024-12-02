#include <iostream>
using namespace std;

void State1(string & w, int i);
void State2(string & w, int i);

void State1(string & w, int i) {
	cout<<"Moving right till the string ends"<<endl;
	if(i==w.length()){
		State2(w,i-1);
	}
    else if(w[i]=='0' || w[i]=='1'){
    	State1(w,i+1);
	}
}

void State2(string & w, int i) {
	cout<<"Searching the first 0 from the end to change it to 1"<<endl;
	if(i==-1){
		w = '1'+w;
		cout<<"String incremented successfully"<<endl;
	}
	else{
	    if(w[i]=='0'){
	    	w[i] = '1';
	    	cout<<"String incremented successfully"<<endl;
		}
		else{
			w[i] = '0';
			State2(w,i-1);
		}
	}
}

int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a;
    State1(a, 0);
    cout<<"Incremented value : "<<a<<endl;
    return 0;
}

