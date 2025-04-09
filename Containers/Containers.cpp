#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;
#include "ContainersDemo.h"




int main() {
	ContainersDemo demo;
	cout << "---array class demo---" << endl;
	demo.arrayClassDemo();
	cout << "---vector demo---" << endl;
	demo.vectorDemo();
	
	cout << "---list demo---" << endl;
	demo.listDemo();

	cout << "---map demo---" << endl;
	demo.mapDemo();
	




	

	/*
	//demo code
	int i=0xff;
	int x[] = { 1 };

	char arr[5] = { 'H','E','L','L','O'};

	for (int i = 0; i < 5; i++)
	{
		cout << (void*)(&arr[i]) << endl;
	}
	cout << (void*)(&arr[0]) << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << (void*)(&arra[i]) << endl;
	}

	array<int,5> arra = { 1,2,3,4,5 };
	
	for (int i = 0; i < 5; i++)
	{								  
		//cout << arra[i] << endl;	  
	}								  
	//cout << arra.size() << endl;


	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	stack<int > s;
	s.push(1111111);
	s.push(2222222);
	s.push(3333333);
	s.pop();
	//cout << s.top() << endl;
	for (auto iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << endl;
	}
	//fast to iterate through, slow to insert(in the middle of)

	list<int> lst = { 1,2,3,4,5 };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);
	//fast to insert, slow to iterate through
	//list<int>::iterator iter = lst.begin();
	for (auto iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout << *iter << endl;
	}
	
	//ordered
	map<string, int> m;
	m["riley"] = 46;
	m["Maple"] = 0;
	cout << m["riley"] << endl;	
	//map is fast for retrevial
	for (auto iter = m.begin(); iter != m.end(); iter++){
		cout << iter->first << " " << iter->second << endl;
	}

	//unordered
	unordered_map<string, string> um;
	um["riley"] = "bobus";
	um["Maple"] = "Daple";
	um["Issac"] = "Isaaac";
	cout << um["riley"] << endl;
	for (auto iter = um.begin(); iter != um.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}
	*/

	
}