#include<iostream>
using namespace std;

//to convert upper case char to lower case
char toLowerCase(char ch){
	if(ch>='a' && ch<='z'){
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}

//is it valid

 bool isValid(char ch){

 	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')|| (ch>='0' && ch<='9') )
		{
			return true;
		}
	else{
		return false;

	}

 }
//reverse a string
void reverse(char name[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(name[s++],name[e--]);
	}
}

//palindrome which is not case sensitive
bool palindrome(string ch,int n){
	int s=0;
	int e=n-1;
		while(s<=e){
		//toLowercase function is used here to make uppercase char to lowercase
		//If not used then Nun wont be a palindrome
		if(isValid(ch[s])&&isValid(ch[e]))
		//used to consider char and numbers special characters are ignored
		{
			if(toLowerCase(ch[s])!=toLowerCase(ch[e])){  
					return 0;
				}
				else{
					s++;
					e--;
				}

		}
		else{
			if(isValid(ch[s])==false){
				s++;
			}
			if(isValid(ch[e])==false){
				e--;
			}
		}

	}
	return 1;
	
}

//Length of the string
int getlength(char name[]){
	int count=0;
	for(int i=0; name[i]!=0;i++){
		count ++;

	}
	return count;
}

int main(){

	char name[20];
	cin>>name;    //Gauri Nevase
	// cout<<name<<endl;   //Gauri
    //input after space tab and enter won't execute
    // name[2]='\0';
    // cout<<name<<endl;
    //only first 2 characters will be printed
    int len=getlength(name);
    // cout<<"Length"<<len<<endl;
    //length of the string will be printed
    reverse(name,len);
    // cout<<"Revers String:"<<name<<endl;

    cout<<"Palindrome or not ?"<<palindrome(name,len)<<endl;

    

	return 0;
}