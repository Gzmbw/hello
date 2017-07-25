//字符串指针的例子
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a[] = "How are you?", b[20];
	char *p1, *p2;
	for (p1 = a, p2 = b; *p1 != '\0'; p1++, p2++)
		*p2 = *p1;
	*p2 = '\0';
	cout << "string a is:" << a << endl;
	cout << "string b is:" << b << endl;
	return 0;
}
*/

//输出字符串指针
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 5;
	int *pa = &a;
	int b[6] = { 1, 2, 3, 4, 5, 6 };
	int *pb = b;
	char c[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	char *pc = c;

	char d[6] = { 'h', 'e', 'l', 'l', 'o' };
	char *pd = d;
	cout << a << endl;
	cout << pa << endl << endl;

	cout << b << endl;
	cout << pb << endl << endl;

	cout << c << endl;//是输出的内容
	cout << pc << endl << endl;//是输出内容

	cout << d << endl;
	cout << pd << endl << endl;

	int e[6] = { 1, 2, 3, 4, 5, 6 };
	int *pe = e;
	cout << e << endl;
	cout << pe << endl;

	return 0;
}
*/

//用指针操作字符串
/*
#include<iostream>
using namespace std;
int main()
{
	char buffer[10] = "ABC";
	char *pc;
	pc = "hello";//可以把字符串赋给指针，但不可以给字符数组；但是不能通过指针pc去修该字符串hello的值，因为hello在这里是常量
	cout << pc << endl;
	pc++;
	cout << pc << endl;
	cout << *pc << endl;
	pc = buffer;
	cout << pc;
	return 0;
}
*/



