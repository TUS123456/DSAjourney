#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, map<int, int>> ptr;
    ptr.first = 90;
    ptr.second[89] = 42;  // Assigning a value of 42 to key 89 in the map

    cout<<ptr.first<<" "<<endl;
    auto map=ptr.second;
    cout<<map.first()<<" "<<endl;
	for(auto &val : map){
    	cout<<val.first<<" "<<val.second;
	}
	return 0;
}
