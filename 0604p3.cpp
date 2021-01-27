#include<iostream>
using namespace std;
int main ()
{
	for (int i = 1 ; i <= 9 ; i++){
		for (int j = 1 ; j <= 9 ; j++ ){
		if (i*j/10 <=0){
		  cout.width(2);
		  cout  << j << "*" << i << "=" <<0<<i*j;
		}
		else{
		  cout.width(2);
		  cout  << j << "*" << i << "=" << i*j;	
		}	
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
