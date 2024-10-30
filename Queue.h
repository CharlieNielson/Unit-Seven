#include <iostream>
using namespace std;

//Constructs an empty queue
Queue();  

//Destructor to free up memory
~Queue(); 

//Returns true if the stack is empty
bool isEmpty(); 

//Adds an item to the end of the queue
void add(string data); 

// Removes the item at the front of the queue
void remove(); 

// Returns the value in the front of the queue (without removing)
string peek(); 

//Overloads the extraction operator to display the queue
ostream &operator << (ostream &out, const Queue &s); 
