#include <iostream>

using namespace std;

template <typename T>
class Table{
	public:
		int length;
		T mul(T a){
			return length * a;
		}
		
		int mul(char a){
			return 0;
		}
};

int main(){
	
	Table <int> t1;
	t1.length = 5;
	
	cout << t1.mul(3) << endl;
	cout <<t1.mul('c') << endl;
	
	return 0;
}
