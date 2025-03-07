//Topic:
#include <stdio.h>
#include <iostream>
using namespace std;
class rectangla{
private:
	int length; 
	int breadth;
	
public:	
	rectangla() {
		length = 0;
		breadth = 0;
	}
	rectangla(int l, int b){
		length = l;
		breadth = b;
	}
	int area() {
		return length*breadth;
	}
	int peri() {
		return 2*(length+breadth);
	}
	int setbreadth(int b){
		breadth = b;
	}
	int setlength(int l) {
		length = l;
	}
	int getlength(){
		return length;
	}
	int getbreadth(){
		return breadth;
	}
	~rectangla(){
		printf("rectangle id Destroied");
	}
};
int main () {
	rectangla r(10,5);
printf("Area of rectangle: %d", r.area);
printf("Perimeter of rectangle: %d", r.peri);
	
return 0;
}

