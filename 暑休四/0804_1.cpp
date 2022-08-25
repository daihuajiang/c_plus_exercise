#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Book{ 
	public: 
		int ID;
		Book(){
			ID = rand()%100; 
		}
};


int main(){
	srand(time(NULL));
	Book *ba = new Book[10];
	
	int i;
	for(i=0; i<10; i++){ 
		cout << ba[i].ID << endl;
	}
	
	return 0;
} 
