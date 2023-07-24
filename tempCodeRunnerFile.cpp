#include<iostream>
using namespace std;
int main()
{
    

    int n,target,arr[100];
    cout<<"Enter the size of array:\n";
    cin>>n;
    cout<<"Enter the "<<n<<" element of array:\n";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the largeted element you wanna find:\n";
    cin>>target;
    bool found=false;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==target){
            found=true;
            break;
        }
    }
    if(found==true){
        cout<<"Successfully Searching!\n";
    }
    else {
        n++;
        arr[n]=target;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
}
