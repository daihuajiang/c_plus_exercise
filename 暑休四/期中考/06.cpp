#include <iostream>

using namespace std;

template <class T>
T area(T a, T b){
	return a*b/2;
}

int main(){
	
	
	cout << area(2, 5) << endl;
	cout << area(3.5, 2.0) << endl;
	
	return 0;
}
