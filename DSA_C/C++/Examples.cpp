//Print table from 1 to 10
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n," * ",i," = ",n*i;
    }
}

// //Print Fibonacci Series 
// #include<iostream>
// using namespace std;
// int main(){
//     int first_term=0, second_term=1, n, new_term;
//     cout<<"Enter the number of terms : ";
//     cin>>n;
//     cout<<"Fibonacci Series : ",first_term,second_term;
//     for(int i=2;i<=n;i++){
//         new_term=first_term+second_term;
//         first_term=second_term;
//         second_term=new_term;
//         cout<<new_term;
//     }
// }


// //Check whether a number is armstrong or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int a = n/100;
//     int b = (n%100)/10;
//     int c = n%10;

// }