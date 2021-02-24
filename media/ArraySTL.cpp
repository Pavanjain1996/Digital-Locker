#include<iostream>
#include<array>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	array <int,5>arr_data1={11,22,33,44,55};
	array <int,5>arr_data2={10,20,30,40,50};
	cout<<"The value is "<<arr_data1.at(2)<<endl;
	cout<<"The value is "<<arr_data2.at(4)<<endl;
	cout<<"The value is "<<arr_data2[1]<<endl;
	cout<<"The value is "<<arr_data2.front()<<endl;
	cout<<"The value is "<<arr_data1.back()<<endl;
	arr_data1.swap(arr_data2);
	int i;
	for(i=0;i<5;i++)
	cout<<arr_data1[i]<<" ";
	cout<<endl;
	for(i=0;i<5;i++)
	cout<<arr_data2[i]<<" ";
	cout<<endl<<"The size of array 1 is "<<arr_data1.size();
	cout<<endl<<"The size of array 2 is "<<arr_data2.max_size()<<endl;
	cout<<arr_data1.begin()<<endl;
	cout<<arr_data2.end();
	getch();
}
