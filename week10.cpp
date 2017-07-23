//二维数组的初始化
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 12, 13 } };
	for (int i = 0; i < 3; i++)//i和j为临时变量
	{
		for (int j = 0; j < 4; j++)
			cout << setw(3) << a[i][j];//setw(3)表示输出控制符，含义保证后面输出的数占3个字符位
		cout << endl;
	}
	return 0;
}
*/
//数组用作数字统计的例子
//描述：某学校有1000位老师，分布在20个不同的学院中，每个学院最多12个系，请你编写一个程序输入每位老师的所在院、系的编号（院编号1-20，系编号1-12），打印出各个系老师的数量
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int teacher[21][13];
	int school=0, department=0;
	int i=0, j=0;
	char name[30];
	for (i = 0; i < 1000; i++)
	{
		cin >> name >> school >> department;
		teacher[school][department]++;
	}
	for (i = 1; i < 21;i++)
	  for (j = 1; j < 13; j++)
		cout << setw(4) << teacher[i][j];
	cout << endl;
	return 0;

}
*/
//找出素数的两种方法
/*
#include<iostream>
using namespace std;
int main()
{
	bool prime = true;
	for (int i = 0; i < 100; i++)
	{
		prime = true;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
				prime = false;
		}
		if (prime == true)
			cout << i << endl;
	}
	return 0;
}
*/
//方法二：思路将所有元素设置为0，筛选所有合数，分别计算2,3,4,5，....，99自我相加多次的数值，每次计算得到的结果都是一个合数，在数组中标记该数字被刷掉，每次计算过程中，只要相加结果没有达到100就继续自我相加。根据标记输出所有没有被刷掉的数字
/*
#include<iostream>
using namespace std;
int main()
{
	int sum = 0, a[100] = { 0 };
	for (int i = 2; i < 100; i++)
	{
		sum = i;
		while (sum < 100)
		{
			sum = sum + i;
			if (sum < 100)
				a[sum] = 1;
		}
	}
	for (int i = 2; i < 100; i++)
	{
		if (a[i] == 0)
			cout << i << " ";
	}
	return 0;
}
*/
//编程题#1：求字母的个数
//描述：在一个字符串中找出元音字母a,e,i,o,u出现的次数
/*
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
	int i=0;
	char s[80] = {0};//存储字符串
	int sum[5] = {0};//记录a,e,i,o,u字母出现的个数
	cin.getline(s, 80);
	while (s[i] != 0 && i < 80)
	{
		switch (s[i])
		{
		case 'a':sum[0]++; break;
		case 'e':sum[1]++; break;
		case 'i':sum[2]++; break;
		case 'o':sum[3]++; break;
		case 'u':sum[4]++; break;
		default:break;
		}
		i++;
	}
	cout <<  sum[0]<<"\t" << sum[1]<<"\t" << sum[2]<<"\t" << sum[3]<<"\t" << sum[4] ;
	cout << endl;
	return 0;
}
*/

//编程#2：忽略大小写比较字符串大小
//思路：一个字符串中有大写有小写，可以把这两个字符串中的字母都转换成小写，然后再去比较
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i = 0,j=0;//循环变量
	char s1[80] = { 0 };//用来存储两个字符串
	char s2[80] = { 0 };
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	//把字符串s1中的字母都转换成小写字母
	for (i = 0; i < 80; i++){
		if ((s1[i] >= 65)&&(s1[i] <= 90))
			s1[i]+=32;
		//cout << s1[i] ;
	}
	//把字符串s2中的字母都转换成小写字母
	for (j = 0; j< 80; j++){
		if ((s2[j] >= 65) && (s2[j] <= 90))
			s2[j] += 32;
	//	cout << s2[j] ;
	}
    //比较字符串的大小
	if (strcmp(s1, s2)>0)
		cout << ">" << endl;
	else if (strcmp(s1, s2) < 0)
		cout << "<" << endl;
	else
		cout << "=" << endl;
	return 0;
}
*/
//编程题#3：最长单词2
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	char sentence[500] = { 0 }, word[50] = { 0 };
	cin.getline(sentence, 500);
	int j = 0, sizeword = 0;
	while (i < 500 && sentence[i] != '.')
	{
		if (sentence[i] == ' ')
		{
			if (j>sizeword)
			{
				sizeword = j;
				for (int k = 0; k < j; k++)
				{
					word[k] = sentence[i - j + k];
				}
			}
			j = 0;
		}
		else
		{
			j++;
		}
		i++;
	}
	if (sentence[i] == '.')
	{
		if (j > sizeword)
		{
			for (int k = 0; k < j; k++)
				word[k] = sentence[i - j + k];
		}
	}
	cout << word << endl;
	return 0;
}
*/

//编程题#4：矩阵交换行
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[5][5] = { 0 };
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cin >> a[i][j];
		}
	}
	int n = 0, m = 0;
	cin >> n >> m;
	if (n >= 0 && n <= 4 && m >= 0 && m <= 4){
		int temp[5] = { 0 };
		for (int i = 0; i < 5; i++){
			temp[i] = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = temp[i];
		}
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				cout << setw(4) << a[i][j];
			}
			cout << endl;
		}
	}
	else
		cout << "error" << endl;
}
*/
//编程题#5：异常细胞检测
/*
#include<iostream>
using namespace std;
int main()
{
	int sample[100][100];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> sample[i][j];
		}
	}
	int cellx = 0;
	for (int i = 1; i < N - 1; i++){
		for (int j = 1; j < N - 1; j++){
			if (sample[i][j] <= sample[i - 1][j - 1] - 50 && sample[i][j] <= sample[i + 1][j] - 50 && sample[i][j] <= sample[i][j - 1] - 50 && sample[i][j] <= sample[i][j + 1] - 50){
				cellx++;
			}
		}
	}
	cout << cellx << endl;
	return 0;
}
*/
