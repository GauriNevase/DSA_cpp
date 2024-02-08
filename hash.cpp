/*
Given array a of N integers .Give Q queries
and in each query give a number X,print 
cout of that number in array.

Constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5

input
6
3 5 7 7 7 8
5
3
7
5
8
9
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		hsh[a[i]]++;   //new code
	}
	/*
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		// int ct=0;
		// for(int i=0;i<n;i++){
		// 	if(a[i]==x){
		// 		ct++;
		// 	}
		// }
		cout<<hsh[x]<<endl;

		//O(N)+O(Q*N)=O(N^2) old
		//O(N)+O(Q)=O(Q)=10^5
	}*/

	for(int i=0;i<n;i++){
            if(a[i]==1){
                cout<< hsh[i];
            }
        }
}