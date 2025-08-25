#include <iostream>
using namespace std;
int main()
{
    int A[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter A["<<i<<"]["<<j<<"] element: ";
            cin>>A[i][j];
        }
    }
    cout<<"the transpose of this matrix is: \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}