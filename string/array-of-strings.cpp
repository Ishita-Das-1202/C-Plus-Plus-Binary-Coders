#include <iostream>
using namespace std;
int main()
{
    string arr[3] = {"Binary", "Coders", "CPP"};

    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (string i : arr)
        cout << i << " ";

    cout << endl;

    for (auto i : arr)
        cout << i << " ";

    return 0;
}