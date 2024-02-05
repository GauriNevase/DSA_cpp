/*
Given T Test cases and in each test case a number
N.Print its factorial
for each test case % M
where M =10^9+7

Constraints
1<= T <= 10^5
1<= N <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N =1e5+10;
long long fact[N];

int main(){
	int t;
	cin>>t;
	
	fact[0]=fact[1]=1;

	for(int i=2;i<=N;i++){
		fact[i]=(fact[i-1]*i)%M;
	}
	while(t--){
		int n;
		cin>>n;



		/*
		long long fact=1;
		for(int i=2;i<=n;i++){
			fact=(fact*i)%M;
		}
		*/
		cout<<fact[n]<<endl;


	}
	//O(T*N)=10^10  old
	//O(T)+O(N)=O(N)  new
}