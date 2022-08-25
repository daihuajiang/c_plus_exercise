#include <iostream>

using namespace std;

class Car{
	public:
		static int limit;
		int speed;
};

int Car::limit = 0;

int main(){

	int i;
	Car c[3];
	
	for(i=0; i<3; i++){
		cin >> c[i].speed;
	}
	
	cin >> Car::limit;
	
	for(i=0; i<3; i++){
		if(c[i].speed > Car::limit){
			cout << "True ";
		}else{
			cout << "False ";
		}
	}
	

	return 0;	
	
}
