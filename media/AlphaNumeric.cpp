#include<iostream>
#include<conio.h>
using namespace std;
main(){
	char arr[20];
	int t1=0,t2=0,i=0;
	cout<<"\n\tEnter a String : ";
	cin.getline(arr,19);
	while(arr[i]!='\0'){
		if(((int)arr[i]>=65 && (int)arr[i]<=90) || ((int)arr[i]>=97 && (int)arr[i]<=122)){
			t1=1;
		}
		if((int)arr[i]>=48 && (int)arr[i]<=57){
			t2=1;
		}
		if(t1==1 && t2==1){
			cout<<"\n\n\tString is AlphaNumeric";
			break;
		}
		i++;
	}
	if(t1==0 || t2==0)
		cout<<"\n\n\tString is not AlphaNumeric";
	getch();
}
