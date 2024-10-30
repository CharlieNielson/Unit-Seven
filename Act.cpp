#include <iostream>
using namespace std;


int main() {
    /*int num = 7;
    int *ptr = &num;

    double speed = 55.7;
    double *dPtr = &speed;

    cout << "Num: " << num << endl;
    cout << "Address: " << &num << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereferenced: " << *ptr << endl;

    *ptr = 10;
    cout << "Thing: " << num << endl;

    cout << "Speed: " << *dPtr << endl;*/

    /*int *values;
    int size;
    cout << "Enter the number of values greater than 3: ";
    cin >> size;
    values = new int[size];
    for(int i = 0; i < size; i++){
        values [i] = i;
    }

    cout << values << endl;
    cout << *values << endl; 	
    cout << values[2] << endl;
   	cout << *(values+2) << endl;
    delete [] values;*/

    auto values;
    values = new int[5];

    cout << *ptr;
    

    return 0;
}
