#include <iostream.h>
#include <conio.h>

long Pow_fn(int x, int y);


int main(){

	clrscr();
	long z;
	int x,y;
	cout<<"Enter the Number ="<<endl;
	cin>>x;
	cout<<"Enter the Power ="<<endl;
	cin>>y;

	z= Pow_fn(x,y);
	cout<<"Result of "<<x<<"^"<<y<<" is = "<<z<<endl;

	cout<<"Enter any key to exit!";
	getch();


return 0;}


long Pow_fn(int x, int y){
 long res;
 if(y ==  0 ){
	return 1l;}
 else{
  res = x * Pow_fn(x,y-1);
   }
  return res;

}