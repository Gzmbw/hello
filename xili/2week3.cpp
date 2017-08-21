//递归例子:了解递归的过程
/*
#include<iostream>
using namespace std;
int recur()
{
	char c;
	c = cin.get();
	if (c != '\n')
		recur();
	cout << c;
	return 0;
}
int main()
{
	recur();
	return 0;//输入abc输出cba,可以利用递归的过程
}
*/

//递归例题2 模拟连续发生的动作
//进制转换
/*
#include<iostream>
using namespace std;
void conver(int x)
{
	if ((x / 2) != 0)
	{
		conver(x / 2);
		cout << x % 2;
	}
	else
		cout << x;
}
int main()
{
	int x;
	cin >> x;
	conver(x);
	return 0;
}
*/
//汉诺塔问题
/*
#include<iostream>
using namespace std;
void move(int m, char x, char y, char z)
{
	if (m == 1)
	{
		cout << "把一个盘子从" << x << "移动到" << z << endl;
	}
	else
	{
		move(m - 1, x, z, y);
		cout << "把一个盘子从" << x << "移动到" << z << endl;
		move(m - 1, y, x, z);
	}
}
int main()
{
	int n;
	cout << "请输入盘数n=";
	cin >> n;
	cout << "在三根柱子上移" << n << "只盘的步骤为：" << endl;
	move(n, 'A', 'B', 'C');
	return 0;
}
*/

//
