#include <iostream>

using namespace std;

template <class T>
T sum(T a, T b){
	return a+b;
}

int main(){
	
	cout << sum(3,4) << endl;
	cout << sum(3.5, 4.2) << endl;
	
	return 0;
}
