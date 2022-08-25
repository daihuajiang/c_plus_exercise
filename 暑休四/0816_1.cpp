#include <iostream>
#include <stdlib.h>
#include <typeinfo>
#include <string>

using namespace std;

template<class T>
class Node{
	public:
		T value;
		Node<T> *next;
		Node(){
			value=nullptr;
			next=nullptr;
		}
		Node(T a){
			value=a;
			next=nullptr;
		}
};

int main(){
	Node <double> a(1);
	Node <double> b(2.1);
	//Node <char> c('c');
	Node <double> *start;
	
	start=&a;
	a.next=&b;
	//b.next=&c;
	
	//�M��link list�Ҧ��`�I 
	cout<<"value: start->";
	while(start!=NULL){
		//printf("%d->",start->value);
		cout<<start->value<<"->";
		cout<<endl<<typeid(start->value).name()<<endl;
		start = start->next;
	} 
	cout<<"null"<<endl;
	
	return 0;
}
