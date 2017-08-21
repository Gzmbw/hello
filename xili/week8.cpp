//赋值运算符 进行类型转换
/*
#include<iostream>
using namespace std;
int main()
{
	int int_i = 64.12345;
	char char_i = int_i;
	float float_i = char_i;//会进行类型转化，转变成左边的类型
	bool bool_i = float_i;
	cout << showpoint << int_i << " " << char_i << " " << float_i << " " << bool_i << endl;//注意这里有一个showpoint
	return 0;

}
*/
//如果把长数赋给短数
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*
	long int long_i = 0x2AAAAAAA;
	cout << long_i << endl;
	short short_i = long_i;
	cout << hex << short_i << endl;//dex为十六进制的数
	cout << dec <<short_i << endl;//dec为十进制的数
	*/
	
	//赋值
	/*
	int i = 0;
	cout << (i = 10) << endl;
	cout << (i = i + i) << endl;
	*/
	

	/*
	int i = 1;
	double j = 0;
    j = i;//数据类型不同，会转化为左边的类型
	cout << j << endl;
	cout << showpoint << j << endl;//注意这里加showpoint,不加它的区别
	*/
	
	/*
	int a = 0, b = 0, c = 2, d = 0, e = 2, f = 2;
	cout << a << " " << a++ << " " << endl;//从右到左计算
	cout << ++b << " " << b++ << " " << endl;
	cout << c << " " << (c++) + (++c) << " " << endl;
	cout << (d = f++) + (e = f) << endl;
	cout << f << " " << d << " " << e << endl;

	return 0;
}
*/


//抄写题#1：点评赛车
//描述：4名专家对4款赛车进行评论，A说2号车是最好的；B说4号车是最好的；C说3号车不是最好的；D说B说错了。事实上只有1款车最佳，且只有1名专家说对了，其它3人都说错了；请编程输出最佳的车号，以及说对的专家。
/*
#include<iostream>
using namespace std;
int main()
{
	//用best枚举最好的车
	int best;
	for (best = 1; best <= 4; best++){
		//a b c记录四位专家的话
		bool a = (best == 2);
		bool b = (best == 4);
		bool c = !(best == 3);
		bool d = !b;
		if (a + b + c + d != 1)
			continue;//不符合只有1位专家说对的条件
		            //输出最佳的车
		cout << best << endl;
		//输出判断正确的专家
		if (a == 1)
			cout << "A" << endl;
		else if (b == 1)
			cout << "B" << endl;
		else if (c == 1)
			cout << "C" << endl;
		else
			cout << "D" << endl;
	}
	return 0;
}
*/

//编程题#1：数字求和
//描述：给定一个正整数a，以及另外的5个正整数，问题是：这5个整数中，小于a的整数的和是多少？
//输入一行，只包括6个小于100的正整数，其中第一个正整数就是a。输出一行，给出一个正整数，是5个数中小于a的数的和。
/*
#include<iostream>
using namespace std;
int main()
{
	int i=0,sum=0;//i用于循环变量,sum用于累加和
	int s[10];//用于存储这些数
	for (i = 0; i < 6; i++)
		cin >> s[i];
	for (i = 1; i < 6; i++){
		if (s[i] < s[0])//与第一个数相比较，小于第一个数的这些数求和
			sum = sum + s[i];
	}
	cout << sum << endl;
	return 0;

}
*/

//编程题#2：骑车于走路
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0;//循环变量
	int n;//数据数量
	cin >> n;
	int s[100];//用来存储距离数据
	for (i = 0; i < n; i++)
		cin >> s[i];
	double b = 0, w = 0;//b表示骑自行车车用的时间，w表示步行用的时间
	for (i = 0; i < n; i++){
		b = s[i] / 3.0 + 50;
		w = s[i] / 1.2;
		if (b>w)
			cout << "walk" << endl;
		else if (b <w)
			cout << "bike" << endl;
		else
			cout << "all" << endl;
	}
	return 0;
}
*/

//编程题#3：买房子
/*
#include<iostream>
using namespace std;
int main()
{
	int N = 0, K = 0;
	while (cin >> N >> K){
		float salary = N, price = 200;
		int i = 1;
		while ((salary < price) && (i < 21)){
			salary = salary + N;
			price = price *(1 + (float)K / 100);
			i++;
		}
		if (i>20){
			cout << "impossible" << endl;
		}
		else{
			cout << i << endl;
		}
	}
	return 0;
}
*/

//编程题#4:找和为k的两个元素
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 0;
	int n, k;
	cin >> n >> k;
	int s[1000];
	for (i = 0; i < n; i++)
		cin >> s[i];
	for (i = 0; i < n; i ++){
		for (j = 0; j < n; j++){
			if (s[i] + s[j] == k)
				cout << "yes" << endl;
			break;
		}
		if (i == n)
			cout << "no" << endl;
	}
	return 0;
}
*/

//编程题#5：自然除数
/*
#include<iostream>
using namespace std;
int main()
{
	int n ;//输入一个10到100的数
	cin >> n;
	int a = 0;//用来表示各个位数相加
	int i = 11;//循环变量
	while (i < n){
		a = (i-i%10)/10 + i % 10;
		if ((i%a)==0)
			cout << i << endl;
		i++;
	}
	return 0;
}
*/