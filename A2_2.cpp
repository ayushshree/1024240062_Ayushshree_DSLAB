#include <iostream>
using namespace std;
int main()
{
    int A[7]={64,34,25,12,22,11,90};
    int n=7,i,j;
    bool flag;
    for(i=1;i<7;i++)
    {
        flag=true;
        for(j=0;j<=n-i-1;j++)
        {
            if(A[j]<A[j-1])
            {
                A[j]=A[j]+A[j-1];
                A[j-1]=A[j]-A[j-1];
                A[j]=A[j]-A[j-1];
                flag=false;
            }
        }
        if (flag==true)
        {
            break;
        }
    }
    for(i=0;i<7;i++)
    {
        cout<<A[i]<<"\n";
    }
}