#include<bits/stdc++.h>
using namespace std;

void print(map<int,string>&m){
	cout<<m.size()<<endl;
	for(auto &pr :m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}

int main(){
	map<int,string >m;
	m[1]="abc";		//O(log(n))
	m[5]="cdc";		
	m[3]="adc";
	m.insert({4,"afg"});

	/*//first method
	map<int,string>::iterator it;
	for(it=m.begin(); it!=m.end(); ++it){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	*/
	/*//second way to call
	for(auto &pr :m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	*/
	auto it=m.find(8);		//O(log(n))
	m.erase(3);
	m.clear();
	// if(it==m.end()){
	// 	cout<<"No value";
	// }
	// else{
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;
	// }

	//third way by using function
	print(m);
}