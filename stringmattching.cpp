#include<bits/stdc++.h>
#include<string>
using namespace std;
class solution{
	public:
		void matching(string &txt,string &pat){
		int N=txt.size();
		int M=pat.size();
		for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++){
            if (txt[i + j] != pat[j]){
                break;
            }
        }
        if (j== M) 
            cout << "Pattern found at index " << i << endl;
    }
}
};
main(){
	solution skt;
	string s1="mohankichai";
	string s2="chai";
	skt.matching(s1,s2);
}
