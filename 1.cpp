#include<iostream>
using namespace std;
// search element in array
// bool isPresent(int arr[][3] ,int search, int row, int col) {
//         for(int row=0; row<3; row++){
//             for(int col=0; col<3; col++){
//                 if(arr[row][col]==search){
//                     return 1;
//                 }
//             }
//         }
//         return 0;
//     }

// sum of all the elements in the row

// void isRowSum(int arr[][3],int row ,int col){
//     cout<<"Printing sum of all the values in row"<<endl;
//     for(int row=0; row<3; row++){
//         int sum=0;
//             for(int col=0; col<3; col++){
//                 sum+=arr[row][col];
//             }
//         cout<<"sum of row "<<row+1<<"="<<sum<<endl;

//         }
    
// }

// void isColSum(int arr[][3],int row ,int col){
//     cout<<"Printing sum of all the values in col"<<endl;
//     for(int col=0; col<3; col++){
//         int sum=0;
//             for(int row=0; row<3; row++){
//                 sum+=arr[row][col];
//             }
//         cout<<"sum of col "<<col+1<<"="<<sum<<endl;

//         }
    
// }

// void isLargestRow(int arr[][3],int row,int col){
//     int large=0;
//     int colno=0;
//     for(int col=0; col<3; col++){
//         int sum=0;
        
//             for(int row=0; row<3; row++){
//                 sum+=arr[row][col];
//                 if(large<sum){
//                     large=sum;
//                     colno=col;
//                 }
//             }
            
//         }
//         cout<<large<< " is the largest."<<endl;
//         cout<<"It is in column no "<<colno<<endl;
    
// }

// void sinewave(int arr[][3],int row ,int col){
//     for(int col=0; col<3; col++){
//         if(col%2==0){
//         for(int row=0; row<3; row++){
            
//                 cout<<arr[row][col];

//             }}else{
//                 for(int row=2;row>=0;row--){
//                 cout<<arr[row][col];
//             }
//         }
//         cout << endl;
//     }

// }

// int main(){
//     // create 2D array
//     int arr[3][3] ;
    


   
//     //taking row wise input for array
//     for(int row=0; row<3; row++){
//         for(int col=0; col<3; col++){
//             cin >> arr[row][col];
//         }
//     }

     //taking column wise input for array
    // for(int col=0; col<3; col++){
    //     for(int row=0; row<3; row++){
    //         cin >> arr[row][col];
    //     }
    // }

    // //printing output rowise
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<3; col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Printing output column-wise
    // for(int col=0; col<3; col++){
    //     for(int row=0; row<3; row++){
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }


    // isRowSum(arr ,3,3);

    // isColSum(arr ,3,3);

    // isLargestRow(arr ,3,3);

    //search the element

    // int search;
    // cout<<"Enter the element to search ";
    // cin >> search;

    // if (isPresent(arr , search, 3,3)){
    //     cout<<"Element found";
    // }
    // else{
    //     cout<<"Element is not present in the array"<<endl; 
    // }
    
//     // cout<<"Element is not present in the array";
//     sinewave(arr,3,3);
   

//     return 0;

    
// }

int main(){
    int i;
    int j;
    cin>>i;
    cin>>j;
    int arr[3][3];
    int a[9];

    for(int n=0; n<=i; n++){
        for(int m=0; m<=j; m++){
            cin >> arr[n][m];
        }
    }
    for(int n=0; n<=i; n++){
        for(int m=0; m<=j; m++){
            if(arr[n][m]==1){
                a[n]++;

        }
            }
            for(int n=0;n<=i;n++){
                cout<<a[n];
            }
            
    }


}