// CPP program to illustrate
// power function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x = 6.1, y = 4.8;

	// Storing the answer in result.
	double result = pow(x, y);

	// printing the result upto 2
	// decimal place
    cout<<"result:";
	cout << fixed << setprecision(2) << result << endl;

	return 0;
}
