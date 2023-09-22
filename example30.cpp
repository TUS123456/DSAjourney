#include<iostream>
using namespace std;
struct s{
		int array[5];
		int *top;
};
s *stack=NULL;
int size=sizeof(struct s->array)/sizeof(struct s->array[0]);
int convert(int x){
	int r;
	if(s->top==size){
		return 1;
	}
	else{
	while(s->top != size){
		 r=change(x)
	}
	}
	return r;
}
int change(int x){
	if( x != 0){
		array[s->top]=x%2;
		s->top=s->top+1;
		x=x/2;
	}
	return s->array;
}

