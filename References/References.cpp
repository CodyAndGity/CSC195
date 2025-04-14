#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int i1 = 5;
	int i2 = 20;
	int* p1 = &i1;
	

	int& r1 = i1;
	//cout << &r1 << endl;
	//cout << &i1 << endl;
	r1 = 10;
	/*cout << r1 << endl;
	cout << i1 << endl;*/

	cout << "i1: " << i1 <<" i2: "<<i2<< endl;
	swap(&i1, &i2);
	cout << "i1: " << i1 <<" i2: "<<i2<< endl;
	swap(i1, i2);
	cout << "i1: " << i1 <<" i2: "<<i2<< endl;



	for (int i = 0;i < 1000;i++) {
		cout << *p1++ << endl;
	}
}