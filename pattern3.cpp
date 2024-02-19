#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;
/*
* * * 
* * * 
* * * 
*/
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
/*
* 
* * 
* * * 
*/
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}

/*
1 
1 2 
1 2 3
*/
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
/*
1 
2 2 
3 3 3 
*/

	for(int i=1;i<=n;i++){
          for (int j = 1; j <= i; j++) {
            cout << i << " ";
          }
          cout << endl;
        }
/*
* * * 
* * 
* 
*/
	for(int i=1;i<=n;i++){
        for (int j = n; j >= i; j--) {
        	cout << "* ";
        }
        cout << endl;
    }
/*
1 2 3 
1 2 
1 
*/
    for(int i=1;i<=n;i++){
          for (int j = n; j >= i; j--) {
            cout <<n-j+1<<" ";
          }
          cout << endl;
        }
/*
  *
 ***
*****
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
/*
*****
 ***
  *
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=n*2-i;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
/*
  *
 ***
*****
*****
 ***
  *
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=n*2-i;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
/*
*
**
***
**
*
*/
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
/*
1 
0 1 
1 0 1 

*/
    int start =1;
      
      
      for(int i=0;i<n;i++){
          if(i%2 ==0) start = 1;
          else start = 0;
          for(int j=0;j<=i;j++){
              cout<<start<<" ";
              start = 1-start;
          }
        cout<<endl;
    }
/*
1         1 
1 2     2 1 
1 2 3 3 2 1 

*/
    int spaces=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        
        for(int j = 1;j<=spaces;j++){
              cout<<"  ";
              
          }
        
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        spaces=spaces-2;
    }
/*
1 
2 3 
4 5 6
*/
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
// A 
// A B 
// A B C 
    char count1='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count1<<" ";
            count1++;
        }
        count1='A';
        cout<<endl;
    }
/*
A B C 
A B 
A
*/
    char count2='A';
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<count2<<" ";
            count2++;
        }
        count2='A';
        cout<<endl;
    }
/*
A 
B B 
C C C 
*/
    for(int i=1;i<=n;i++){
        char count='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
        }

        cout<<endl;
    }
/*
    A 
  A B A 
A B C B A 
*/
    for(int i=1;i<=n;i++){
        int space=n-i;
        
        for(int j=1;j<=space;j++){
            
            cout<<"  ";
        }
        
        for(int j=1;j<=i;j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
        for(int j=i;j>1;j--){
            char ch='A'+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
/*
C 
C B 
C B A 
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+n-j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
/*
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        int space=(i-1)*2;
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int space=(n-i)*2;
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
/*
*         * 
* *     * * 
* * * * * * 
* *     * * 
*         *
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int space=(n-i)*2;
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        int space=i*2;
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;

    }
/*
***
* *
***
*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==1 || i==n)||(j==1 || j==n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
/*
33333
32223
32123
32223
33333
*/
    for(int i=0;i<(n*2)-1;i++){
        for(int j=0;j<(n*2)-1;j++){
            int top=i;
            int bottom=j;
            int right=(2*n-2)-i;
            int left=(2*n-2)-j;

            cout<<n-min(min(top,bottom),min(left,right));
        }
        cout<<endl;
    }
}
