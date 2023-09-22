#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
		void solve(string &s,int size){
			int swap_point=INT_MIN,greter;
			for(int i=size; i>=0; i--){
				if(s[i-1] < s[i]){
					swap_point=i-1;
					break;
					
				}
			}
			if(swap_point < INT_MIN){
				sort(s.begin(),s.end());
			}
			else{
				for(greter=size-1; greter > swap_point; greter--){
					if(s[swap_point] < s[greter]){
						cout<<s[swap_point]<<" "<<s[greter]<<endl;                 
						break;
					}
				}
				swap(s[swap_point],s[greter]);
				sort(s.begin()+swap_point+1,s.end());
			}
		}
		void solve2(string &s){
			for(int i = 0; i<5; i++) {
            bool val = next_permutation(s.begin(), s.end());
            if (val == false) {
            cout << "No next permutation" << endl;
            break;
            } else
            cout << "Next: " << s << endl;
            }
		}
		void print_string(string &s){
			for(int i=0; i<s.size(); i++){
				cout<<s[i];
			}
			cout<<endl;
		}
		
};
main(){
	solution s1;
	string s="";              
	s1.print_string(s);
	s1.solve(s,s.size());
	//s1.solve2(s);
	s1.print_string(s);
}
