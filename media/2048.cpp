#include<iostream>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;
int arr[4][4],score;
bool gameOver;
enum Direction{Stop=0,Up,Down,Left,Right};
Direction dir;
void DrawLayout1(){
	cout<<"\n\n\n";
	cout<<"         #-#-#-#-#-#-#-  The Game Begins  -#-#-#-#-#-#-#\n\n";
	Sleep(400);
	cout<<"         *********    *********    *      *    *********\n";
	Sleep(400);
	cout<<"                 *    *       *    *      *    *       *\n";
	Sleep(400);
	cout<<"                 *    *       *    *      *    *       *\n";
	Sleep(400);
	cout<<"                 *    *       *    *      *    *       *\n";
	Sleep(400);
	cout<<"         *********    *       *    *********   *********\n";
	Sleep(400);
	cout<<"         *            *       *           *    *       *\n";
	Sleep(400);
	cout<<"         *            *       *           *    *       *\n";
	Sleep(400);
	cout<<"         *            *       *           *    *       *\n";
	Sleep(400);
	cout<<"         *********    *********           *    *********\n";
	Sleep(400);
	cout<<"\n         #-#-#-#-#- Press any key to continue -#-#-#-#-#\n";
	getch();
}
void DrawLayout2(){
	cout<<"\n\n\n";
	cout<<"	  *       *    *********    *       *        *           *    ******** **       *\n";
	Sleep(400);
	cout<<"	   *     *     *       *    *       *        *           *    *      * *  *     *\n";
	Sleep(400);
	cout<<"	    *   *      *       *    *       *        *           *    *      * *    *   *\n";
	Sleep(400);
	cout<<"	     * *       *       *    *       *        *           *    *      * *    *   *\n";
	Sleep(400);
	cout<<"	      *        *       *    *       *        *     *     *    *      * *     *  *\n";
	Sleep(400);
	cout<<"	      *        *       *    *       *        *   *   *   *    *      * *     *  *\n";
	Sleep(400);
	cout<<"	      *        *       *    *       *        * *       * *    *      * *      * *\n";
	Sleep(400);
	cout<<"	      *        *********    *********        *           *    ******** *       **\n";
}
int Maximum(int arr[4][4]){
	int i,j,max=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(arr[i][j]>max)
				max=arr[i][j];
		}
	}
	return(max);
}
void ranOut(int arr[4][4]){
	int i=rand()%4,j=rand()%4;
	bool print=false;
	while(!print){
		if(arr[i][j]==0){
			arr[i][j]=2;
			print=true;
		}
		else{
			i=rand()%4;
			j=rand()%4;
		}
	}
}
void Setup(){
	gameOver=false;
	dir=Stop;
	score=0;
	int a=rand()%4,b=rand()%4,c=rand()%4,d=rand()%4;
	arr[a][b]=2;
	arr[c][d]=2;
}
void Draw(int arr[4][4]){
	int i,j;
	cout<<"\n\n\n\n";
	for(i=0;i<4;i++){
		cout<<"\t";
		for(j=0;j<4;j++){
			cout<<arr[i][j]<<"    ";
		}
		cout<<"\n\n\n";
	}
	score=Maximum(arr);
	cout<<"\n\n\tScore = "<<score;
}
void Input(){
	if(_kbhit()){
		switch(_getch()){
			case 'a':
				dir=Left;
				break;
			case 'd':
				dir=Right;
				break;
			case 'w':
				dir=Up;
				break;
			case 's':
				dir=Down;
				break;
		}
	}
}
void LEFT(int arr[4][4]){
	int i,j;
	for(j=0;j<4;j++){
		int a[4]={0,0,0,0},k=0;
		for(i=0;i<4;i++){
			if(arr[j][i]!=0){
				a[k]=arr[j][i];
				k++;
			}
		}
		for(i=0;i<4;i++)
			arr[j][i]=a[i];
	}
	for(j=0;j<4;j++){
		if(arr[j][0]==arr[j][1] && arr[j][0]!=0 && arr[j][1]!=0){
			arr[j][0]=arr[j][0]+arr[j][1];
			arr[j][1]=0;
		}
		if(arr[j][1]==arr[j][2] && arr[j][1]!=0 && arr[j][2]!=0){
			arr[j][1]=arr[j][1]+arr[j][2];
			arr[j][2]=arr[j][3];
			arr[j][3]=0;
		}
		if(arr[j][2]==arr[j][3] && arr[j][1]==0 && arr[j][2]!=0 && arr[j][3]!=0){
			arr[j][1]=arr[j][2]+arr[j][3];
			arr[j][2]=0;
			arr[j][3]=0;
		}
	}
}
void RIGHT(int arr[4][4]){
	int i,j;
	for(j=0;j<4;j++){
		int a[4]={0,0,0,0},k=3;
		for(i=3;i>=0;i--){
			if(arr[j][i]!=0){
				a[k]=arr[j][i];
				k--;
			}
		}
		for(i=0;i<4;i++)
			arr[j][i]=a[i];
	}
	for(j=3;j>=0;j--){
		if(arr[j][3]==arr[j][2] && arr[j][3]!=0 && arr[j][2]!=0){
			arr[j][3]=arr[j][3]+arr[j][2];
			arr[j][2]=0;
		}
		if(arr[j][2]==arr[j][1] && arr[j][2]!=0 && arr[j][1]!=0){
			arr[j][2]=arr[j][2]+arr[j][1];
			arr[j][1]=arr[j][0];
			arr[j][0]=0;
		}
		if(arr[j][1]==arr[j][0] && arr[j][2]==0 && arr[j][1]!=0 && arr[j][0]!=0){
			arr[j][2]=arr[j][1]+arr[j][0];
			arr[j][1]=0;
			arr[j][0]=0;
		}
	}
}
void UP(int arr[4][4]){
	int i,j;
	for(j=0;j<4;j++){
		int a[4]={0,0,0,0},k=0;
		for(i=0;i<4;i++){
			if(arr[i][j]!=0){
				a[k]=arr[i][j];
				k++;
			}
		}
		for(i=0;i<4;i++)
			arr[i][j]=a[i];
	}
	for(j=0;j<4;j++){
		if(arr[0][j]==arr[1][j] && arr[0][j]!=0 && arr[1][j]!=0){
			arr[0][j]=arr[0][j]+arr[1][j];
			arr[1][j]=0;
		}
		if(arr[1][j]==arr[2][j] && arr[1][j]!=0 && arr[2][j]!=0){
			arr[1][j]=arr[1][j]+arr[2][j];
			arr[2][j]=arr[3][j];
			arr[3][j]=0;
		}
		if(arr[2][j]==arr[3][j] && arr[1][j]==0 && arr[2][j]!=0 && arr[3][j]!=0){
			arr[1][j]=arr[2][j]+arr[3][j];
			arr[2][j]=0;
			arr[3][j]=0;
		}
	}
}
void DOWN(int arr[4][4]){
	int i,j;
	for(j=0;j<4;j++){
		int a[4]={0,0,0,0},k=3;
		for(i=3;i>=0;i--){
			if(arr[i][j]!=0){
				a[k]=arr[i][j];
				k--;
			}
		}
		for(i=0;i<4;i++)
			arr[i][j]=a[i];
	}
	for(j=3;j>=0;j--){
		if(arr[3][j]==arr[2][j] && arr[3][j]!=0 && arr[2][j]!=0){
			arr[3][j]=arr[3][j]+arr[2][j];
			arr[2][j]=0;
		}
		if(arr[2][j]==arr[1][j] && arr[2][j]!=0 && arr[1][j]!=0){
			arr[2][j]=arr[2][j]+arr[1][j];
			arr[1][j]=arr[0][j];
			arr[0][j]=0;
		}
		if(arr[1][j]==arr[0][j] && arr[2][j]==0 && arr[1][j]!=0 && arr[0][j]!=0){
			arr[2][j]=arr[1][j]+arr[0][j];
			arr[1][j]=0;
			arr[0][j]=0;
		}
	}
}
void Logic(){
	switch(dir){
		case Left:
			LEFT(arr);
			break;
		case Right:
			RIGHT(arr);
			break;
		case Up:
			UP(arr);
			break;
		case Down:
			DOWN(arr);
			break;
		default:
			break;
	}
	if(score==2048)
		gameOver=true;
}
main(){
	DrawLayout1();
	srand(time(NULL));
	Setup();
	while(!gameOver){
		system("cls");
		Draw(arr);
		Input();
		Logic();
		if(dir!=Stop)
			ranOut(arr);
		dir=Stop;
		Sleep(500);
	}
	system("cls");
	DrawLayout2();
	getch();
}
