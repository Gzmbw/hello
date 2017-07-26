//函数指针的例题
/*
#include<stdio.h>
void printmin(int a, int b)
{
	if (a < b)
		printf("%d", a);
	else
		printf("%d", b);
}
int main()
{
	void(*pf)(int, int);
	int x = 4, y = 5;
	pf = printmin;
	pf(x, y);
	return 0;
}
*/

//引用例题
/*
#include<stdio.h>
int main()
{
	int a = 3;
	int &c = a;//c引用了a，某个变量的引用等价于这个变量，相当于给这个变量起了一个别名
	printf("%d,%d", a, c);
	c = 5;//注意修改别名的值就把原来名的值也修改了
	printf("%d,%d", a, c );
	return 0;
	
}
*/
//利用引用来交换值
/*
#include<stdio.h>
#include<stdlib.h>
void swap(int &a, int &b)
{
	int tmp;
	tmp = a; a = b; b = tmp;
}
int main(void)
{
	int n1=0, n2=0;
	scanf_s("%d%d", &n1, &n2);
	swap(n1, n2);
	printf("%d %d", n1, n2);
	return 0;
}
*/
//函数做为函数的返回值
/*
#include<iostream>
using namespace std;
int n = 4;
int &setvalue()
{
	return n;
}
int main()
{
	setvalue() = 40;
	cout << n;
	return 0;
}
*/

//类的例子  设置宽和高，计算面积和周长
/*
#include<iostream>
using namespace std;
class crectangle//类定义
{
public:int w, h;//public
	   void init(int w_, int h_)
	   {
		   w = w_; h = h_;
	   }
	   int area()
	   {
		   return w*h;
	   }
	   int perimeter()
	   {
		   return 2 * (w + h);
	   }
};
int main()
{
	int w, h;
	crectangle r;//r是一个对象
	cin >> w >> h;
	r.init(w, h);
	cout << r.area() << endl << r.perimeter();
	return 0;
}
*/
