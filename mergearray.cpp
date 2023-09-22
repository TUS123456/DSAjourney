#include<bits/stdc++.h>
using namespace std;
class solution{
	
	public:
		void merge_array(vector<int> &a,vector<int> &b,int m1,int m2,vector<int> &ans){
			while( m1 >=0 ){
			    ans.push_back(a[m1]);
                m1--;
               }
               
            while( m2 >=0 ){
				ans.push_back(b[m2]);
                m2--;
            }
		}
		void print_vector(vector<int> &ans){
			for(int i=0; i<ans.size(); i++){
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}
		void create_max_heap(vector<int> &ans,priority_queue< int,vector<int>,greater<int> > &heap){
			for(int i=0; i<ans.size(); i++){
				heap.push(ans[i]);
			}
		}
		void print_heap(priority_queue< int,vector<int>,greater<int> > &heap){
			while(!heap.empty()){
				cout<<heap.top()<<" ";
			    heap.pop();
			}
			cout<<endl;
		}
};
main(){
	solution s1;
	vector<int> ans;
	priority_queue<int,vector<int>,greater<int> > m_heap;
	vector<int> one_array;
	one_array.push_back(10);
	one_array.push_back(5);
	one_array.push_back(6); 
	one_array.push_back(2);
	vector<int> one_array1;
	one_array1.push_back(12);
	one_array1.push_back(7);
	one_array1.push_back(9); 
	s1.merge_array(one_array,one_array1,one_array.size()-1,one_array1.size()-1,ans);
	sort(ans.begin(),ans.end(),greater<int>());
	s1.print_vector(ans);
	s1.create_max_heap(ans,m_heap);
	s1.print_heap(m_heap);
}
