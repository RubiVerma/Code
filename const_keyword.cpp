#include<iostream>
using namespace std;
int main()
{
	const int a = 10;
    int  const *p = &a;
	cout<<*p++;
	return 0;
}
