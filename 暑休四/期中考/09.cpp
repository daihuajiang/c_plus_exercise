#include <iostream>

using namespace std;

template <typename T>
class Pair{
	public:
		T a;
		T b;
		
		Pair(T _a, T _b){
			a = _a;
			b = _b;
		}
};

template <class T>
T sum(Pair <T> &p){
	return p.a+p.b; 
}

int main(){
	
	Pair <int> p(3,4);
	
	Pair <double> p2(4.2,5.2);
	
	cout << sum(p) << endl;
	cout << sum(p2) << endl;
	
	
	return 0;
}
