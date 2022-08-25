#include <iostream>
#include <math.h>

using namespace std;

template <class T>
T area(T upper, T lower, T height) {
  return (upper+lower)*height/2.0;
}

template <>
double area(double upper, double lower, double height) {
  return round((upper+lower)*height/2.0);
}

int main () {
    
    cout << area(3, 4, 5) << endl;
    cout << area(3.0, 4.0, 5.0) << endl;
    
    return 0;
}
