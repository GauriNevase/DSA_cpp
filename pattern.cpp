#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;
/*
***
***
***
***
*/
	int row=1;
	while(row<=n){
		int col=1;
		while(col<=n){
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
	}
/*
1234
1234
1234
1234
*/
	int row1=1;
	while(row1<=n){
		int col=1;
		while(col<=n){
			cout<<col;
			col++;
		}
		cout<<endl;
		row1++;
	}
/*
4321
4321
4321
4321
*/
	int row2=1;
	while(row2<=n){
		int col=1;
		while(col<=n){
			cout<<n-col+1;
			col++;
		}
		cout<<endl;
		row2++;
	}

/*
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 
*/
	int row3=1;
	int count=1;
	while(row3<=n){
		int col=1;
		
		while(col<=n){
			cout<<count<<" ";
			count++;
			col++;
		}
		cout<<endl;
		row3++;
	}

/*
*
**
***
****
*/
	int row4=1;
	while(row4<=n){
		int col=1;
		while(col<=row4){
			cout<<"*";
			col++;
		}
		cout<<endl;
		row4++;
	}
/*
1
22
333
4444
*/
	int row5=1;
	while(row5<=n){
		int col=1;
		while(col<=row5){
			cout<<row5;
			col++;
		}
		cout<<endl;
		row5++;
	}
/*
1
23
345
4567
*/
	int row6=1;
	while(row6<=n){
		int col=1;
		while(col<=row6){
			cout<<row6+col-1;
			col++;
		}
		cout<<endl;
		row6++;
	}
/*
1
21
321
4321
*/
	int row7=1;
	while(row7<=n){
		int col=1;
		while(col<=row7){
			cout<<row7-col+1;
			col++;
		}
		cout<<endl;
		row7++;
	}
/*
aaaa
bbbb
cccc
dddd
*/
	int row8=1;
	
	while(row8<=n){
		int col=1;
		while(col<=n){
			char ch='a'+row8-1;
			cout<<ch;
			col++;
		}
		cout<<endl;
		row8++;
	}

/*
abcd
abcd
abcd
abcd
*/

	int row9=1;
	
	while(row9<=n){
		int col=1;
		while(col<=n){
			char ch='a'+col-1;
			cout<<ch;
			col++;
		}
		cout<<endl;
		row9++;
	}

	/*
abcd
bcde
cdef
defg
	*/
	int row10=1;
	
	while(row10<=n){
		int col=1;
		while(col<=n){
			char ch='a'+col+row10-2;
			cout<<ch;
			col++;
		}
		cout<<endl;
		row10++;
	}
/*
a
bb
ccc
dddd
*/
	int row11=1;
	while(row11<=n){
		int col=1;
		while(col<=row11){
			char ch='a'+row11-1;
			cout<<ch;
			col++;
		}
		cout<<endl;
		row11++;
	}
/*
a
bc
cde
defg
*/
	int row12=1;
	while(row12<=n){
		int col=1;
		while(col<=row12){
			char ch='a'+col+row12-2;
			cout<<ch;
			col++;
		}
		cout<<endl;
		row12++;
	}
/*
d
cd
bcd
abcd
*/
	int row13=1;
	while(row13<=n){
		char ch='a'+n-row13;
		int col=1;
		while(col<=row13){
			
			cout<<ch;
			ch++;
			col++;
		}
		cout<<endl;
		row13++;
	}
/*
abcd
bcde
cdef
defg
*/
	int row14=1;
	while(row14<=n){
		char ch='a'+row14-1;
		int col=1;
		while(col<=n){
			
			cout<<ch;
			ch++;
			col++;
		}
		cout<<endl;
		row14++;
	}

}