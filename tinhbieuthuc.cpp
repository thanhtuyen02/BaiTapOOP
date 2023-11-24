#include <iostream>
#include <cmath> 
using namespace std;
class bthuc{
	int  a, b, c, d;
	public:
		bthuc(int a, int b, int c, int d){
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
		}
		int tinh(){
			return a+(b- abs(c))*d; 
		} 
		 
}; 
int main(){
	int a, b, c, d;
	bthuc m(3, 4, -5, 6);
	int k= m.tinh();
	cout<<"Ket qua la: "<<k; 
	return 0; 
} 
