#include<iostream>
#include<algorithm> //for sort function

using namespace std;


int binarySearch(int arr[],int n,int key){  //binary search function
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;   //equation to find the mid value of the array

        if(arr[mid]==key){
        return mid;}

        if(arr[mid]<key){
        left=mid+1;}    //to search the value in the right half part of the array

        else{
        right=mid-1;}   //to search the value in the left halg part of the array
    }
    return -1;  //if the value is not found
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

    sort(arr,arr+n);

    cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;

    int result=binarySearch(arr,n,key);

    if(result!= -1){
        cout<<"Element found at index number: "<<result<<endl;
    }
    else{
        cout<<"Element not found in the array!!"<<endl;
    }

    return 0;
    
}
