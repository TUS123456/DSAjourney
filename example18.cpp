#include<iostream>
using namespace std;
class shape{
	protected:
		int length,breadth;
		float area;
	public:
	virtual float AREA()=0;
    void set_dimension(int x,int y){
	 length=x;
	 breadth=y;
	}
	void show_area(){
		cout<<area;
	}
};
class rectangle:public shape{
	public:
		float AREA(){
			area=length*breadth;
			return area;
		}
};
class triangle:public shape{
		public:
		float AREA(){
			area=(length*breadth)/2;
			return area;
		}
};

main(){
	triangle t;
	t.AREA();
    rectangle r;
	r.AREA();
}
