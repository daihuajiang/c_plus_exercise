#include <iostream> 

using namespace std;

class Person{
	public:
		int age;
};

int main(){
	
	Person p[10];
	int i;
	for(i=1; i<=10; i++){
		p[i].age = i*5;
	}
	
	for(i=1; i<=10; i++){
		cout << p[i].age << " "; 
	}
	
	return 0;
}
