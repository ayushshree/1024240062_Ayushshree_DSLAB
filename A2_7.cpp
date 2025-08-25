#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;    
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    int inversionCount=0;
    for (int i=0;i<n;i++) 
    {
        for (int j=i+1;j<n;j++) 
        {
            if(arr[i]>arr[j]) 
            {
                inversionCount++;
            }
        }
    }
    cout<<"Number of inversions: "<<inversionCount<<endl;
    return 0;
}