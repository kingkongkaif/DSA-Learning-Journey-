#include <iostream>     
using namespace std; 
 
void doSomething(int arr[], int n) {
    arr[0] += 100;   // Modifies the ORIGINAL array
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

 doSomething(arr, n);

    cout << "Value inside main: " << arr[0] << endl;
    return 0;
}