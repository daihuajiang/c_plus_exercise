#include <iostream>

using namespace std;

template <class T>
class Pair{
	public:
		T a;
		T b;
		T sum(){
			return a+b;
		}
		Pair(T _a, T _b){
			a = _a;
			b = _b; 
		}
};

int main(){
	
	Pair <int> p1(3,4);
	Pair <float> p2(3.5, 4.6);
	
	cout << p1.sum() << endl;
	cout << p2.sum() << endl;
	
	return 0;
}
