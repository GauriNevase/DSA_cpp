#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;

/*
   *
  **
 ***
****
*/
	int row=1;
	while(row<=n){
		int space=n-row;
		while(space){
			cout<<" ";
			space--;
		}
		int col=1;
		while(col<=row){
			cout<<"*";
			col++;
		}

		cout<<endl;
		row++;
	}
/*
**** 
***  
**   
*  
*/
	int row1=1;
	while(row1<=n){
		int space=n-row1+1;
		while(space){
			cout<<"*";
			space--;
		}
		int col=1;
		while(col<=row1){
			cout<<" ";
			col++;
		}

		cout<<endl;
		row1++;
	}

/*
****
 ***
  **
   *
*/
	int row2=1;
	while(row2<=n){
		int col=1;
		int space1=row2-1;
		while(space1){
			cout<<" ";
			space1--;
		}
		int star=n-row2+1;
		while(star){
			cout<<"*";
			star--;
		}
		cout<<endl;
		row2++;
	}
/*
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 


*/
	int row3=1;
	while(row3<=n){
		int space=n-row3;
		while(space){
			cout<<"  ";
			space--;
		}
		int col=1;
		while(col<=row3){
			cout<<col<< " ";
			col++;
		}
		int start=row3-1;
		while(start){
			cout<<start<<" ";
			start--;
		}

		cout<<endl;
		row3++;
	}

/*
12344321
123  321
12    21
1      1
*/

	int row4=1;
	while(row4<=n){
		int col=1;
		while(col<=row4){
			cout<<n+row4-1;
			col++;
		}
		cout<<endl;
		row4++;
	}
}