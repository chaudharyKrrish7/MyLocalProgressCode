//pattern1
#include <iostream>
using namespace std;
int n = 5;
int N = 5;

// int main(){
//     for (int j = 0 ; j < n ; j++){
//         cout << " \n * ";
//         for (int i = 0 ; i < n ; i++){
//         cout << "* ";   
//     }
//     }
// }

//pattern2
// int main(){
//     for (int i = 0 ; i < n ; i++){
//         cout << " * ";
//         for(int j = 0 ; j <  i ; j++){
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }
    
//pattern3
// int main(){
//     for(int i = 0 ; i <= n ; i++ ){
//         for(int j = 1 ; j <= i ; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }


//pattern4
// int main(){
//     for (int i =1 ; i <= n ; i++){
//         for (int j =1 ; j <= i ;j++){
//             cout << i << "";
//         }
//         cout << endl;
//     }
// }


//pattern5
// int main(){
//     for (int i = 1 ; i <= n ; i++){
//         for(int j = n ; j >= i ; j--){
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }


//pattern6
// int main(){
    // for (int i = 1 ; i <= n ; i++){
    //     for (int j = n ; j >= i ; j--){
    //         cout << n-j+1;
    //     }
    //     cout << endl;
    // }
// }


//pattern7
// int main(){
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j<n-1-i ; j++ ){
    //         cout<<" ";
    //     }
    //     for (int j =0 ; j <2*i+1 ; j++){
    //         cout << "*";
    //     }
    //     for(int j = 0 ; j <n-i-1 ; j++){
    //         cout << " ";
    //     }
    //     cout<<endl;
    // }    
// }

//pattern8
// int main(){
    //  for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j<i ; j++ ){
    //         cout<<" ";
    //     }
    //     for (int j =0 ; j <2*n - (2*i+1) ; j++){
    //         cout << "*";
    //     }
    //     for(int j = 0 ; j < i ; j++){
    //         cout << "";
    //     }
    //     cout<<endl;
    // }
  
// }

//pattern9
// int main(){
//      for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j<n-1-i ; j++ ){
//             cout<<" ";
//         }
//         for (int j =0 ; j <2*i+1 ; j++){
//             cout << "*";
//         }
//         for(int j = 0 ; j <n-i-1 ; j++){
//             cout << " ";
//         }
//         cout<<endl;
//     }  
//  for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j<i ; j++ ){
//             cout<<" ";
//         }
//         for (int j =0 ; j <2*n - (2*i+1) ; j++){
//             cout << "*";
//         }
//         for(int j = 0 ; j < i ; j++){
//             cout << "";
//         }
//         cout<<endl;
//     }
   
// }

//pattern10
// int main(){
//     for (int i = 1 ; i< 2*n-1 ; i++){
//         int stars = i;
//         if(i > n){
//                 stars= 2*n -i ;
//             }
//         for (int j = 1 ; j<=stars ; j++){
            
//             cout << "*";
//         }
//         cout << endl;
        
//     }
// }

//pattern11
// int main(){
//     for(int i = 0 ; i< n ; i++){
//         int start = 1;
//         if(i%2 == 0){
//             start = 1;
//         }else{
//             start = 0;
//         }
//         for(int j =0 ; j<=i ; j++){
//             cout << start;
//             start  = 1-start ;
            
//         }

//     cout <<endl;
        
//     }
// }

