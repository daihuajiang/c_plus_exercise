#include<iostream>
using namespace std;

class Food{
	private:
		
	public:
		static int x;
		int temperature;
		Food(){
		}
		Food(int n){
			temperature=n;
		}
		int qualified(){
			if(temperature > x){
				return 0;
			}
			else{
				return 1;
			}
		}
};

int Food::x = 100;//ªì©l¤Æx 

int main(){
	Food A(100);
	Food B(101);
	cout<<"A.x: "<<A.x<<endl;
	cout<<"B.x: "<<B.x<<endl;
	A.x=101;
	
	cout<<endl;
	cout<<"A.x: "<<A.x<<endl;
	cout<<"B.x: "<<B.x<<endl;
	
	cout<<"A: "<<A.qualified()<<endl;
	cout<<"B: "<<B.qualified()<<endl;
	
	return 0;
}
