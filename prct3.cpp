#include<iostream>
#include<cstring>
#include<exception>
using namespace std;
class publication
{
  	protected:
	string title;
	float price;
	  
	public:
  
		publication(string t,float p)
	  	{
	  		cout<<"\n publiction class parameterized called";
		  	title=t;
		  	price=p;
		  	
	    }
};

class books:public publication
{
	int pages;
	public:
		books(string t="No title",float p= 0.0, int pag = 0):publication(t,p)
		{
			pages=pag;
		}
		void getb()
		{
			cout<<"\n ** Datails of the book ** :"<<endl;
			cout<<"Enter the title of the book :"<<endl;
			cin>>title;
			//cin.ignore(1,'\n');
			//getline(cin,title);
			cout<<"Enter the price of the book :"<<endl;
			cin>>price;
			cout<<"Enter the pages of the book :"<<endl;
			cin>>pages;
			try
			{
				if(pages > 5 && pages <15)
				{
					if(price >100 && price < 2000)
					{
						displayb();
					}
				}
				else throw(pages);
			}
			catch(int i)
			{
				cout<<"Caught exception in function of book"<<endl;
				cout<<"You entered an invalid data"<<endl;
				title = " ";
				price = 0.0;
				pages = 0;
				displayb();
				throw;
			}
		}
		void displayb()
		{
			cout<<"The book you entered is :"<<endl<<endl;
			cout<<"The entered title is :"<<title<<endl;
			cout<<"The entered price is :"<<price<<endl;
			cout<<"The entered pages are :"<<pages<<endl;
		}
	};
	
main()
{
	books b;
	int choice;
	cout<<"Do want to buy a book(Press 1) :"<<flush;
	cin>>choice;
	switch(choice)
	{
		case 1: try
		{
			b.getb();
		}
		catch(int i)
		{
			cout<<"Caught exception"<<endl;
		}
		break;
		default:cout<<"Entered bad choice!! Try again!!"<<endl;
	}
	return 0;
}
