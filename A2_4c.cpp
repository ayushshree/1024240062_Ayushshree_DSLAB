#include <iostream>
using namespace std;
int main()
{
    char a[]="Hello World";
    char b[100];
    int i,k=0;
    for (i=0;a[i]!='\0';i++)
    {
        if ((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
        {
            continue;
        }
        b[k]=a[i];
        k++;
    }
    cout<<b;
}