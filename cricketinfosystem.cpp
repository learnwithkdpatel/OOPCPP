#include<iostream>
#include<fstream>
#include<cstring>
void login();
void menu();

using namespace std;
class player
{

char name[50];
int matches;
public:
void entry()
{
    ofstream out("player.txt");
 cout<<"Enter Your name"<<endl;
 cin>>name;
 
 cout<<"Enter yur played matches"<<endl;
 cin>>matches;

 out<<name<<endl;
 out<<matches<<endl;
 out.close();
}

void display()
{
    ifstream in("player.txt");
    in.getline(name,50);
    in>>matches;

    cout<<" Player name is : "<<name<<endl;
    cout<<" Matches Played by Player  : "<<matches<<endl;

in.close();
}

};
class batsman:public player 
{
 int runs,overs,rate;

 public :
 void entry()
 {
    player::entry();
    fstream ap("player.txt",ios::app);

    cout<<"Enter Runs of Batsman"<<endl;
    cin>>runs;
    cout<<"Enter Over played by Batsman"<<endl;
    cin>>overs;
    cout<<"Enter Batsman Run Rate"<<endl;
    cin>>rate;

    ap<<runs<<endl;
    ap<<overs<<endl;
    ap<<rate<<endl;
    ap.close();
}
void display()
{
 player::display();
 ifstream in("player.txt");
 in>>runs;
 in>>overs;
 in>>rate;

cout<<"Runs of Batsman : "<<runs<<endl;
cout<<"overs of batsman : "<<overs<<endl;
cout<<"Run Rate of Batsman : "<<rate<<endl;
in.close();
}
};
class bowler:public player
{
    int over,wickets;
    public :
    void entry()
    {
        player::entry();
        fstream ap("player.txt",ios::app);
     
     
    cout<<"Enter Over of bowler"<<endl;
    cin>>over;
    cout<<"Enter wicket of bowler"<<endl;
    cin>>wickets;

    ap<<over<<endl;
    ap<<wickets<<endl;
    ap.close();
    }
    void display()
{
        player::display();
 ifstream in("player.txt");

 in>>over;
 in>>wickets;


cout<<"overs of bowler : "<<over<<endl;
cout<<"wicket of bowler : "<<wickets<<endl;
in.close();
}
};
class wicketkeeper:public player
{
    int catches,wickets;
    public :
    void entry()
    {
        player::entry();
    fstream ap("player.txt",ios::app);

    cout<<"Enter catches of wicketkeeper"<<endl;
    cin>>catches;
    cout<<"Enter wickets of wicketkeeper"<<endl;
    cin>>wickets;
    

    ap<<catches<<endl;
    ap<<wickets<<endl;
    
    ap.close();
    }
    void display()
    {
        player::display();
        
 ifstream in("player.txt");

 in>>catches;
 in>>wickets;


cout<<" catches of wicketkeeper: "<<catches<<endl;
cout<<" Enter wickets of wicketkeeper: "<<wickets<<endl;
in.close();
    }

};
class vicecaptain:public player
{
    int matches,won;
    public :
    void entry()
    {
       player::entry();
        fstream ap("player.txt",ios::app);
     
     
    cout<<"Enter Matches played by VC"<<endl;
    cin>>matches;
    cout<<"Enter Matches Won by VC"<<endl;
    cin>>won;

    ap<<matches<<endl;
    ap<<won<<endl;
    ap.close(); 
    }
    void display()
    {
        player::display();
        
 ifstream in("player.txt");

 in>>matches;
 in>>won;


cout<<" Matches played by VC: "<<matches<<endl;
cout<<"Matches Won by VC : "<<won<<endl;
in.close();
 }
};
class captain:public player
{
int matches,won;
    public :
    void entry()
    {
       player::entry();
        fstream ap("player.txt",ios::app);
     
     
    cout<<"Enter Matches played by Captain"<<endl;
    cin>>matches;
    cout<<"Enter Matches Won by Captain"<<endl;
    cin>>won;

    ap<<matches<<endl;
    ap<<won<<endl;
    ap.close(); 
    }
    void display()
    {
        player::display();
        
 ifstream in("player.txt");

 in>>matches;
 in>>won;


cout<<" Matches played by Captain: "<<matches<<endl;
cout<<"Matches Won by Captain : "<<won<<endl;
in.close();
    }
};

class team
{ 
    
    player p[15];
    public :
    
char t[20];
    void entry()
    { 
    cout<<"enter team name"<<endl;
    cin>>t;
        for (int i = 0; i < 15; i++)
        {
            p[i].entry();
        

        }
        
    }
    void display()
    {cout<<"Team "<<t<<endl;

        for (int i = 0; i < 15; i++)
        {
            p[i].display();
        }
        
    }

};
class match
{
    


    team t1,t2;
    public :
    
    void entry()
    {
        t1.entry();
        t2.entry();
    }
    void display()
    {
        t1.display();
        t2.display();
    }

};
class series
{
    match m[10];
    public :
    void entry()
    {
        for (int i = 0; i < 10; i++)
        {
            m[i].entry();
        }
        
    }
    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            m[i].display();
        }
        
    }
};
int main()
{
    cout<<"***** Welcome To Cricket Management System*******" <<endl;
    login();
}
void login()
{
    ofstream out("login.txt");
    
    char id[50];
    int pin;
    cout<<"Enter Your Username"<<endl;
    cin>>id;

    cout<<"Enter password"<<endl;
    cin>>pin;

    out<<id<<endl;
    out<<pin<<endl;

    out.close();
    menu();

}
void menu()
{
    batsman b[6];
    bowler bl[5];
    wicketkeeper w[2];
    captain c;
    vicecaptain vc;
    team t[10];
    match m;
    series s;
    
    

    
    cout<<"1. player"<<endl;
    cout<<"2.team"<<endl;
    cout<<"3. matches"<<endl;
    cout<<"4. series"<<endl;

    int i,j;
    cin>>i;

    switch(i)
    {
        do
        {
            case 1 : cout<<"Batsman"<<endl;
        for (int i = 0; i < 6; i++)
        {
            b[i].entry();
            b[i].display();
        }
        cout<<"bowler"<<endl;
        for (int i = 0; i < 5; i++)
        {
            bl[i].entry();
            bl[i].display();
        }
        cout<<"Wicketkeeper"<<endl;
        for (int i = 0; i < 2; i++)
        {
            w[i].entry();
             w[i].display();


        }
        cout<<"Captain"<<endl;
        c.entry();
        c.display();

        cout<<"vice captain"<<endl;
        vc.entry();
        vc.display();
        break;

        case 2:
        for (int i = 0; i < 10; i++)
        {
            
            t[i].entry();
            t[i].display();
            
        }
        break;

        case 3 : cout<<"enter name of match team 1"<<endl;
                 char y1[20],y2[20];
                 cin>>y1;
                 cout<<"enter name of match team 2"<<endl;
                 cin>>y2;
                 m.entry();
                 m.display();

                 break;

        case 4 : cout<<"cricket series"<<endl;
                  s.entry();
                  s.display();

        default : cout<<"invaild operation"<<endl;

        cout<<"If you want to explore more press 1 "<<endl<<"if no press 0"<<endl;
        cin>>j;
                        


       //here e over our project 
                  
       }while(j!=0);
    }  

}
