#include<iostream>
using namespace std;
class drive_Strategy{
	public:
		virtual void  drive(){
			cout<<"normal drive drive strategy"<<endl;
		}
};
class normal_drive : public drive_Strategy{
	public:
		void drive();
};
class special_drive : public drive_Strategy{
	public:
		void drive(){
			cout<<"special drive"<<endl;
		}
};

class vehical{
	drive_Strategy *drv_stra;
	public:
		void set_drive_strategy(drive_Strategy * strategy){
			this->drv_stra=strategy;
		}
};
main(){
	vehical vhl;
	vhl.set_drive_strategy(new normal_drive);
	
}
