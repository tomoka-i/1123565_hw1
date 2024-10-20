#include <iostream>

using namespace std;

int recursion(int n, int sta[]){
    if(n == 0){
        cout << sta[0];
        return 0;
    }
    cout << sta[n] << " ";
    recursion(n - 1, sta);
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    int sta[n];
    for(int i = 0; i < n; i++){
        cin >> sta[i];
    }

    recursion(n - 1, sta);

    return 0;
}
