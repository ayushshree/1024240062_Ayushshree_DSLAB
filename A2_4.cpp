#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0;
    char s1[100],s2[100];
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    while (s1[i]!='\0')
    {
        i++;
    }
    while (s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    cout<<s1;
    return 0;
}