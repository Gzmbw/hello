//ָ��������������
/*
#include<iostream>
using namespace std;
void Rank(int *q1, int *q2)
{
	int temp;
	if (*q1 < *q2){
		temp = *q1;
		*q1 = *q2;
		*q2 = temp;
	}
}
int main()
{
	int a, b, *p1, *p2;
	cin >> a >> b;
	p1 = &a;
	p2 = &b;
	Rank(p1, p2);
	cout << a << " " << b << endl;
	return 0;
}
*/
//��ά����������������
//��һ��3x4�ľ���������Ԫ���е����ֵ
/*
#include<iostream>
using namespace std;
int maxvalue(int(*p)[4])
{
	int max = p[0][0];
	for (int i = 0; i < 3;i++)
		for (int j = 0; j < 4;j++)
			if (p[i][j]>max)
				max = p[i][j];
			return max;
}
int main()
{
	int a[3][4] = { { 1, 3, 5, 7 }, { 9, 11, 13, 15 }, { 2, 4, 6, 8 } };
	cout << "The max value is" << maxvalue(a);
	return 0;
}
*/
//���������β�
/*
#include<iostream>
using namespace std;
int sum(int array[], int n)
{
	for (int i = 0; i < 10 - 1; i++)
	{
		*(array + 1) = *array + *(array + 1);
		array++;//��c++���������β���������Ϊָ�����������
	}
	return *array;
}
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << sum(a, 10);
	return 0;
}
*/
//���ؾ�̬�ֲ�������ָ��
/*
#include<iostream>
using namespace std;
int *getint()
{
	static int valuel=20;//�������static�Ͳ��ܷ���20���ֵ�ˡ����ؾ�̬�ֲ������ĵ�ַ�����Ƕ�̬�ֲ������ĵ�ַ
	return &valuel;
}
int main()
{
	int *p;
	p = getint();
	cout << *p << endl;
	return 0;
}
*/
//��̬�ֲ������붯̬�ֲ�����
/*
#include<iostream>
using namespace std;
void function()
{
	int a = 0;//a�Ƕ�̬�ֲ�����
	static int b = 0;
	a = a + 1;
	b = b + 1;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		function();
		cout << "Call Again!" << endl;
	}
	return 0;
}
*/

