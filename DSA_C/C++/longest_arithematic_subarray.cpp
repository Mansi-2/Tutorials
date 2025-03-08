#include<iostream>
using namespace std;

void longestarithematicsubarray(int n,int *arr[]){
int ans = 2;
    int pd = arr[1]-arr[0];
    int j=2;
    int current= 2;

    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            current++;
        }
        else{
            pd = arr[j]-arr[j-1];
            current= 2;
        }
        ans=max(ans,current);
        j++;
    }

}
void display(int ans){
    cout<<ans;
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

    auto result=longestarithematicsubarray(arr[n]);


   
}


