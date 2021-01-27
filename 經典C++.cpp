#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>

double getmin (double, double);
double getmin (double[], int);
using namespace std;
int main ()
{
	double a=21.3 , b=14.8;
	cout << a <<"和" << b << "最小的數值為 " << getmin(a,b) << endl << endl;
	double f[] = {12.1 , 54.33 , 7.2 , 40 , 65.1};
	cout << "陣列元素 [12.1 , 54.33 , 7.2 , 40 , 65.1]中最小的數值為"  << getmin(f,5)  << "\n\n";
	system ("PAUSE");
	return 0;
}

double getmin (double x , double y)
{
	return x<y ? x:y;
}

double getmin (double varray[],int n)
{
	double min =varray[0];
	for (int i =1 ; i <n-1 ; i++){
		if(varray[i]<min)
		min = varray[i];
	}
	return min;
}
