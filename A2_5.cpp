#include <iostream>
using namespace std;
int main()
{
    int i,j,r,d;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"1. Diagonal matrix\n";
    cout<<"2. ri-Diagonal matrix\n";
    cout<<"3. Lower triangular matrix\n";
    cout<<"4. Upper triangular matrix\n";
    cout<<"5. Symmetric matrix\n";
    cout<<"Enter your choice: ";
    cin>>d;
    if (d==1)
    {
        cout<<"Space needed for "<<r<<" elements\n";
    }
    else if (d==2)
    {
        cout<<"Space needed for "<<3*r-2<<" elements\n";
    }
    else if (d==3)
    {
        cout<<"Space needed for "<<r*(r-1)<<" elements\n";
    }
    else if (d==4)
    {
        cout<<"Space needed for "<<r*(r-1)<<" elements\n";
    }
    else if (d==5)
    {
        cout<<"Space needed for "<<r*r<<" elements\n";
    }
    else
    {
        cout<<"Wrong choice\n";
    }
    return 0;
}