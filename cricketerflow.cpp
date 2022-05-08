#include <iostream>

using namespace std;

class player {
		//class begins

	private: //only accessible within class

		char name[50];
		int runs;
		int wickets;
		int overs;
		char ch;

	public:  //Accessible outside class

		entry() {
			cout<<endl<<endl<<"In Entry Function ************";
			cout<<endl<<"Enter Name: ";
			cin>>name;
			cout<<endl<< "Entry for the Cricketer Name: " << name << endl<<endl<< "Please Enter Runs, Overs, Wickets, Etc"<<endl;
			cin>>ch;
		} // entry () ends

		int runrate() {
			cout<<endl<<endl<<"In Runrate Function ************";
			cout<<endl<<endl<< "In the runrate function. This function calculates and returns runrate"<<endl;
			cin>>ch;
		}

		float wicketsperover() {
			cout<<endl<<endl<<"In wicketsperover Function ************";
			cout<<endl<<endl<< "In the wicketsperover function. This function calculates and returns wicketsperover"<<endl;
			cin>>ch;
		}

		display() {
			cout <<endl<<endl<<"In Display Function";
			cout << "***********************" << endl;
			cout << "Details of The Player" << endl;
			cout<<endl<< "Name          : " << name;
			cout<<endl<< "Display of Runs, Wickets, Overs ";
			cout << "Have to Call runrate() function to calculate";
			runrate();
			cout<<endl<< "Have to Call wicketsperover () to calculate";
			wicketsperover();
		}
};//class ends


int main() {
	//char ch;
	player sachin, ganguli, yuvraj;
	sachin.entry();
	sachin.display();
//	cin>>ch;
	ganguli.entry();
	ganguli.display();
//	cin>>ch;
	yuvraj.entry();
	yuvraj.display();
}

