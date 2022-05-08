#include <iostream>

using namespace std;

class candidate 
{ //class begins
  
  private: //only accessible within class

	char name[50];
	int maths;
	int science;
	int english;
	int total;
	int meritnumber; 

  public:  //Accessible outside class

	registration() 
	{
	cout <<endl<<endl<< "Enter Registration Details of The Candidate:" << endl;
		cout<<endl<<"enter name: ";
		cin>>name;
		cout<<endl<<"Enter Maths Mark: ";
		cin>>maths;
		cout<<endl<<"Enter Science Mark: ";
		cin>> science;
		cout<<endl<< "Enter English Mark: ";
		cin>> english;
		dototal();
	} // registration () ends
	
	void dototal()  
	{
			total = (maths + science + english );
	}	 

	int gettotal()
	{
		return total;
		}	
	setmerit (int m)
	{
		meritnumber =m;
	}
	display() 
	{
		cout <<endl<<endl<< "Registration Details of The Candidate:" << endl;
		cout<<endl<< "Name      : " << name;
		cout<<endl<< "Maths     : "<< maths;
		cout<<endl<< "Science   : "<< science;
		cout<<endl<< "English   : "<< english;
		cout<<endl<< "Total     : "<<total;
	
	} 
	displaytotal() 
	{
		cout<< "Name : " << name << "  Total Marks: "<<total;
	
	} 

};//class ends


int main()
{
	candidate c[4];
		
	//entry of four candiates
	for (int i=0; i<=3;i++)
	{
		cout << endl << "Registration of Roll Number "<<i;
		c[i].registration();
	}
	
	for (int i=0; i<=2; i++)
	{
		for (int j=i+1; j<=3; j++)
		{
			if(c[i].gettotal() < c[j].gettotal())
			{ 
				candidate temp;
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}

	}
	
	//merit list
	for (int i=0; i<=3;i++)
	{
		cout << endl << "Merit Number "<<i << "\t"; 
		c[i].displaytotal();
		c[i].setmerit(i);
	}
	
	
	
}

