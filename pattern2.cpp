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
	int row10=1;
	while(row10<=n){
		int space=n-row10;
		while(space){
			cout<<" ";
			space--;
		}
		int col=1;
		while(col<=row10){
			cout<<"*";
			col++;
		}

		cout<<endl;
		row10++;
	}
/*
**** 
***  
**   
*  
*/
	int row1=1;
	while(row1<=n){
		int star=n-row1+1;
		while(star){
			cout<<"*";
			star--;
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
1234
123 
12  
1   
*/
	int row6=1;
	while(row6<=n){
		int col=1;
		int space1=row6-1;
		
		while(col<=n-space1){
			cout<<col;
			col++;
		}
		while(space1){
			cout<<" ";
			space1--;
		}
		cout<<endl;
		row6++;
	}

	

/*
12344321
123  321
12    21
1      1
*/


for(int i=1;i<=n;i++){
	for(int j=1;j<=n-i+1;j++){
		cout<<j;
	}
	for(int j=0;j<(i-1)*2;j++){
		cout<<" ";
	}
	for(int j=n-i+1;j>=1;j--){
		cout<<j;
	}
	cout<<endl;
}

    
}