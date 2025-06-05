#include <iostream>
using namespace std;

void increment(int* ptr) {
    (*ptr)++; // Modifies the original variable
}

int main() {
    int x = 10; // Local variable
    int* ptr = &x; // Pointer to x (not global)
    int** ptrptr = &ptr;
	increment(ptr); // Function prototype
    cout << x; // Output: 11
	cout << **ptrptr; // Output: 11
    return 0;
}