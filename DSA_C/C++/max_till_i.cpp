//PROBLEM : Given an array a[] of size n . For every i from 0 to n-1, output max a[0],a[1],...,a[i].

#include<iostream>
#include<climits>
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

    int mx=INT_MIN;         
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);        // it compares the value of mx and arr[i] to find which is maximum and updates mx after each iteration.
        cout<<"Maximum till "<<i<<" iteration is: "<<mx<<endl;
    }
    return 0;
    }