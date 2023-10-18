//Implementing a While Loop to scan and print a array

#include <iostream>
using namespace std;
int main()
{
    int x[5];
    int i = 1;
    // we enter 5 numbers & Store it in the array
    cout << "enter 5 elements: ";
    while (i <= 5)
    {
        cin >> x[1];
        i++;
    }
    for (i = 1; i <= 5; i++)
    // we display the elements in the array
    {
        cout << "Element " << i << " is: " << x[1] << endl;
    }
    return 0;
}