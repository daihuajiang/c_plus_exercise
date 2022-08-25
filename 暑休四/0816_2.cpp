#include<iostream>
using namespace std;

template <class T>
class Obj{
	public:
		T a;
		T b;
		Obj(T n1, T n2){
			a = n1;
			b = n2;
		}
		T compare(){
			/*
			if(a>b){
				return a;
			}
			else{
				return b;	
			}
			*/
			return (a>b)?a:b;
		}
};

int main(){
	Obj <int> a(3,4);
	cout<<a.compare()<<endl;
	return 0;
} 
