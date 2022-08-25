#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
using namespace std;

//�d�����O 
class Card{
	private:
		int color;//��� 0:�®� 1:���� 2:��� 3:����
		int number;//�Ʀr1~K
		int random_number;//�H���s��1~52 
		int place_id;//��m�Ͻs��0~3
	public:
		Card *next;//��C�U�@�Ӹ`�I��������� 
		Card(){
			color = -1;
			number = 0;
			random_number = -1;
			place_id = -1;
			next = NULL;
		}
		Card(int c, int n, int r){
			color = c;
			number = n;
			random_number = r;
			place_id = -1;
			next = NULL;
		}
		void set_color(int n){
			color = n;
		}
		void set_number(char n){
			number = n;
		}
		void set_random_number(int n){
			random_number = n;
		}
		void set_place_id(int n){
			place_id = n;
		}
		int get_color(){
			return color;
		}
		//�^�ǼƦr�N����� 
		string get_card_color(){
			string card_color;
			if(color==0){
				card_color="�®�";
			}
			else if(color==1){
				card_color="����";
			}
			else if(color==2){
				card_color="���";
			}
			else if(color==3){
				card_color="����";
			}
			else{
				card_color="�L";
			}
			return card_color;
		}
		int get_number(){
			return number;
		}
		//�^�ǥd�P�Ʀr 
		string get_card_number(){
			string card_num;
			if(number<=10){
				card_num = to_string(number);
			}
			else if(number==11){
				card_num = "J";
			}
			else if(number==12){
				card_num = "Q";
			}
			else if(number==13){
				card_num = "K";
			}
			return card_num;
		}
		int get_random_number(){
			return random_number;
		}
		int get_place_id(){
			return place_id;
		}
		friend class Place;
};

//��m�����O 
class Place{
	public:
		int id;//��m�Ͻs��0~3
		Card *start_node;//��C�_�l�`�I 
		
		Place(){
			id = -1;
			start_node = NULL;
		} 
		Place(int n){
			id = n;
			start_node = NULL;
		} 
		//�L�X�d����m���� 
		void print(){
			Card *current;
			current = start_node;
			cout<<"[��m��"<<id<<"] ";
			//�S��P 
			if(current==NULL){
				cout<<"���: �L, ";
				cout<<" ";
			}
			//����P 
			else{
				cout<<"���: "<<current->get_card_color()<<", ";
				//�M��link list�Ҧ��`�I
				while(current!=NULL){
					cout<<current->get_card_number()<<" ";
					current = current->next;
				} 
			}
		}
		//�b��m�ϧ��ݩ�U�@�i�P 
		void put_card(Card *card){ 
			Card *current;
			current = start_node;
			//��m�Ĥ@�i�P 
			if(current==NULL){
				start_node = card;
			}
			//�w�g����P
			else{
				//�M��link list�Ҧ��`�I
				while(current->next!=NULL){
					current = current->next;
				} 
				//�b��C���ݴ��J�`�I
				current->next = card;
			}	 
		}
};

int main(){
	srand(time(0)); 	
	//�Ыإd���s�����}�C 
	int *random_number;
	int card_len = 52;
	random_number = (int *)malloc(card_len * sizeof(int));
	
	//�}�C��� 
	for(int i=0;i<card_len;i++){
		random_number[i]=i+1;
	} 
	
	//�H�����åd���s��
	for(int i=0;i<card_len;i++){
		int n1 = rand()%52;
		int n2 = rand()%52;
		int temp;
		temp = random_number[n1];
		random_number[n1] = random_number[n2];
		random_number[n2] = temp;
	} 
	
	//�Ы����O���d�������� 
	Card *card = new Card[card_len];
	
	//�Ω�����i��m�d�����}�C
	Card *input_card= new Card[4]; 
	
	//�]�w�����ݩ�
	int max_num = card_len/4;
	card_len = 0;
	for(int i=0;i<4;i++){
		for(int j=1;j<=max_num;j++){
			//�]�w��� 
			card[card_len].set_color(i);
			//�]�w�P���Ʀr 
			card[card_len].set_number(j);
			//�]�w�H���s�� 
			card[card_len].set_random_number(random_number[card_len]);
			if(j==13){
				input_card[i]=card[card_len];
			}
			card_len++;
		}
	} 
	free(random_number);
	/* 
	//�L�X �i��m�d�����}�C
	for(int i=0;i<4;i++){
		cout<<"color: "<< input_card[i].get_color();
		cout<< ", number: "<< input_card[i].get_number();
		cout<< ", random_number: "<< input_card[i].get_random_number()<<endl;
	}
	*/ 
	//�Ыة�m�� 
	Place *place = new Place[4];
	//�]�w��m�Ͻs�� 
	for(int i=0;i<4;i++){
		place[i].id=i;
	} 
	
	int place_number;//��m�Ͻs�� 
	int card_random_number;//�d���s�� 
	
	while(1){
		//�L�X�d����m����
		for(int i=0;i<4;i++){
			place[i].print();
			cout<<endl;
		}
		
		cout<<endl<<"�i��m�d��:\n";
		//�L�X�i��m�d�����}�C
		for(int i=0;i<4;i++){
			string card_num = input_card[i].get_card_number();
			cout<<"���: "<< input_card[i].get_card_color();
			cout<< ", �Ʀr: "<< card_num;
			cout<< ", �d���s��: "<< input_card[i].get_random_number()<<endl;
		}
		
		//�ϥΪ̿�J 
		cout<<"\n��J��m�Ͻs��(0~4)�Υd���s��: ";
		cin>>place_number>>card_random_number;
		cout<<endl;
		
		//��J�Ʀr�W�L�d�򭫷s��J 
		if(place_number<0||place_number>4){
			cout<<"�Э��s��J:\n\n";
			continue;
		}
		if(card_random_number<1||card_random_number>52){
			cout<<"�Э��s��J:\n\n";
			continue;
		}	
		
		Card current_card;//�x�s�n�ާ@���d������ 
		//�ˬd��J���d���s���O�_�ŦX�W�h
		int input_again=1;
		for(int i=0;i<4;i++){
			if(card_random_number==input_card[i].get_random_number()){
				input_again=0;
				current_card=input_card[i];
				break;
			}
		} 
		
		//�p�G��J���d���s�����ŦX�W�h�N���s��J
		if(input_again==1){
			cout<<"�Э��s��J:\n\n";
			continue;
		} 
		
		//�b��m�ϩ�m�Ĥ@�i�d��
		if(current_card.get_place_id()==-1&&place[place_number].start_node==NULL){
			//�]�w��m�Ϧ�C�_�l��m
			for(int i=0;i<card_len;i++){
				if(card[i].get_random_number()==current_card.get_random_number()){
					place[place_number].put_card(&card[i]);
					break;
				}
			}
			//��m�Ĥ@�i�d���ɶ��]�w�P�@��⪺��m�Ͻs��
			for(int i=0;i<card_len;i++){ 
				if(card[i].get_color()==current_card.get_color()){
					card[i].set_place_id(place_number);
				}	
			}
			
			//�ק�i��m�d���ﶵ 
			for(int i=0;i<card_len;i++){
				if(card[i].get_color()==current_card.get_color()&&card[i].get_number()==current_card.get_number()-1){
					for(int j=0;j<4;j++){
						if(card[i].get_color()==input_card[j].get_color()&&card[i].get_number()==input_card[j].get_number()-1){
							input_card[j] = card[i]; 
						}
					}
					break;
				}	
			}
			continue;
		}
		//��m�ϩ�m�Ĥ@�i�d���ɡA��ӱ��󦳨䤤�@�Ӥ��ŦX�N���s��J 
		else if(current_card.get_place_id()!=-1&&place[place_number].start_node==NULL){
			cout<<"�Э��s��J:\n\n";
			continue;
		}
		else if(current_card.get_place_id()==-1&&place[place_number].start_node!=NULL){
			cout<<"�Э��s��J:\n\n";
			continue;
		}
		//�����w�g���̫�@�i��
		else if(current_card.get_number()==1){
			//�s�W��C�`�I
			for(int i=0;i<card_len;i++){
				if(card[i].get_random_number()==current_card.get_random_number()){
					place[place_number].put_card(&card[i]);
					break;
				}
			}
			//�Ыتťd�P 
			Card *nullcard = new Card[1];
			nullcard->set_color(current_card.get_color());
			nullcard->set_place_id(current_card.get_place_id());
			nullcard->set_number(0);
			
			//�ק�i��m�d���ﶵ
			for(int j=0;j<4;j++){	
				if(input_card[j].get_color()==current_card.get_color()){
					input_card[j]=nullcard[0];
					break;
				}
			}
		}
		//���O��m�Ĥ@�i�d���γ̫�@�i�d���� 
		else{
			//�s�W��C�`�I
			for(int i=0;i<card_len;i++){
				if(card[i].get_random_number()==current_card.get_random_number()){
					place[place_number].put_card(&card[i]);
					break;
				}
			}
			
			//�ק�i��m�d���ﶵ
			for(int i=0;i<card_len;i++){
				if(card[i].get_color()==current_card.get_color()&&card[i].get_number()==current_card.get_number()-1){
					for(int j=0;j<4;j++){
						if(card[i].get_color()==input_card[j].get_color()&&card[i].get_number()==current_card.get_number()-1){
							input_card[j] = card[i];
							break;
						}
					}
					break;
				}	
			}
		}
		
		//�p�G�Ҧ��d������m�����N�������s
		int finish = 0;
		for(int i=0;i<4;i++){
			if(input_card[i].get_number()==0){
				finish++;
			}
		}
		if(finish>=4){
			//�L�X�d����m����
			for(int i=0;i<4;i++){
				place[i].print();
				cout<<endl;
			}
			cout<<"\nFinish!";
			break;
		}	
	}
	
	return 0;
} 
