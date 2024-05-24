#include<iostream>
using namespace std;
class Polygon{
	protected:
		int w,h;
	public:
		void setValue(int w, int h){
			this->w = w;
			this->h = h;
		}
		virtual int area(){
			return 0;
		};
};

class Rectangle: public Polygon{
	public:
		int area(){
			return w*h;
		}
};

class Triangle: public Polygon{
	public:
		int area(){
			return w*h/2;
		}
};

int main(){
	Polygon *p;
	Triangle tri;
	Rectangle rec;
	p = &tri;
	p->setValue(4,5);
	int t = p->area();
	cout<<"t= "<<t<<endl;
	p = &rec;
	p->setValue(4,5);
	t = p->area();
	cout<<"m= "<<t;
	
	return 0;
}

