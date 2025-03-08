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

    for(int i=0;i<n-1;i++){              //for each pass to the next eleent of the array
        for(int j=0;j<n-i-1;j++){       //for each comparison in the pass
            if(arr[j]>arr[j+1]){       //swap if the current element is greater than the next element
                int temp=arr[j];       //store the first element in a temporary memory
                arr[j]=arr[j+1];      // swap the smaller number at the place of larger number
                arr[j+1]=temp;        //at the empty place of smaller number insert the number that was stored in the temporary memory
            }
        }
    }


    cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

    
