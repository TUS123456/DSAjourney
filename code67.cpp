#include<iostream>
using namespace std;
int f(int x, int *py, int **ppz) {
    cout<<x<<" "<<*py<<" "<<**ppz<<endl;
	int y, z;
    **ppz += 1;
    z = **ppz;
	cout<<z<<endl;
	*py += 2;
    y = *py;
    cout<<y<<endl;
    x += 3;
   cout<<x<<endl;
	return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout<<c<<" "<<*b<<" "<<**a<<endl;
	cout << f(c, b, a);
    return 0;
}

