#include <iostream>

using namespace std;

template <class T>
class Pair{
	private:
		T a;
		T b;
	public:
		Pair(T _a, T _b){
			a = _a;
			b = _b;
		}
		friend T sum(Pair <T> &p){
			return p.a+p.b;
		}
};


int main(){
	
	Pair <int> p (3,4);
	cout << sum(p) << endl;
	
	Pair <double> p2 (3.5,4.2);
	cout << sum(p2) << endl;
	
	return 0;
}
