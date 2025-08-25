#include <iostream>
using namespace std;
int main() 
{
    int numbers[] = {1, 2, 3, 5, 6, 7, 8};
    int total = 8;
    int count = total - 1;
    int result1;
    for (int i = 0; i < count; i++) 
    {
        if (numbers[i] != i + 1) 
        {
            result1 = i + 1;
            break;
        }
        if (i == count - 1) 
        {
            result1 = total;
        }
    }
    cout << "Linear found: " << result1 << endl;
    int low = 0;
    int high = count - 1;
    int result2 = total;
    while (low <= high) 
    {
        int middle = low + (high - low) / 2;
        if (numbers[middle] == middle + 1) 
        {
            low = middle + 1;
        } else 
        {
            result2 = middle + 1;
            high = middle - 1;
        }
    }
    if (low == count) 
    {
        result2 = total;
    }
    cout << "Binary found: " << result2 << endl;
    return 0;
}