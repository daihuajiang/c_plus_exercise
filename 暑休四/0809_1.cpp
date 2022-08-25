#include <iostream>

using namespace std;

template <class T>
T area(T upper, T lower, T height) {
  return (upper+lower)*height/2.0;
}

int main () {
    
    cout << area(3.0, 4.0, 5.0) << endl;
    
    return 0;
}
