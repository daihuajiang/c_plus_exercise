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
		//新增 
		addNode(Node *node){
			Node *next;
			next=this->next;
			this->next=node;
			node->next=next;
		} 
		
		//刪除
		deleteNode(Node *startNode){
			Node *current;
			current = startNode;
			//如果要刪除的節點不是第一個節點 
			if(current != this){
				//搜尋目前節點的前一個節點 
				while(current!=NULL){
					if(current->next==this){
						break;
					}
					current = current->next;
				}
				//將前一個節點的next指定為目前節點的next
				current->next = this->next;
				this->next = NULL;
			}
			//如果要刪除的節點是第一個節點
			else if(current == this){
				this->value = current->next->value;
				this->next = current->next->next;
			}
			else{
				cout<<("error")<<endl;
			}
		}
		
		//修改節點value
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
	
	//遍歷link list所有節點 
	cout<<"value: start->";
	while(start!=NULL){
		//printf("%d->",start->value);
		cout<<start->value<<"->";
		start = start->next;
	} 
	cout<<"null"<<endl;
	
	//插入節點 
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
	
	//刪除節點
	b.deleteNode(&a);
	
	cout<<"after delete\n";
	cout<<"value: start->";
	
	start=&a;
	while(start!=NULL){
		cout<<start->value<<"->";
		start = start->next;
	} 
	cout<<"null"<<endl;
	
	//修改節點value
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
