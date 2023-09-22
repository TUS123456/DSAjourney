#include<iostream>
#include<string>
using namespace std;     
        bool valid_char(char ch){
         if( (ch >='a'&& ch <= 'z') || (ch >='A'&& ch <='Z')||(ch >='0' && ch <='9')){
             return 1;
         }
         else{
             return 0;
         }
     }
     char to_lower_case(char ch){
            if((ch >= 'a' && ch <= 'z') || (ch>='0' && ch<='9'))
                return ch;
            else{
                char temp;
                temp = ch-'A'+'a';
                return temp;
            }
    }
main(){
	char temp;
	temp=to_lower_case('A');
	cout<<temp;
}
