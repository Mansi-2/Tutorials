#include<iostream>

using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter the number of elemnts to be inserted in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;

    int result=linearSearch(arr,n,key);

    if(result!= -1){
        cout<<"Element found at index number: "<<result<<endl;
    }
    else{
        cout<<"Element not found in the array!!"<<endl;
    }

    return 0;
    
}