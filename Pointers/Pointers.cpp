
#include <iostream>
using namespace std;
void func1() {
	bool b = true;
	int i = 5;
}
void func2() {
	bool b = false;
	float f = 10;
	func1();

}
//void func3() {
//	int i[100000];
//	func3();
//}
class Animal {
public:
	Animal(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
private:
	string name;
};

void setValue(int* v) {
	*v = 5;
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
} 


int main(){
	int i = 5;
	float f = 4.5;
	//func2();
	//func3();
	{
		int* p = new int(5);

		cout << *p << endl;
		delete p;
	}
	Animal* dog =new Animal("Dog");
	cout << dog->getName() << endl;
	//or
	Animal* cat = new Animal("Cat");
	cout << (*cat).getName() << endl;

	delete dog;
	delete cat;

	dog = nullptr;
	if (dog) {
		cout << dog->getName() << endl;
	}
	/*if (dog==nullptr) {
		cout << dog->getName() << endl;
	}*/
	
	/*int* block =(int*)malloc(sizeof(int)*1000);
	block[0] = 3;
	block[1] = 4;
	block[2] = 5;
	block[3] = 6;
	block++;
	cout << *(block+2) << endl;
	free(--block);*/

	int v1 = 10;
	int v2 = 20;

	int* p1= nullptr;
	cout <<p1<<endl;
	p1 = &v1;
	*p1 = 16;
	cout << p1 << endl;
	cout << v1 << endl;
	p1 = &v2;
	*p1 = 42;
	cout << v2 << endl;

	/*setValue(&v2);
	setValue(p1);
	cout << v2 << endl;*/
	cout << v1 <<','<<v2 << endl;
	swap(&v1, &v2);
	cout << v1 <<','<<v2 << endl;
}


