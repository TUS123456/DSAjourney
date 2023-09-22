#include<bits/stdc++.h>
using namespace std;
int oddcountfuc(string s,int start,int end){
        cout<<start<<" "<<end<<endl;
		int count=1;
        while(start > 0 && end < s.size()){
            cout<<endl;
			if(s[start]!=s[end]){
                break;               
            }
            count++;
            start--;
            end++;
         cout<<start<<" "<<end<<endl;
        }
        return count;
}
int longestPalindromeSubseq(string s) {
        int total_count=0;
        for(int i=0; i<s.size(); i++){
            int oddcount=oddcountfuc(s,i,i);
			int evencount=oddcountfuc(s,i,i+1);
            total_count=total_count+(oddcount+evencount);
        }
        return total_count;
}
main(){
	string str="cbbd";
	cout<<longestPalindromeSubseq(str);
	
	
}