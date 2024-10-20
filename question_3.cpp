#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of the elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter a positive integer: ";
    cin >> k;

    for(int i = 0; i < n - k + 1; i++){
        bool isexist = false;
        for(int j = i; j < i + k; j++){
            if(arr[j] < 0){
                cout << arr[j] << " ";
                isexist = true;
                break;
            }
        }
        if(!isexist){
            cout << 0 << " ";
        }
    }

    return 0;
}
