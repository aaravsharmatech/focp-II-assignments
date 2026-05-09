#include <iostream>
using namespace std;
int main() 
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " number: ";
        cin >> numbers[i];
    }
    int max, second_max;
    if (numbers[0] > numbers[1]) 
    {
        max = numbers[0];
        second_max = numbers[1];
    } 
    else 
    {
        max = numbers[1];
        second_max = numbers[0];
    }
    for (int i = 2; i < 5; i++) 
    {
        if (numbers[i] > max) 
        {
            second_max = max;
            max = numbers[i];
        } 
        else if (numbers[i] > second_max && numbers[i] != max) 
        {
            second_max = numbers[i];
        }
    }
    cout << "Maximum number is: " << max << endl;
    if (max == second_max)
        cout << "No distinct second highest number (all values equal)." << endl;
    else
        cout << "Second highest number is: " << second_max << endl;
    return 0;
}