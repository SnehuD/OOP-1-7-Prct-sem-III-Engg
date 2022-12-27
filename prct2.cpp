#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
	int roll_no;
	string name;
	string  add;
	static int c;
	public:
	 	student();
		//default constructor
	 	static int getcount(); 
		//static function
	 	void getdata();
	 	void show();
	 	student (student *s); 
		// copy constructor
	 	student(int roll_no,string name , string add); 
		// parameterize  constructor
	 	~student();
		//destructor	 
};
int student::c=0; 
// static varibale
student::~student()
{
   	cout<<"\n destructor called";
    c++;	
}
student::student(student *s) 
//copy constructor 
{
   	cout<<" \n copy constructor called \n ";
   	this->roll_no=s->roll_no;
   	this->name=s->name;
   	this->add=s->add;
   	c++; 	 
}  
void student::getdata()  
{
   	cout<<"\n ***student***";
   	cout<<"\n enter Roll_no \n";
   	ws(cin);    //whitespace
   	cin>>roll_no;
   	cout<<"\n enter the Name \n ";
   	ws(cin);
   	cin>>name;
   	cout<<"\n enter the Address \n";
   	cin>>add;
}
void student::show()
{
    cout<<"\n Roll_no: "<<roll_no<<endl;
	cout<<"\n Name: "<<name<<endl;
	cout<<"\n Address :  "<<add<<endl;	
}   	 
student::student(int roll_no, string name, string add) 
{
 	cout<<"\n using parameterized constructor";
 	this->roll_no=roll_no;
 	this->name=name;
 	this->add=add;
 	c++;
}	
student::student()
{
	cout<<"using defalut constructor";
	roll_no=0;
	name=" ";
	add=" ";	
	c++;
}	
int student::getcount()
{
	return c;
}

main()
{	
	int num;
	student *s1  =new student();
	// called default constructor 

	delete s1;
	student *s2 =new student(1,"gouri","Pimpri");
	s2->show();
	
	student *s3 = new student(s2);  // copy
	cout<<"object pointer s3 is created using copy constructor";
	s3->show();

	cout<<"\n How many Students Records to be entered now?";
	cin>>num;
	student sx[num];
	for(int i=0;i<num;i++)
	{
		sx[i].getdata();
	}
	for(int i=0;i<num;i++)
	{
		sx[i].show();
	}

	cout<<"Number of constructor calls and total number of objects:"<<student::getcount()<<endl;
	//static variable called
}

