//PROBLEM : Given an array a[] of size n. Output sum of each subarray of the given array.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number of elements to be inserted in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<"Sum of subarray starting from "<<i<<" index till "<<j<<" index is: "<<sum<<endl;
        }
    }

    return 0;
}