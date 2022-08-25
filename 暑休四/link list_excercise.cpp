#include <iostream>
#include <stdlib.h>

using namespace std;
class Node{
	public:
		int value;
		Node *next;
		Node(){
			value=-1;
			next=NULL;
		}
		Node(int a){
			value=a;
			next=NULL;
		}
		//�s�W 
		addNode(Node *node){
			Node *next;
			next=this->next;
			this->next=node;
			node->next=next;
		} 
		
		//�R��
		deleteNode(Node *startNode){
			Node *current;
			current = startNode;
			//�p�G�n�R�����`�I���O�Ĥ@�Ӹ`�I 
			if(current != this){
				//�j�M�ثe�`�I���e�@�Ӹ`�I 
				while(current!=NULL){
					if(current->next==this){
						break;
					}
					current = current->next;
				}
				//�N�e�@�Ӹ`�I��next���w���ثe�`�I��next
				current->next = this->next;
				this->next = NULL;
			}
			//�p�G�n�R�����`�I�O�Ĥ@�Ӹ`�I
			else if(current == this){
				this->value = current->next->value;
				this->next = current->next->next;
			}
			else{
				cout<<("error")<<endl;
			}
		}
		
		//�ק�`�Ivalue
		modify_Node_value(int n){
			this->value = n;
		} 
};

int main(){
	Node a(1);
	Node b(2);
	Node c(3);
	Node *start;
	
	start=&a;
	a.next=&b;
	b.next=&c;
	
	//�M��link list�Ҧ��`�I 
	cout<<"value: start->";
	while(start!=NULL){
		//printf("%d->",start->value);
		cout<<start->value<<"->";
		start = start->next;
	} 
	cout<<"null"<<endl;
	
	//���J�`�I 
	Node d(4);
	b.addNode(&d);
	
	cout<<"after insert\n";
	cout<<"value: start->";
	
	start=&a;
	while(start!=NULL){
		cout<<start->value<<"->";
		start = start->next;
	} 
	cout<<"null"<<endl;
	
	//�R���`�I
	b.deleteNode(&a);
	
	cout<<"after delete\n";
	cout<<"value: start->";
	
	start=&a;
	while(start!=NULL){
		cout<<start->value<<"->";
		start = start->next;
	} 
	cout<<"null"<<endl;
	
	//�ק�`�Ivalue
	c.modify_Node_value(5);
	
	cout<<"after modify\n";
	cout<<"value: start->";
	
	start=&a;
	while(start!=NULL){
		cout<<start->value<<"->";
		start = start->next;
	} 
	cout<<"null"<<endl;
	return 0;
}
