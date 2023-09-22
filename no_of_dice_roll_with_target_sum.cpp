#include<bits/stdc++.h>
using namespace std;
class solution{
	int ans=0;
	public:
	int solve(int no_dice,int noface,int target){
		if(target < 0){
			return 0;
		}
		if(no_dice==0 && target==0){
			return 1;
		}
		if(no_dice==1 && target != 0){
			return 0;
		}
		if(no_dice !=1 && target == 0){
			return 0;
		}
		for(int i=1; i<=noface; i++){
			ans=ans+solve(no_dice-1,noface,target-i);
		}
		return ans;
	}
	void display(){
		cout<<ans<<" ";
	}
};
main(){
	int no_dice;
	cout<<"number dice";
	cin>>no_dice;
	int noface;
	cout<<"no of face in dice";
	cin>>noface;
	int target;
	cout<<"target u want";
	cin>>target;
	solution s;
	s.solve(no_dice,noface,target);
	s.display();
	
}