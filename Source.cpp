#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateRadius(double& rad ,double x1, double x2, double y1, double y2);
double calculateArea(double rad);
double calculatePerimeter(double rad);


int main() {
	double centerx;
	double circlex;
	double centery;
	double circley;
	double rad = 0;

	cout << "Enter the x cordinate of the center point: " << endl;
	cin >> centerx;
	cout << "Enter the y cordinate of the center point: " << endl;
	cin >> centery;
	cout << "Enter the x cordinate of the point on the circle: " << endl;
	cin >> circlex;
	cout << "Enter the y cordinate of the point on the circle: " << endl <<endl;
	cin >> circley;

	cout << "The Circles Radius is: " << calculateRadius(rad, centerx, circlex, centery, circley) << endl;
	cout << "The Circles Area is: " << calculateArea(rad) << endl;
	cout << "The Circles Perimter is: " << calculatePerimeter(rad) << endl;

	return 0;
}

double calculateRadius( double& rad, double x1, double x2, double y1, double y2) {
	rad =  sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	return rad;
}


double calculateArea(double rad) {
	double area;

	area = 3.14*(pow(rad, 2));

	return area;
}


double calculatePerimeter(double rad) {
	double perim;
	perim = 2 * 3.14*rad;

	return perim;
}
