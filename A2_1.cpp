#include <iostream>
using namespace std;
int main()
{
    int A[10]={1,2,4,5,7,8,10,11,13};
    int i,j,n=10,search;
    int l=0,r=n-1,m,k=0;
    cout<<"Enter number to search: ";
    cin>>search;
    bool found=false;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(A[m]==search)
        {
            cout<<"Element found at index"<<m<<"\n";
            found=true;
            break;
        }
        else if(A[m]<search)
        {
            l=m+1;
        }
        else
        {
            r=m+1;
        }
    }
    if (found==false)
    {
        cout<<"Not found\n";
    }
    return 0;
}