#include<iostream>
using namespace std;
class paymentStrategy{
	public:
		virtual void pay(int amount)=0;
};

class creditcardpayment : public paymentStrategy{
	public:
		void pay(int amount){
			cout<<"creditcardpayment"<<":"<<amount<<endl;
		}
};
class paytmpayment : public paymentStrategy{
	public:
		void pay(int amount){
			cout<<"paytmpayment"<<":"<<amount<<endl;
		}
};
class cash_payment : public paymentStrategy{
	public:
		void pay(int amount){
			cout<<"cash_payment"<<":"<<amount<<endl;
		}
};

class shopping_cart{
	private:
		paymentStrategy *ps;
	public:
	    void set_payment_strtegy(paymentStrategy *pymstr){
	  	this->ps=pymstr;
	    }
	    
	    void pay(int amount){
	    	this->ps->pay(amount);
		}
};

main(){
	shopping_cart crt;
	
	
	crt.set_payment_strtegy(new cash_payment);
	crt.pay(200);
}