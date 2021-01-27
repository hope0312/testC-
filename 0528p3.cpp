#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout << "輸入正整數\n";
	cin >> n ;
	
	int i ;
	for (i=1; i<=n ; i++){
		cout << i << endl;
	}
	system("PAUSE");
	return 0;	
}

/* 直接在for裡面宣告int但僅僅只在for裡面，出for就沒用了，需要這個值才宣告 
for (int i=1; i<=n ; i++){
		cout << i << endl;
*/
