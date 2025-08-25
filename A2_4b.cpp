#include <iostream>
using namespace std;
int main()
{
    char abc[]="Hello World";
    int length=0;
    while(abc[length]!='\0')
    {
        length++;
    }
    int start=0;
    int end=length-1;
    while(start<end)
    {
        char temp=abc[start];
        abc[start]=abc[end];
        abc[end]=temp;
        start++;
        end--;
    }
    cout<<abc;
}