#include<iostream>
#include<string>
using namespace std;

bool is_int(char c){
	if(c-'0'>=0&&c-'0'<=9){
		return true;
	}
	else{
		return false;
	}
}

char int_to_char(int n){
	char c=n+48;
	return c;
}

int char_to_int(char c){
	int a=c-'0';
	return a;
}

string char_to_string(char c){
	string s;
	s.push_back(c);
	return s;
} 

template <class T>
class Pair{
	private:
		T a;
		T b;
	public:
		Pair(){
			a = NULL;
			b = NULL;
		}
		Pair(T n1, T n2){
			a=n1;
			b=n2;
		}
		
		T sum();
};

template <>
string Pair<string>::sum(){
	string str;
	char a1 = a[0];
	char b1 = b[0];
	if(is_int(a1)&&is_int(b1)){
		int n = stoi(a) + stoi(b);
		str = to_string(n);
	}
	else{
		str += a;
		str += b;
	}
	return str;
}

template <>
int Pair<int>::sum(){
	return a + b;
}

int main(){
	char a, b;
	cout<<"input 2 char: ";
	cin>>a>>b;
		
	Pair <string> A(char_to_string(a), char_to_string(b));
	
	cout<<"A: "<<A.sum()<<endl;
	
	return 0;
}
