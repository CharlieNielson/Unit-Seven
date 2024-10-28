#include <iostream>
using namespace std;


int main() {

    int num = 7;
    int *ptr = &num;

    double speed = 55.7;
    double *dPtr = &speed;

    cout << "Num: " << num << endl;
    cout << "Address: " << &num << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereferenced: " << *ptr << endl;

    *ptr = 10;
    cout << "Thing: " << num << endl;

    cout << "Speed: " << *dPtr << endl;

    return 0;
}
