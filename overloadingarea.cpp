#include <iostream>

using namespace std;

float area(int radius) 
{ //circle
  return 3.14*radius*radius; 
} 

float area(int height, int base) 
{ //triangle
  return 0.5*height*base; 
}
 
float area(int l, int w, int h) 
{ //box
  return 2*(l*w + l*h + w*h); 
} 

int main()
{ 
  cout << endl <<"area of circle    = " << area(10); 
  cout << endl <<"area of triangle  = " << area(10,10); 
  cout << endl <<"area of box       = " << area(10,10,10); 
  return 0; 
} 

