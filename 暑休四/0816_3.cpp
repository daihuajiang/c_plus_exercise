#include<iostream>
using namespace std;

class Obj{
	friend int compare(Obj a);
	private:
		int a;
		int b;
	public:
		Obj(int n1, int n2){
			a = n1;
			b = n2;
		}
};

int compare(Obj a){
	return (a.a>a.b)?1:0;
}

int main(){
	Obj a(6,5);
	cout<<compare(a)<<endl;
	return 0;
} 
