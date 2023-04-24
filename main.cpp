#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int d = 1;

	cout << (a != b) << endl;
	cout << !c << endl;
	cout << (c && d) << endl;    //加小括号提升运算优先级
	cout << (c || d) << endl;

	system("pause");
		return 0;
}