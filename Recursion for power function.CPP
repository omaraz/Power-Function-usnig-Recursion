#include <iostream.h>
#include <conio.h>

int main(){
	  clrscr();
	  int arr[3][4];
	  int Total_Marks,Temp;
	  float Avg_Marks;

	  for(int i = 0; i <3; i++){
		for(int j = 0; j <4; j++){
			cout<<endl<<"Enter the grade with student id = "<<i+1<<", for the subject "<<j+1<<" is =";
			cin>>arr[i][j];
		}
	  }

	  for(i = 0; i <3; i++){
		Temp =0;
		for(int j = 0; j <4; j++){
			Temp = Temp + arr[i][j];
		}
		Total_Marks = Temp;
		Avg_Marks = 1.0*Temp/j;
		cout<<"For Student ID="<<i+1<<endl<<", Total Marks out of 4 Subjects = "<<Total_Marks<<endl<<", Avg. Marks through these subjects = "<<Avg_Marks<<endl<<endl;
	 }

	  cout<<endl<<"Press any key to exit!";
	  getch();


return 0;}