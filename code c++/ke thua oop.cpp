#include <bits/stdc++.h>
using namespace std;

class A{
	public:
		int a;
};
class B{
	public:
		int b;
};
class C{
	public:
		int c;
};
class D:virtual public A,public B{
	public:
		int d;
};
class E:virtual public A,public C{
	public:
		int e;
};
class F:public D,public E{
	public:
		int f;
};
int main(){
	F f;
	f.a=1;
	return 0;
}
