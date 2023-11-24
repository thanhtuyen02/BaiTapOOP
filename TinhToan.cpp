#include <iostream>
using namespace std;
class  tinh{
	int a, b;
	public:
		tinh(int a, int b){
			this->a = a;
			this->b = b; 
		} 
		int cong(){
			return a + b; 
		} 
}; 


int main(){
	int a, b;
	cin>>a>>b;
	tinh m(a, b);
	int k = m.cong();
	cout<<k;
	return 0;
} 
