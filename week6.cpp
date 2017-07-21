//1 抄写程序：输入有多行，第一行为整数n,表示有n个培养皿，其余n行，每行有三个整数，分别代表培养皿编号，实验前细菌数量，试验后细菌数量。
//输出，有多行，第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。
/*#include<iostream>
using namespace std;
int main()
{
	int n;//n为细菌数量
	//id记录细菌的编号，rate记录细菌的繁殖率，第一个细菌对应id[i]和rate[i]
	int id[100];
	double rate[100];

	cin >> n;
	for (int i = 0; i < n; i++){
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = (double)final / initial;
	}
	//对整个细菌排序
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (rate[j + 1]>rate[j]){
				int tmpId = id[j];
				id[j] = id[j + 1];
				id[j + 1] = tmpId;
				double tmpRate = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = tmpRate;
			}
		}
	}
	//记录最大差
	double maxDiff = 0;
	//和最大差下标
	int maxDiffIndex = 0;
	for (int i = 0; i < n - 1; i++){
		double diff = rate[i] - rate[i + 1];
		if (maxDiff < diff){
			maxDiff = diff;
			maxDiffIndex = i;
		}
		}
		//输出繁殖较大的那组细菌
		cout << maxDiffIndex + 1 << endl;
		for (int i = maxDiffIndex; i >= 0; i--){
		cout << id[i] << endl;
		}
		//输出繁殖率较小的那组细菌
		cout << n - maxDiffIndex - 1 << endl;
		for (int i = n - 1; i >= maxDiffIndex + 1; i--){
		cout << id[i] << endl;
		}
		return 0;
		}
		*/

//编程题#1：苹果和虫子 描述你买了一箱n个苹果，很不幸的是买完是箱子里混进一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
//输入仅一行，包括n,x和y。输出也仅一行，剩下的苹果个数
/*
		#include<iostream>
		using namespace std;
		int main()
		{
		int n, x, y;//n个苹果，每x个小时吃一个苹果，经过y小时
		//剩下的个数m
		int m;
		cin >> n >> x >> y;
		if ((y*1.0 / x) > (y / x))//如过不能整除，说明总共的苹果要减去吃了完整的y/x个苹果还要减去一个不完整的苹果
		m = n - (y / x + 1);
		else
		m = n - y / x;
		cout << m << endl;

		return 0;
		}
		*/

//编程题#2 大象喝水
//描述一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶（h和r都是整数）。问大象至少要喝多少桶水才会解渴。
//输入有一行：包含两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r,单位都是厘米。输出一行，包含一个整数，表示大象至少要喝水的桶数。
/*
		#include<iostream>
		using namespace std;
		int main()
		{
		int h, r;//输入桶深和桶底半径
		int m;//大象至少要喝的桶数的水
		double t;
		cout << "桶深： cm" << "\t" << "桶底半径：cm" << endl;
		cin >> h >> r;
		t=20 * 1000 / (h*3.14159*r*r);

		m = (int)t + 1;
		cout << m << endl;


		return 0;
		}
		*/

//编程题#3：最高的分数
//输入两行，第一行为整数n，表示参加这次考试的人数。第二行是这n个学生的成绩，相邻两个数之间用单个空格隔开。所有成绩均为0到100的数。
//输出一个整数，即最高成绩
/*
		#include<iostream>
		using namespace std;
		int main()
		{
		int n;//表示参加考试的人数
		int max=0;//用来存放最大成绩的下标
		cin >> n;
		int s[100];//定义一个数组用来放学生的成绩
		for (int i = 0; i < n; i++)
		cin >> s[i];//输入n个学生的成绩
		//比较找最大值
		for (int i = 0; i < n; i++){

		if (s[max] < s[i]){
		s[max] = s[i];
		max = i;
		}
		}
		cout << s[max] << endl;

		return 0;
		}
		*/

//编程题#4：最大奇数与最小偶数之差的绝对值
//描述：输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。设这6个正整数中最大的奇数为a，最小的数为b，求出|a-b|.
//输入 输入为一行6个正整数，且6个正整数都小于100，输入保证这6个数中至少存在一个奇数和一个偶数。
//输出为一行，输出最大的奇数与最小的偶数之差的绝对值
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 0;
	int s[10], odd[10], even[10];//分别存放总数、奇数、偶数
	cout << "请输入6个正整数：";
	for (i = 0; i < 6; i++){
		cin >> s[i];
	}
	int numodd = 0, numeven = 0;//分别记录奇数、偶数的个数
	for (i = 0; i < 6; i++){    //遍历数组s,奇数放在odd,偶数放在even
		if (s[i] % 2 == 0){
			even[numeven] = s[i];
			numeven++;
		}
		else{
			odd[numodd] = s[i];
			numodd++;
		}
	}
	int mineven = 0;
	//找出最小的偶数
	for (i = 0; i <numeven; i++){
		if (even[mineven]>even[i]){
			even[mineven] = even[i];
			mineven = i;
		}
	}
	//找出最大的奇数
	int maxodd = 0;
	for (i = 0; i < numodd; i++){
		if (odd[maxodd] < odd[i]){
			odd[maxodd] = odd[i];
			maxodd = i;
		}
	}
	int m = 0;//求出最大奇数与最小偶数的差
	m = odd[maxodd] - even[mineven];
	//求出m的绝对值
	if (m>0)
		cout << m << endl;
	else
		cout << -m << endl;


	return 0;

}
*/

//编程题#5:分离整数的各个数位
//描述：从键盘输入一个任意的三位数，要求正确的分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其他符号。
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入一个三位数：" << endl;
	cin >> n;
	int a = 0, b = 0, c = 0;//a表示百位数，b表示十位数，c表示个位数
	c = n % 10;
	b = (n/10) % 10;
	a = (n / 100) % 10;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;

}
*/