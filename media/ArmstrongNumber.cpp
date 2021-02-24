#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
main(){
	char arr[10];
	cout<<"Enter a number : ";
	cin.getline(arr,9);
	int num=0,resnum=0;
	for(int i=0;i<strlen(arr);i++){
		num=(10*num)+(int)arr[i]-48;
	}
	switch(strlen(arr)){
		case 1:
			resnum=resnum+(((int)arr[0]-48)*((int)arr[0]-48)*((int)arr[0]-48));
			break;
		case 3:
			for(int i=0;i<strlen(arr);i++){
				resnum=resnum+(((int)arr[i]-48)*((int)arr[i]-48)*((int)arr[i]-48));
			}	
	}
	if(resnum==num)
		cout<<num<<" is an ArmStrong number";
	else
		cout<<num<<" is not an ArmStrong number";
	getch();
}
