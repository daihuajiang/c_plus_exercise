#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
class Person{
	
	public:
		T tall;
		T weight;
	
	Person(T t, T w){
		tall = t;
		weight = w;
	}

		
};

int main(){
	
	Person <int> p(180, 70);
	Person <double> p2(180.2, 70.3);
	
	cout << p.tall << " , " << p.weight << endl;
	cout << p2.tall << " , " << p2.weight << endl;
	
	return 0;
}
