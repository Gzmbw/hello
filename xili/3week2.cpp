//����ָ�������
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

//��������
/*
#include<stdio.h>
int main()
{
	int a = 3;
	int &c = a;//c������a��ĳ�����������õȼ�������������൱�ڸ������������һ������
	printf("%d,%d", a, c);
	c = 5;//ע���޸ı�����ֵ�Ͱ�ԭ������ֵҲ�޸���
	printf("%d,%d", a, c );
	return 0;
	
}
*/
//��������������ֵ
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
//������Ϊ�����ķ���ֵ
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

//�������  ���ÿ�͸ߣ�����������ܳ�
/*
#include<iostream>
using namespace std;
class crectangle//�ඨ��
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
	crectangle r;//r��һ������
	cin >> w >> h;
	r.init(w, h);
	cout << r.area() << endl << r.perimeter();
	return 0;
}
*/
