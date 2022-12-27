#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream outf;
	outf.open("Student_Marklist");
	outf<<"\n**LIST OF RANKER**";
	outf<<"\n 1st Snehal Dahake :- 98%";
	outf<<"\n 2nd Prasad Dhobale :- 99%";
	outf<<"\n 3rd Harshada Patil :- 86%";
	outf.close();
	char line[80];
	cout<<"read and print that list";
	ifstream inf;
	 	inf.open("Student_Marklist");
	while(inf)
	{
		inf.getline(line,80);
	 	cout<<"\n"<<line;
	}
	inf.close();
}

