//�����#1���ж�����
/*
#include<iostream>
using namespace std;
int main()
{
	int year = 0;
	cin >> year;
	if (year % 4 == 0){
		if (year % 100 == 0 && year % 400 != 0)
			cout << "N" << endl;
		else if (year % 3200 == 0)
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}
	else
		cout << "N" << endl;
	return 0;
}
*/
//�����#2���ܱ�3,5,7��������
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0;//ѭ������
	int n;//nΪ�������
	while (cin >> n){
		for (i = 3; i <= 7; i = i + 2){//�ж�������ܱ�3,5,7�е��ļ�������
			if (n%i == 0)
				cout << i << " ";
		}
		if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
			cout << "n" << endl;
		cout << endl;
	}
	return 0;
}
*/

//���#3����Զ����
/*
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	double x[10], y[10];//�����������飬�ֱ�洢��x,y������
	float temp = 0, biggest = 0;
	for (int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
	}
	//��ѡ�����򷨣������ֵ
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			temp = sqrt((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]));
			if (temp>biggest){
				biggest = temp;
			}
		
		}
	}
	cout << fixed << setprecision(4) << biggest << endl;
	return 0;
}
*/

//�����#4���򵥼�����
/*
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	char c;
	cin >> x >> y>>c;
	if (y != 0)
	{
		switch (c)
		{
		case '+':cout << (x + y) << endl; break;
		case '-':cout << (x - y) << endl; break;
		case '*':cout << (x*y) << endl; break;
		case '/':cout << (x / y) << endl; break;
		default:cout << "Invalid operator!" << endl;
		}
	}
	else
		cout << "Divided by zero!" << endl;
	return 0;
}
*/


//�����#5���ַ�������
#include<iostream>
using namespace std;
int main()
{
	char str[14] = { 0 }, substr[4] = { 0 };
	while (cin >> str >> substr)
	{
		int i = 0, posbiggest = 0;
		char strbiggest = 0;
		while (str[i])
		{
			if (str[i] > strbiggest)
			{
				posbiggest = i;
				strbiggest = str[i];
			}
			i++;
		}
		for (int j = 9; j > posbiggest; j--)
		{
			str[j + 3] = str[j];
		}
		str[posbiggest + 1] = substr[0];
		str[posbiggest + 2] = substr[1];
		str[posbiggest + 3] = substr[2];
		cout << str << endl;
	}
	return 0;
}