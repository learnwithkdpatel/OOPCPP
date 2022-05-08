#include <iostream>

using namespace std;

void display(int i) 
{ 
	cout << "In int Function" << endl;
   	cout << "Integer number: " << i << endl<< endl; 
} 

void display(float f) 
{ 
	cout << "In float Function" << endl;	
   	cout << "Float number: " << f << endl<< endl; 
} 

void display(int i, float f) 
{ 
   cout << "In int, float Function" << endl;
   cout << "Integer number: " << i; 
   cout << " and float number:" << f<< endl<< endl; 
} 

int main() 
{ 
   int i = 10; float f = 15.5; 
   display(i); 
   display(f); 
   display(i,f); 
   return 0; 
}

