#include <iostream>
using namespace std;

class a
{
public:
	void print()
	{
		cout << "����\n";
	}
};
class b :public a
{
public :
	void print()
	{
		cout << "���m\n";
	 }
};




void main()
{
	b temp;
	temp.print();
}