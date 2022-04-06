#include <iostream>
using namespace std;

class a
{
public:
	void print()
	{
		cout << "µ¥Çì\n";
	}
};
class b :public a
{
public :
	void print()
	{
		cout << "ÇìÂm\n";
	 }
};




void main()
{
	b temp;
	temp.print();
}