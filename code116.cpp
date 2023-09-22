#include<iostream>
using namespace std;
class stack{
     public:
     int *arr;
     int top;
     int size;
     stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
     }
     void push(int data){
        if(size- top > 1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
     }
     void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<endl<<"under flow";
        }
     }
     int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty";
            return -1;
        }
     }
     bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if(top>=size){
            return true;
        }
        else{
            return false;
        }
    }
};
main(){
   stack st(5);
}