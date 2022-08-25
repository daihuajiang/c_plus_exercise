#include <iostream> 

using namespace std;

class Person{
	public:
		int age;
		Person *next;
};

int main(){
	
	Person p[10];
	int i;
	for(i=1; i<=10; i++){
		p[i-1].age = i*5;
	}
	
	p[0].next = &p[1];
	p[1].next = &p[3];
	p[3].next = &p[4];
	p[4].next = &p[5];
	p[5].next = &p[6];
	p[6].next = &p[7];
	p[7].next = &p[8];
	p[8].next = &p[9];
	
	Person *pp;
	
	pp = &p[0];
	
	while(pp!=NULL){
		cout << pp->age << " ";
		pp = pp->next;
	}
	
	return 0;
}
