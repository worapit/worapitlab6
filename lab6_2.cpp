#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double a){
    a = a*M_PI/180;
    return a;
}

double rad2deg(double b){
    b = b*180/M_PI;
    return b;
}

double findXComponent(double L1,double L2,double A1,double A2){
    double x;
    x = L1*cos(A1)+L2*cos(A2);
    return x;
}
 
double  findYComponent(double L1,double L2,double A1,double A2){
    double y;
    y = L1*sin(A1)+L2*sin(A2);
    return y;
}

double pythagoras(double x,double y){
    double R;
    R = sqrt(pow(x,2)+pow(y,2));
    return R;
}

double showResult(double c, double d){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << c << "\n";
    cout << "Direction of the resultant vector (deg) = " << d << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    return c;
    return d;
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
