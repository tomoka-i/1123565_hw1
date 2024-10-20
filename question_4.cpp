#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a even integer: ";
    cin >> n;
    cout << "Enter the elements: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int half = n / 2;
    for(int i = 0; i < half; i++){
        cout << arr[i] << " " << arr[half + i] << " ";
    }

    return 0;
}
