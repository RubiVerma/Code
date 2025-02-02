#include<iostream>
using namespace std;
class A{
	public:
		const int a =2;
		void fun() {
			int AA=a+10;
		cout<<AA;
		}
};
int main(){
	A A1;

	A1.fun();
	return 0;
}
