#include<iostream>
using namespace std;

void longestarithematicsubarray(int arr[],int n,int& maxlength,int& maxsum,int*& longestsubarray){
    if(n<2){
        maxlength=n;
        maxsum=(n==1)?arr[0]:0;
        longestsubarray=new int[n];
        for (int i=0;i<n;++i){
            longestsubarray[i]=arr[i];
        }
        return;
    }

    maxlength=2;
    int currlength=2;
    int pd=arr[1]-arr[0];    //previous difference
    maxsum=arr[0]+arr[1];
    int currentsum=arr[0]+arr[1];
    int startindex=0;
    int currentstart=0;     //current start index for the current arithematic subarray

    for(int j=2;j<n;++j){
        if(arr[j]-arr[j-1]==pd){
            currlength++;
            currentsum += arr[j];
        }
        else{
            pd=arr[j]-arr[j-1];
            currlength=2;
            currentsum=arr[j-1]+arr[j];
            currentstart=j-1;
        }
        if(currlength>maxlength){
            maxlength=currlength;
            maxsum=currentsum;
            startindex=currentstart;
        }
    }

    longestsubarray=new int[maxlength];
    for(int i=0;i<maxlength;++i){
        longestsubarray[i]=arr[startindex+1];
    }
}

void longestarithematicdisplay(int* elements,int length){
    cout<<"Elements in the longest arithematic subarray: ";
    for(int i=0;i<length;++i){
        cout<<elements[i];
        if(i<length-1){
            cout<<", ";
        }
        else{
            cout<<".";
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cout<<"Enter the number of test cases to check: ";
    cin>>t;
    for(int testcase=1;testcase<=t;++testcase){
        int n;
        cout<<"Enter the number of elements in the array: ";
        cin>>n;
        int* arr=new int[n];
        cout<<"Enter the elements of array: "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int length;
        int* elements;
    }
}