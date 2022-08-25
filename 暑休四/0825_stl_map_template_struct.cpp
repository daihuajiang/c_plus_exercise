#include <iostream>
#include <iterator>
#include <list>
#include <map>
using namespace std;

template<class T>
struct Wrapper
{
    typedef map<T, T> map_type;
};

int main(){
	Wrapper<int>::map_type my_wrapped_map;
	my_wrapped_map[1] = 10;
	my_wrapped_map[2] = 20;
	
	map<int, int>::iterator itr;
    cout << "\nThe map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = my_wrapped_map.begin(); itr != my_wrapped_map.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
	return 0;
} 
