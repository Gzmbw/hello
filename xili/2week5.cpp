//�ַ���ָ�������
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

//����ַ���ָ��
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

	cout << c << endl;//�����������
	cout << pc << endl << endl;//���������

	cout << d << endl;
	cout << pd << endl << endl;

	int e[6] = { 1, 2, 3, 4, 5, 6 };
	int *pe = e;
	cout << e << endl;
	cout << pe << endl;

	return 0;
}
*/

//��ָ������ַ���
/*
#include<iostream>
using namespace std;
int main()
{
	char buffer[10] = "ABC";
	char *pc;
	pc = "hello";//���԰��ַ�������ָ�룬�������Ը��ַ����飻���ǲ���ͨ��ָ��pcȥ�޸��ַ���hello��ֵ����Ϊhello�������ǳ���
	cout << pc << endl;
	pc++;
	cout << pc << endl;
	cout << *pc << endl;
	pc = buffer;
	cout << pc;
	return 0;
}
*/



