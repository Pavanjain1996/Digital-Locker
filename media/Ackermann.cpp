#include<iostream>
using namespace std;
int A(int m,int n){
	if(m<0 || n<0)
		return 0;
	else if(m==0 && n>=0)
		return n+1;
	else if(m>0 && n==0)
		return A(m-1,1);
	else
		return A(m-1,A(m,n-1));
}
main(){
	int m,n;
	cout<<"Enter value of m and n : ";
	cin>>m>>n;
	cout<<endl<<"This process can take few minutes.....";
	cout<<endl<<A(m,n);
}
