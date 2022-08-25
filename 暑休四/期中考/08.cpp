#include <iostream>

using namespace std;

template <typename T, typename T2, typename T3>
class Pair{
	public:
		T a;
		T2 b;
		T3 c;
		
		void sum(){
			if(sizeof(a)==1||sizeof(b)==1||sizeof(c)==1){
				cout << a << b << c << endl;
			}else{
				cout << a+b+c << endl;
			}
			
		}
		
		Pair(T _a, T2 _b, T3 _c){
			a = _a;
			b = _b;
			c = _c;
		}
};

int main(){
	
	Pair <int, int, int> p(3,4,5);
	
	Pair <int, char, int> p2(3,'c',5);
	
	p.sum();
	p2.sum();
	
	
	return 0;
}
