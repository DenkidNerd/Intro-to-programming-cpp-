#include <iostream>

void area() 
{
//This program calculates the area of a Triangle.
 int b,h;
 float area;
//Declaration of Variables 'b' represents base and 'h' represents height.
std::cout << "Please introduce the value of the base: ";
std::cin >> b;
std::cout <<"\nPlease, introduce the value of the height: ";
std::cin >> h;
//The variable 'area' is float in order to store any final result that equals the area of a triangle in decimals.
area = 0.5*b*h;
//This is the assignment of variable 'area' to the formula of the area of a triangle.    
 std::cout << "\nArea is: " << area;
//Output of the final result.
}

int main() {
	area();
return 0;
}
