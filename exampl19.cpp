 #include<iostream>
 using namespace std;
 class add{
 	int x,y;
 	int sum;
 	int ca=0;
	int r,q;
	public:
 	void jod(int x,int y){
 		sum=x+y+ca;
	    r=sum%10;
	    ca=sum/10;
	    printf("%d %d %d",r,ca,sum);
        }
};
main(){
	add a;
	a.jod(5,5);
}
