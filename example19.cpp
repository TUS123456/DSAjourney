#include<iostream>
using namespace std;
template <class X>class Arraylist{
	private:
		struct controlblock{
			int capacity;
			X *arr_ptr;
		};
		controlblock *s;
    public:
    	Arraylist(int  capacity){
    		s=new controlblock;
    		s->capacity=capacity;
    		s->arr_ptr=new X[s->capacity];
		}
		void insert_value(int index,X data){
			if(index<=0&&index <=s->capacity-1){
				s->arr_ptr[index]=data;
			}
			else{
			cout<<"index is not valid";
		}
	}
		void view_data(int index,X &data){
			if(index<=0&&index <=s->capacity-1)
				data=s->arr_ptr[index];
			else
			{
				cout<<"index not valid";
			}
		}
		void display_list(){
			for(int i=0; i<=s->capacity-1; i++){
				cout<<"\n"<<s->arr_ptr[i];
			}
		}
		void display(X data){
			cout<<data;
		}
};
int main(){
    int data;
    Arraylist <float>s(4);
	s.insert_value(0,2.5);
    s.display_list();
	return 0;
}
