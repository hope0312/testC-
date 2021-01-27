#include<iostream>
using namespace std;
int add_up(int , int);
int find_max(int , int);
int main (void)
{
	int x , y , sum , max;
	cout << "input x and y " << endl;
	cin >> x >> y;
	sum = add_up(x , y);
	cout << "sum = " << sum << endl;
	max = find_max(x , y);
	//cout << "max number is" << max <<endl;
	system("PAUSE");
	return 0;
}

int add_up(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
	//return (x + y);
}

int find_max(int x , int y)
{
	if (x>y){
		cout << "MAX = " << x << endl;
    }
	else if(x<y){
		cout << "MAX = " << y << endl;
	}
	else {
		cout << "MAX = " << x << " , " << "MAX = " << y << endl;
	}
	// if (x >= y) return x;
	// else return y;
}
