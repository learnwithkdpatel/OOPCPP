#include <iostream> 

using namespace std; 

int add(int x=100, int y=200, int z=300) 
{ 
   return (x+y+z); 
} 

int main() 
{ 
   cout << "Sum is : " << add() << endl; 
   cout << "Sum is : " << add(10) << endl; 
   cout << "Sum is : " << add(10,20) << endl; 
   cout << "Sum is : " << add(10,20,30) << endl; 
   return 0; 
} 

