#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
using namespace std;

//卡片類別 
class Card{
	private:
		int color;//花色 0:黑桃 1:紅心 2:方塊 3:梅花
		int number;//數字1~K
		int random_number;//隨機編號1~52 
		int place_id;//放置區編號0~3
	public:
		Card *next;//串列下一個節點的物件指標 
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
		//回傳數字代表的花色 
		string get_card_color(){
			string card_color;
			if(color==0){
				card_color="黑桃";
			}
			else if(color==1){
				card_color="紅心";
			}
			else if(color==2){
				card_color="方塊";
			}
			else if(color==3){
				card_color="梅花";
			}
			else{
				card_color="無";
			}
			return card_color;
		}
		int get_number(){
			return number;
		}
		//回傳卡牌數字 
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

//放置區類別 
class Place{
	public:
		int id;//放置區編號0~3
		Card *start_node;//串列起始節點 
		
		Place(){
			id = -1;
			start_node = NULL;
		} 
		Place(int n){
			id = n;
			start_node = NULL;
		} 
		//印出卡片放置情形 
		void print(){
			Card *current;
			current = start_node;
			cout<<"[放置區"<<id<<"] ";
			//沒放牌 
			if(current==NULL){
				cout<<"花色: 無, ";
				cout<<" ";
			}
			//有放牌 
			else{
				cout<<"花色: "<<current->get_card_color()<<", ";
				//遍歷link list所有節點
				while(current!=NULL){
					cout<<current->get_card_number()<<" ";
					current = current->next;
				} 
			}
		}
		//在放置區尾端放下一張牌 
		void put_card(Card *card){ 
			Card *current;
			current = start_node;
			//放置第一張牌 
			if(current==NULL){
				start_node = card;
			}
			//已經有放牌
			else{
				//遍歷link list所有節點
				while(current->next!=NULL){
					current = current->next;
				} 
				//在串列尾端插入節點
				current->next = card;
			}	 
		}
};

int main(){
	srand(time(0)); 	
	//創建卡片編號的陣列 
	int *random_number;
	int card_len = 52;
	random_number = (int *)malloc(card_len * sizeof(int));
	
	//陣列賦值 
	for(int i=0;i<card_len;i++){
		random_number[i]=i+1;
	} 
	
	//隨機打亂卡片編號
	for(int i=0;i<card_len;i++){
		int n1 = rand()%52;
		int n2 = rand()%52;
		int temp;
		temp = random_number[n1];
		random_number[n1] = random_number[n2];
		random_number[n2] = temp;
	} 
	
	//創建類別為卡片的物件 
	Card *card = new Card[card_len];
	
	//用於紀錄可放置卡片的陣列
	Card *input_card= new Card[4]; 
	
	//設定物件屬性
	int max_num = card_len/4;
	card_len = 0;
	for(int i=0;i<4;i++){
		for(int j=1;j<=max_num;j++){
			//設定花色 
			card[card_len].set_color(i);
			//設定牌面數字 
			card[card_len].set_number(j);
			//設定隨機編號 
			card[card_len].set_random_number(random_number[card_len]);
			if(j==13){
				input_card[i]=card[card_len];
			}
			card_len++;
		}
	} 
	free(random_number);
	/* 
	//印出 可放置卡片的陣列
	for(int i=0;i<4;i++){
		cout<<"color: "<< input_card[i].get_color();
		cout<< ", number: "<< input_card[i].get_number();
		cout<< ", random_number: "<< input_card[i].get_random_number()<<endl;
	}
	*/ 
	//創建放置區 
	Place *place = new Place[4];
	//設定放置區編號 
	for(int i=0;i<4;i++){
		place[i].id=i;
	} 
	
	int place_number;//放置區編號 
	int card_random_number;//卡片編號 
	
	while(1){
		//印出卡片放置情形
		for(int i=0;i<4;i++){
			place[i].print();
			cout<<endl;
		}
		
		cout<<endl<<"可放置卡片:\n";
		//印出可放置卡片的陣列
		for(int i=0;i<4;i++){
			string card_num = input_card[i].get_card_number();
			cout<<"花色: "<< input_card[i].get_card_color();
			cout<< ", 數字: "<< card_num;
			cout<< ", 卡片編號: "<< input_card[i].get_random_number()<<endl;
		}
		
		//使用者輸入 
		cout<<"\n輸入放置區編號(0~4)及卡片編號: ";
		cin>>place_number>>card_random_number;
		cout<<endl;
		
		//輸入數字超過範圍重新輸入 
		if(place_number<0||place_number>4){
			cout<<"請重新輸入:\n\n";
			continue;
		}
		if(card_random_number<1||card_random_number>52){
			cout<<"請重新輸入:\n\n";
			continue;
		}	
		
		Card current_card;//儲存要操作的卡片物件 
		//檢查輸入的卡片編號是否符合規則
		int input_again=1;
		for(int i=0;i<4;i++){
			if(card_random_number==input_card[i].get_random_number()){
				input_again=0;
				current_card=input_card[i];
				break;
			}
		} 
		
		//如果輸入的卡片編號不符合規則就重新輸入
		if(input_again==1){
			cout<<"請重新輸入:\n\n";
			continue;
		} 
		
		//在放置區放置第一張卡片
		if(current_card.get_place_id()==-1&&place[place_number].start_node==NULL){
			//設定放置區串列起始位置
			for(int i=0;i<card_len;i++){
				if(card[i].get_random_number()==current_card.get_random_number()){
					place[place_number].put_card(&card[i]);
					break;
				}
			}
			//放置第一張卡片時須設定同一花色的放置區編號
			for(int i=0;i<card_len;i++){ 
				if(card[i].get_color()==current_card.get_color()){
					card[i].set_place_id(place_number);
				}	
			}
			
			//修改可放置卡片選項 
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
		//放置區放置第一張卡片時，兩個條件有其中一個不符合就重新輸入 
		else if(current_card.get_place_id()!=-1&&place[place_number].start_node==NULL){
			cout<<"請重新輸入:\n\n";
			continue;
		}
		else if(current_card.get_place_id()==-1&&place[place_number].start_node!=NULL){
			cout<<"請重新輸入:\n\n";
			continue;
		}
		//有花色已經放到最後一張時
		else if(current_card.get_number()==1){
			//新增串列節點
			for(int i=0;i<card_len;i++){
				if(card[i].get_random_number()==current_card.get_random_number()){
					place[place_number].put_card(&card[i]);
					break;
				}
			}
			//創建空卡牌 
			Card *nullcard = new Card[1];
			nullcard->set_color(current_card.get_color());
			nullcard->set_place_id(current_card.get_place_id());
			nullcard->set_number(0);
			
			//修改可放置卡片選項
			for(int j=0;j<4;j++){	
				if(input_card[j].get_color()==current_card.get_color()){
					input_card[j]=nullcard[0];
					break;
				}
			}
		}
		//不是放置第一張卡片或最後一張卡片時 
		else{
			//新增串列節點
			for(int i=0;i<card_len;i++){
				if(card[i].get_random_number()==current_card.get_random_number()){
					place[place_number].put_card(&card[i]);
					break;
				}
			}
			
			//修改可放置卡片選項
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
		
		//如果所有卡片都放置完畢就結束接龍
		int finish = 0;
		for(int i=0;i<4;i++){
			if(input_card[i].get_number()==0){
				finish++;
			}
		}
		if(finish>=4){
			//印出卡片放置情形
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
