#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
	int x, y, z;
	cout << " Input nilai x = ";
	cin >> x;
	
	cout << "input nilai y = ";
	cin >> y;
	
	if (x > y) {
		z = y - x;
		cout<<abs ( z )<<endl;
		cout<<"hasil positif";
	}
	
	else if (y > x) {
		z = x -y;
		cout<<abs (z)<<endl;
		cout<<"Hasil Positif";	
	}
	
	else if (z < 0) {
		z = z * (-1) ;
		cout<<abs (x-y)<<endl;
		cout<<"Hasil positif";
	}	
}
