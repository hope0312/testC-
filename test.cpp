#include<iostream>
#include<list>
using namespace std;
int main()
{
	int y[] = {1,2,3,4,5,6,7,8,9};
	for (auto i : y)
	  cout << y[i] << endl;
	return 0;
}
