//�ݹ�����:�˽�ݹ�Ĺ���
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
	return 0;//����abc���cba,�������õݹ�Ĺ���
}
*/

//�ݹ�����2 ģ�����������Ķ���
//����ת��
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
//��ŵ������
/*
#include<iostream>
using namespace std;
void move(int m, char x, char y, char z)
{
	if (m == 1)
	{
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl;
	}
	else
	{
		move(m - 1, x, z, y);
		cout << "��һ�����Ӵ�" << x << "�ƶ���" << z << endl;
		move(m - 1, y, x, z);
	}
}
int main()
{
	int n;
	cout << "����������n=";
	cin >> n;
	cout << "��������������" << n << "ֻ�̵Ĳ���Ϊ��" << endl;
	move(n, 'A', 'B', 'C');
	return 0;
}
*/

//
