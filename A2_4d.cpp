#include <iostream>
using namespace std;
int main()
{
    char s1[]="Hello";
    char s2[]="World";
    char s3[]="Good";
    char s4[]="Morning";
    char c1=s1[0];
    char c2=s2[0];
    char c3=s3[0];
    char c4=s4[0];
    char *strings[] = {s1, s2, s3, s4};
    int n = 4;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            int k = 0;
            while (strings[j][k] != '\0' && strings[j+1][k] != '\0') 
            {
                if (strings[j][k] > strings[j+1][k]) 
                {
                    char *temp = strings[j];
                    strings[j] = strings[j+1];
                    strings[j+1] = temp;
                    break;
                }
                else if (strings[j][k] < strings[j+1][k]) 
                {
                    break;
                }
                k++;
            }
        }
    }
    cout << "Sorted strings:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << strings[i] << endl;
    }
    return 0;
}
