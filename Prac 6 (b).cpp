#include <iostream>
#include <string>
using namespace std;

void State1(string w , int  i);
void State2(string w , int  i);
void State3(string w , int  i);
void State4(string w , int  i);


void State1(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State2(w, i+1);
		else
		State4(w,i+1);
	}
}

void State2(string w , int  i){
	cout<<"State 2 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State2(w, i+1);
		else
		State3(w,i+1);
	}
}

void State3(string w , int  i){
	cout<<"State 3 "<<endl;
	if(i == w.length()){
		cout<<"String Accepted"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State2(w, i+1);
		else
		State3(w,i+1);
	}
}

void State4(string w , int i){
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		cout<<"State 4"<<endl;
		if (w[i] == 'a' ) 
		State4(w, i+1);
		else
		State4(w,i+1);
	}
}



int main(){
	string a;
	cout<<"Enter a string : ";cin>>a;
	State1(a,0);
	return 0;
}
