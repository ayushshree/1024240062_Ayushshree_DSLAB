#include <iostream>
using namespace std;
int main()
{
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3]={{3,2,1},{6,5,4},{9,8,7}};
    int C[3][3]={0};
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                C[i][j]=C[i][j]+A[i][j]*B[k][j];
            }
        }
    }
    for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++) 
        {
            cout <<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}