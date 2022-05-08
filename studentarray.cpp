#include <iostream>

using namespace std;

class student 
{ //class begins
  
  private: //only accessible within class

	char name[50];
	int maths;
	int science;
	int english; 

  public:  //Accessible outside class

	entry() 
	{
		cout<<"enter name: ";
		cin>>name;
		cout<<endl<<"enter Maths Mark";
		cin>>maths;
		cout<<endl<<"enter Science Mark";
		cin>> science;
		cout<<endl<< "enter English Mark";
		cin>> english;
	} // entry () ends
	
	int total()  
	{
			return (maths + science + english );
	}	 

	float percentage() 
	{
		return (maths + science + english ) / 3; 
	}

	display() 
	{
		cout << "Marksheet of The Student" << endl;
		cout<<endl<< "Name      : " << name;
		cout<<endl<< "Maths     : "<< maths;
		cout<<endl<< "Science   : "<< science;
		cout<<endl<< "English   : "<< english;
		cout<<endl<< "Total     : "<<total();
		cout<<endl<< "Percentage: "<<percentage(); 
	} 
};//class ends


int main()
{
	student ssc[4];
	
	for (int i=0; i<=3;i++)
	{
		cout << endl << "Enter Data for Student No: "<<i;
		ssc[i].entry();
	}

	for (int i=0; i<=3;i++)
	{
		cout << endl << "Data for Student No: "<<i;
		ssc[i].display();
	}
	
	
}

