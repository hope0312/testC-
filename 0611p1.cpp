#include<iostream>
using namespace std;
int add_up(int , int);
int main()
{
	int x , y , sum;
	cout << "輸入兩個正整數\n";
	cin >> x >> y;
	sum = add_up(x,y);
	cout << sum << endl;
	system("PAUSE");
	return 0 ;
}

int add_up(int x , int y)
{
	int sum;
	sum = x + y;
	return sum;
	//return x+y;
}
