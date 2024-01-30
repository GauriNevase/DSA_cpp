#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int M=47;

	cin>>n;
	long long fact=1;

	for(int i=1;i<=n;i++){
		fact=(fact*i)%M;
	}
	cout<<fact;
}