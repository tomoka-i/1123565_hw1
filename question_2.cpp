#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of the elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;


    for(int i = 0; i < n; i++) {
        int curr = arr[i];
        if(i == n - 1){
            cout << curr << " -> " << -1 << endl;
        }
        else {
            for(int j = i + 1; j < n; j++){
                if(curr < arr[j]){
                    cout << arr[i] << " -> " << arr[j] << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
