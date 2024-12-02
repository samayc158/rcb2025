#include <iostream>
#include <string>
using namespace std;

void State1(string w , int  i);
void State2(string w , int  i);
void State3(string w , int  i);
void State4(string w , int  i);
void State5(string w , int  i);
void State6(string w , int  i);
void State7(string w , int  i);
void State8(string w , int  i);
void State9(string w , int  i);
void State10(string w , int  i);
void State11(string w , int  i);
void State12(string w , int  i);
void State13(string w , int  i);
void State14(string w , int  i);
void State15(string w , int  i);

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
		State9(w,i+1);
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
		State3(w, i+1);
		else
		State6(w,i+1);
	}
}

void State3(string w , int  i){
	cout<<"State 3 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State4(w, i+1);
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
		State5(w, i+1);
		else
		State3(w,i+1);
	}
}

void State5(string w , int i){
	if(i == w.length()){
		cout<<"String Accepted"<<endl;
		return;
	}
	else{
		cout<<"State 5"<<endl;
		if (w[i] == 'a' ) 
		State5(w, i+1);
		else
		State3(w,i+1);
	}
}

void State6(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State7(w, i+1);
		else
		State6(w,i+1);
	}
}

void State7(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State7(w, i+1);
		else
		State8(w,i+1);
	}
}

void State8(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Accepted"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State7(w, i+1);
		else
		State6(w,i+1);
	}
}

void State9(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State10(w, i+1);
		else
		State13(w,i+1);
	}
}

void State10(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State10(w, i+1);
		else
		State11(w,i+1);
	}
}

void State11(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State12(w, i+1);
		else
		State11(w,i+1);
	}
}

void State12(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Accepted"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State10(w, i+1);
		else
		State11(w,i+1);
	}
}

void State13(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State13(w, i+1);
		else
		State14(w,i+1);
	}
}

void State14(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Rejected"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State13(w, i+1);
		else
		State15(w,i+1);
	}
}

void State15(string w , int  i){
	cout<<"State 1 "<<endl;
	if(i == w.length()){
		cout<<"String Accepted"<<endl;
		return;
	}
	else{
		if (w[i] == 'a' ) 
		State13(w, i+1);
		else
		State15(w,i+1);
	}
}

int main(){
	string a;
	cout<<"Enter a string : ";cin>>a;
	State1(a,0);
	return 0;
}
