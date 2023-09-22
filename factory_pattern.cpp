#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw()=0;
};
class rectangle : public shape{
	public:
		void draw(){
			cout<<"draw rectangle"<<endl;
		}
};
class circle : public shape{
	public:
		void draw(){
			cout<<"draw circle"<<endl;
		}
};
class call_shape{
	public:
		call_shape(string str){
			if(str=="rectangle"){
				rectangle * rec=new rectangle;
				rec->draw();
			}
		}
		call_shape(string str,int num){
			if(str=="circle"){
				circle *cir=new circle;
				cir->draw();
			}
		}
};
main(){
	call_shape *call=new call_shape("rectangle");
	call_shape *cal=new call_shape("circle",0);
	}