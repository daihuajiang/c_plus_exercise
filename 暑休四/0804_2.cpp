#include <iostream>
#include <stdlib.h>

using namespace std;

class Book{
	public:
		int ID; 
		Book *next;
		Book(){
			ID = rand()%100; 
			next = NULL; 
		}		
};

int main(){
	Book *book_array= new Book[10];
	Book *p;
	p = &book_array[0];
	for(int i=0;i<10-1;i++){
		book_array[i].next = &book_array[i+1];
	}
		
	cout << "Start -> ";
	while(p!=NULL){
		cout << p->ID << " -> ";
		p = p->next;
	}
	cout << "NULL";
	
	
	return 0;
} 
