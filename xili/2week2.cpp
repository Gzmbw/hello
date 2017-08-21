//例子
/*
#include<iostream>
using namespace std;
int absolute(int n)
{
	if (n < 0)
		return (-n);
	else
		return n;
}
int main()
{
	int m = -123, result = 0;
	result = absolute(m);
	cout << result;
	return 0;
}
*/

//例2
/*
#include<iostream>
using namespace std;
int i = 0;
void sum()
{
	
	cout << i << endl;
}
int main()
{
	cin >> i;
	
	cout << i << endl;
	cout << "ha " << endl;
	sum();
	return 0;
}
*/

//编程题#1：寻找下标
/*
#include<iostream>
using namespace std;
int main()
{
	int n;//n表示数组元素的个数
	int i;//循环变量
	int s[100];//用来存储数据
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> s[i];
	for (i = 0; i < n; i++){
		if (s[i] == i){
			cout << i << endl;
			break;
		}
	}
	cout << "N" << endl;
	return 0;
}
*/

//编程题#2：四大湖
/*
#include<iostream>
using namespace std;
int main()
{
	int DT, HZ, PY, TH;
	bool flag = false;
	for (DT = 1; DT <= 4 && !flag; DT++)
	{
		for (HZ = 1; HZ <= 4 && !flag; HZ++)
		{
			if (DT == HZ)
				continue;
			else
			    for (PY = 1; PY <= 4 && !flag; PY++)
			{
					if (PY == DT || PY == HZ)
						continue;
					else
					{
						TH = 10 - DT - PY - HZ;
						if (((DT == 1) + (HZ == 4) + (PY == 3)) == 1 && ((HZ == 1) + (DT == 4) + (PY == 2) + (TH == 3)) == 1 && ((HZ == 4) + (DT == 3)) == 1 && ((PY == 1) + (TH == 4) + (HZ == 2) + (DT == 3)) == 1)
						{
							cout << PY << endl;
							cout << DT << endl;
							cout << TH << endl;
							cout << HZ << endl;
							flag = true;
						}
					}

			}
		}
	}
	return 0;
}
*/

//编程题#3：发票统计
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a[3][3] = {0};
	for (int i = 0; i < 3; i++)
	{
		int ID;
		cin >> ID;
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			char l = 0;
			float price = 0;
			cin >> l >> price;
			switch (l)
			{
			case 'A':a[ID - 1][0] += price; break;
			case 'B':a[ID - 1][1] += price; break;
			case 'C':a[ID - 1][2] += price; break;
			default:break;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 <<"\t" ;
		cout << fixed << setprecision(2) << a[i][0] + a[i][1] + a[i][2] << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << (char)(i + 65) << "\t";
		cout << fixed << setprecision(2) << a[0][i] + a[1][i] + a[2][i] << endl;
	}
	return 0;
}
*/

//编程题#4：tomorrow never knows?
/*
#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>
using namespace std;

bool isleapyear(int year)
{
	bool isleap = false;
	if (year % 100 == 0 && year % 400 == 0)
		isleap = true;
	if (year % 4 == 0 && year % 100 != 0)
		isleap = true;
	return isleap;
}
int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	int month_data[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (day >= month_data[month - 1])
	{
		if (month == 12)
		{
			year++;
			month = 1;
			day = 1;
		}
		else if (month == 2)
		{
			if (isleapyear(year) && day == 28)
				day = 29;
			else
			{
				month++;
				day = 1;
			}
		}
		else
		{
			month++;
			day++;
		}

	}
	else
		day++;
	cout << year << "-" << month << "-" << day << endl;
	return 0;
}
*/