#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

double deg2rad(double a){
	double A = (a*M_PI)/180 ;
	return A;
}
double rad2deg(double b){
	double B = (b*180)/M_PI;
	return B;
}
double findXComponent(double c, double d, double e, double f){
	double D = (c*cos(e)) + (d*cos(f));
	return D;
}
double findYComponent(double c, double d, double e, double f){
	double E = (c*sin(e)) + (d*sin(f));
	return E;
}
double pythagoras(double xcomp , double ycomp){
	double F = sqrt((pow(xcomp,2))+(pow(ycomp,2)));
	return F;
}
void showResult(double e, double f){
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
	cout << "Length of the resultant vector = " << e << "\n";
	cout << "Direction of the resultant vector (deg) = " << f << "\n";
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
