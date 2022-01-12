#include <iostream.h>
#include <conio.h>

//Function prototype befor implementation
long Pow_fn(int x, int y);


int main(){

	clrscr();
	long res; // to return the output in a larger space
	int x,y; // the formula is x^y
	cout<<"Enter the Number ="<<endl;
	cin>>x;
	cout<<"Enter the Power ="<<endl;
	cin>>y;

	res= Pow_fn(x,y);
	cout<<"Result of "<<x<<"^"<<y<<" is = "<<res<<endl;

	cout<<"Enter any key to exit!";
	getch();


return 0;}


long Pow_fn(int x, int y){
 long res;
 if(y ==  0 ){ // checking if the power is at zero 
	return 1l;}
 else{
  res = x * Pow_fn(x,y-1); // recursion
   }
  return res;

}
