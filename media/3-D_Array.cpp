#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	system("cls");
	int arr[3][3][3];
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				cout<<i+1<<"."<<j+1<<"."<<k+1<<"."<<" Enter Number"<<endl<<"------ ";
				cin>>arr[i][j][k];
			}
		}
	}
	for(i=0;i<3;i++){
		cout<<"The numbers are :"<<endl;
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				cout<<arr[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	cout<<"Which stack do you want to see ";
	cin>>j;
	cout<<"\nThe top stack is\n";
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			cout<<arr[i][j][k]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nThe cross stack is\n";
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			cout<<arr[i][k][k]<<" ";
		}
		cout<<endl;
	}
	getch();
}
