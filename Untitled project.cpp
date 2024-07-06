#include<iostream>
using namespace std;
string output;
char a;

string encryption(string s,int key){
	for(int i=0;i<s.length();i++)
	a=s[i]+key;
	if((a<'z')||(a<'z')){
	output=output+a;
	}
	else{
		a-=26;
	
}
return output;
}

string decryption(string s,int key){
 return output;
}
int main(){
string input;
int user_input,key;
cout<<"1)encryption\n2) decryption\ninput:";
cin>>user_input;
cout<<"enter text:";
cin>>input;
cout<<"enter key:";
cin>>key;
switch(user_input){
case 1 :cout<<"encrpted text:"<<encryption(input,key);break;
case 2 :cout<<"decrpted text:"<<decryption(input,key);break;
default:cout<<"invalid inputs";

}
}
