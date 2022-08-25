#include <iostream>
#include <iterator>
#include <list>
#include <map>
using namespace std;

template<class T>
struct Wrapper
{
    typedef list<T> list_type;
};

int main(){
	Wrapper<int>::list_type my_wrapped_list;
	my_wrapped_list.push_back(10);
	my_wrapped_list.push_back(20);
	
	list<int>::iterator it;
	for (it = my_wrapped_list.begin(); it != my_wrapped_list.end(); ++it)
        cout << '\t' << *it;
	
	return 0;
}
