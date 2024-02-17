/*
coding ninjas

arrays
 Second Largest Number
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int large=INT_MIN;
    int small=INT_MAX;

    int second_large=INT_MIN;
    int second_small=INT_MAX;
    for(int i =0;i<n;i++){
        if(a[i]<small ){
            second_small=small;
            small=a[i];
        } else if (a[i] < second_small && a[i] != small) {
            second_small = a[i];
        }
    }
    for(int i =0;i<n;i++){
        if (a[i] > large ) {
            second_large=large;
            large=a[i];
        }
        else if (a[i] > second_large && a[i] != large) {
            second_large = a[i];
        }
    }
        vector<int>result={second_large,second_small};
        return result;
    
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> result = getSecondOrderElements(n, a);

    cout << "Second largest: " << result[0] << endl;
    cout << "Second smallest: " << result[1] << endl;

    return 0;
}