#include<iostream>
using namespace std;	
template<class T>
void selection(T number[],int count)
{
	T temp;
	int i,j;
	for(int i=0;i<count;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	cout<<"\n Sorted elements" ;
	for(int i=0;i<count;i++)
	cout<<"\n"<<number[i];
}
main()
{
	int number[4]={5,7,3,4};
	float num[4]={5.2,3.6,2.9,1.8};
	int count=4;
	cout<<"\n Sorting the Integer Array {5,7,3,4}";
	selection(number,count);
	cout<<"\n Sorting the Float Array {5.2,3.6,2.9,1.8}";
	selection(num,count);
}
	

