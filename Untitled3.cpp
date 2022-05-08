#include <iostream>

using namespace std;

class player {
		//class begins

	private: //only accessible within class

		char name[50];
		int runs;
		int wickets;
		int overs;

	public:  //Accessible outside class

		entry() {
			cout<<"Enter Name: ";
			cin>>name;
			cout<< "Entry for the Cricketer" << name << endl<< "Please Enter Runs, Overs, Wickets, Etc";
		} // entry () ends

		int runrate() {
			cout<< "In the runrate function. This function calculates and returns runrate"<<endl;
		}

		float wicketsperover() {
			cout<< "In the wicketsperover function. This function calculates and returns wicketsperover"<<endl;
		}

		display() {
			cout << "***********************" << endl;
			cout << "Marksheet of The Player" << endl;
			cout<<endl<< "Name          : " << name;
			cout<<endl<< "Display of Runs, Wickets, Overs ";
			cout << "Have to Call runrate() function to calculate";
			runrate();
			cout<<endl<< "Have to Call wicketsperover () to calculate";
			wicketsperover();
		}
};//class ends


int main() {
	char ch;
	player sachin, ganguli, yuvraj;
	sachin.entry();
	sachin.display();
	cin>>ch;
	ganguli.entry();
	ganguli.display();
	cin>>ch;
	yuvraj.entry();
	yuvraj.display();
}

