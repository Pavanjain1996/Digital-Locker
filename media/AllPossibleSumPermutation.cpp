#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int n,i;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"All permutation of sum of given number are :"<<endl;
	for(i=1;i<n;i++)
	cout<<i<<" + "<<n-i<<endl;
	getch();
}
