//�ַ�������
//��ȷ�ĸ�ֵ��ʽ
/*
#include<iostream>
using namespace std;
int main()
{
	char str1[] = "c++language", str2[20];
	int i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	cout << "string1: " << str1 << endl;//����ֱ��д�ַ���������
	cout << "string2: " << str2 << endl;
	return 0;
}
*/
//����2
/*
#include<iostream>
using namespace std;
int main()
{
	float grade;
	cout << "enter grade: ";
	while (cin >> grade)//�ܴ�cin����ȡ����
	{
		if (grade >= 85)
			cout << grade << "GOOD" << endl;
		if (grade < 60)
			cout << grade << "fail!" << endl;
		cout << "enter grade: ";
	}
	return 0;
}
*/
//һ���ַ�������
/*
#include<iostream>
using namespace std;
int main()
{
	char a[10][10];
	int n = 0;
	cin >> n;
	cin.get();//���һ�����
	for (int i = 0; i < n; i++)
		cin.getline(a[i], 10);
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	return 0;
}
*/
//�ַ�������
/*
#include<iostream>
using namespace std;
int main()
{
	char str[200];
	while (cin.getline(str, 200))
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == 'Z'){
				str[i] = 'A'; continue;
			}
			if (str[i] == 'z'){
				str[i] = 'a'; continue;
			}
			if (str[i] == ' ')
				continue;
			str[i]++;
		}
		cout << str << endl;
	}
	return 0;
}
*/

//�ַ�������
//���⣺���������ַ����������н϶̵Ĵ����ӵ��ϳ��Ĵ��ĺ��档Ҫ�󣺲�ʹ��ϵͳ����strcat
/*
#include<iostream>
using namespace std;
int main()
{
	int len1, len2;
	char str1[40], str2[40];
	cin.getline(str1, 20);
	cin.getline(str2, 20);
	for (len1 = 0; str1[len1] != '\0'; len1++);
	for (len2 = 0; str2[len2] != '\0'; len2++);
	if (len1 > len2){
		for (len2 = 0; str2[len2] != '\0'; len2++)
			str1[len1++] = str2[len2];
		str1[len1] = '\0';
	}
	else
	{
		for (len1 = 0; str2[len1] != '\0'; len1++)
			str2[len2] = '\0';
	}
	cout << str1 << endl;
	cout << str2 << endl;
	return 0;
}
*/

//ͳ�Ƶ�����
//���⣺����һ��Ӣ�ľ��ӣ�ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�
/*
#include<iostream>
using namespace std;
int main()
{
	char str[80];
	int num = 0, flag = 0;
	cin.getline(str, 80);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			num++;
		}
	}
	cout << "�ַ�������" << num << "������" << endl;
	return 0;
}
*/
