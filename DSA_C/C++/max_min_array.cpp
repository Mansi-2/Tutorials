//Find the manimum and minimum number using array

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

    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    
    for(int i=0;i<n;i++){
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
    }

    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxNo){
    //         maxNo=arr[i];
    //     }

    //     if(arr[i]<minNo){
    //         minNo=arr[i];
    //     }
    // }

    cout<<"Maximum number in the array is: ";
    cout<<maxNo<<endl;
    cout<<"Minimum number in the array is: ";
    cout<<minNo<<endl;
    return 0;
}