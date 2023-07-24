#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"Enter Array Length"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting"<<endl;
    for(int i=1; i<=n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting"<<endl;
    for(int i=1; i<=n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    //hello 1234

    //hi i am sumu
    //salamn ahmed is my teammate
}


    
