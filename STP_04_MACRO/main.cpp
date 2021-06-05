#include <iostream>
using namespace std;

#define MAX(a, b, c) {int a_ = (a); int b_ = (b); int c_ = ((((a_) > ((b)) ? (a_) : (b_)))); c = c_;}
int main()
{
	int a = 10;
	int b = 20;
	int c = 10;
	int r = 10, x = 20, y = 30;
	 
	MAX(a, b, c); // теперь c равно 20
	MAX(a += b, b, c); // теперь a = с = 30
	MAX(a += b++, b, c); // теперь a = с = 30
	MAX(a += b, ++b, ++c); // теперь a = с = 30
	MAX(++a -= ++b, b, c++);
	c = MAX(a, b, c);
	
	return 1;
}