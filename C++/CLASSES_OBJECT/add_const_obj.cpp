#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo()
		{
			a=5;
		}
		int add(int a)
		{
			this->a += a;
			return this -> a;
		}
};
int main()
{
	demo d;
	cout<<"result = "<<d.add(10);
	return 0;
}
