//ָ���������
/*
#include<iostream>
using namespace std;
int main()
{
	int icount = 18;
	int *iptr = &icount;
	*iptr = 58;
	cout << icount << endl;
	cout << iptr << endl;
	cout << &icount << endl;
	cout << *iptr << endl;
	cout << &iptr << endl;
	return 0;
}
*/

//����2��
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, temp;
	int *p1 = NULL, *p2 = NULL;
	cin >> a >> b;
	p1 = &a;
	p2 = &b;
	if (*p1 < *p2)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;

	}
	cout << "max=" << *p1 << "min=" << *p2 << endl;
	return 0;
}
*/
//ָ�����ʾ��
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	int *p1 = NULL, *p2 = NULL;
	int *temp = NULL;
	cin >> a >> b;
	p1 = &a;
	p2 = &b;
	if (*p1 < *p2)
	{
		temp = p1;
		p1 = p2;
		p2 = temp;
	}
	cout << "max=" << *p1 << "min=" << *p2 << endl;
	return 0;
}
*/
//ָ������Ԫ�ص�ָ��
/*
#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p = &a[3];
	cout << *p << endl;
	//*p = 100;���100
	//*p++;//���5
	//p++;//���5��
	cout << *p << endl;
	return 0;
}
*/

//ָ��������
/*
#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 10, 11, 12, 13, 14 };
	cout << a << endl;
	cout << a++ << endl;//���ִ�����Ϊa++û������
	cout << *a << endl;
	cout << &a[0] << endl;
	cout << a[0] << endl;
	cout << a + 1 << endl;
	cout << *(a + 1) << endl;//�������11
	return 0;
}
*/

//ָ��������
/*
#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 10, 11, 12, 13, 14 };
	int *p = NULL;
	cout << a << endl;
	p = a;
	cout << p << endl;
	cout << *p << endl;
	cout << *p++ << endl;//ע��������a[0]��pָ����a[1]
	cout << *p++ << endl;//����pָ����a[1],����������a[1]
	return 0;
}
*/

//ʹ��ָ����������±�
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
		cin >> a[i];//Ҳ����дΪcin>>*p++;
	for (i = 9; i>0; i--)//for(p--;p>=a;)
		cout << setw(3) << a[i];//cout<<setw(3)<<*p--;
	return 0;
}
*/

//��������Ԫ��
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[10], *p = NULL, *q = NULL, temp;
	for (p = a; p < a + 10; p++)
		cin >> *p;
	for (p = a, q = a + 9; p < q; p++, q--)
	{
		temp = *p; *p = *q; *q = temp;
	}
	for (p = a; p < a + 10; p++)
		cout << setw(3) << *p;
	return 0;
}
*/

//��������Ԫ��
/*
#include<iostream>
using namespace std;
int main()
{
	int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
	int *p;
	for (p = &a[0][0]; p < &a[0][0] + 12; p++)
	{
		cout << p << " " << *p << endl;
	}
	return 0;
}
*/
//���ʶ�ά�����Ԫ��
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
	int(*p)[4], i, j;
	p = a;
	cin >> i >> j;
	cout << setw(4) << *(*(p + i) + j);//����p[i][j]
	return 0;
}
*/

