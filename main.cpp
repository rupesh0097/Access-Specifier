#include <iostream>
using namespace std;

/*class Rectangle{
	public:
		double length;
		double breadth;
		double height;

	double area(){
		return length * breadth;
	}
	double volume(){
		return length * breadth * height;
	}
};

int main(){
	//Creating object of Rectangle class
	Rectangle rec;

	//Assigning value for the data members
	rec.length = 5.0;
	rec.breadth = 5.0;
	rec.height = 5.0;

	//Printing the value
	cout << "Area is : " << rec.area()  << endl;
	cout << "Volume is : " << rec.volume()  << endl;
	
}
*/

//Now using public and private in using class
class Room{
private:
	int length;
	int breadth;
	int height;

public:
//Creating Functions to initialize the Private Variables
void initPrivate(int len, int brth, int hgt){
	length = len;
	breadth = brth;
	height = hgt;
}

//Creating function to perform the calculation
int calculateArea(){
	return length * breadth;
}

int calculateVolume(){
	return length * breadth * height;
}
};

int main(){
//Creating an object for the class Room
Room room1;

//passing the value of private Variables as arguments
room1.initPrivate(5, 5, 5);

//Printing the Functions
cout << "Area is : " << room1.calculateArea() << endl;
cout << "Volume is : " << room1.calculateVolume() << endl;

return 0;
}
