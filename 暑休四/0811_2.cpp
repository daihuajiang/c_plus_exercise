#include<iostream>
#include<string>
using namespace std;

template <class T>
class Pair{
	private:
		T a;
		T b;
	public:
		Pair(){
			a = "";
			b = "";
		}
		Pair(T n1, T n2){
			a=n1;
			b=n2;
		}
		
		T sum();
};

template <>
string Pair<string>::sum(){
	string str;
	str += a;
	str += b;
	return str;
}

template <>
int Pair<int>::sum(){
	return a + b;
}

int main(){
	Pair <int> A(1, 2);
	
	char a='a',b='b';
	string a1, b1;
	a1.push_back(a);
	b1.push_back(b);
	Pair <string> B(a1, b1);
	
	int d=1;
	string d1=to_string(d);
	char c='c';
	string c1;
	c1.push_back(c);
	Pair <string> C(d1, c1);
	
	cout<<"A: "<<A.sum()<<endl;
	cout<<"B: "<<B.sum()<<endl;
	cout<<"C: "<<C.sum()<<endl;
}
