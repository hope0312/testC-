#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main ()
{
	int x , y;
	cout << "input an integer\n";
	cin >> x;
	printf("input an integer\n");
	scanf("%d" , &y);
	int sum;
	sum = x + y;
	printf("x = %d , y = %d , sum = %d\n",x,y,sum);
	cout << "x = " << x << " , y = " << y << " , sum = " << sum << endl;
	
	system("pause");
	return 0;
}
// C與C++融合使用cout cin printf scanf都使用到 
