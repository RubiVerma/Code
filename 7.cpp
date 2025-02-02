#include<iostream>
using namespace std;
class student{
	public:
		int id;
		string name;
		student(int i=0,string n=" "):id(i),name(n){
		}
		void insert (int i,string n){
			id =i;
			name= n;
		}
		void display(){
		cout<<id<<" "<<name<<endl;
	}
};
int main (){
	student s1;
	student s2;
	s1.insert(201,"Umang");
	s2.insert(202,"Yogesh");
	s1.display();
	s2.display();
	return 0;
	}

