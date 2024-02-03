//  Check If The String Is A Palindrome
// You are given a string 'S'. Your task is to check whether the string is palindrome or not. 
// For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

// Note :

// String 'S' is NOT case sensitive.
// Example :

// Let S = “c1 O$d@eeD o1c”.
// If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, 
// we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome
#include <bits/stdc++.h> 
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isValid(char ch){

 	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')|| (ch>='0' && ch<='9') )
		{
			return true;
		}
	else{
		return false;

	}

}
bool checkPalindrome(string s)
{
    // Write your code here.
    int st=0;
	int e=s.size()-1;
		while(st<=e){
		
		if(isValid(s[st])&&isValid(s[e]))
		{
			if(toLowerCase(s[st])!=toLowerCase(s[e])){  
					return 0;
				}
				else{
					st++;
					e--;
				}
				
		}
		else{
			if(isValid(s[st])==false){
				st++;
			}
			if(isValid(s[e])==false){
				e--;
			}
		}

	}
	return 1;
}


int main(){
	string s;
	cin>>s;
	cout<<"Palindrome or not ?"<<checkPalindrome(s)<<endl;

}