//week7 数据成分应用练习
/*
#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14159;//PI就是一个符号常量，在程序中它的值就不变了
	float r, area;
	cin >> r;
	area = r*r*PI;
	cout << "Area=" << area;
	return 0;
}
*/

//抄写题#1：约瑟夫问题
//描述：有n只猴子，按顺时针方向围成一圈选大王（编号从1到n），从第1号开始报数，一直到m，数到m的猴子推出圈外，剩下的猴子再接着从1开始报数。就这样，直到圈内只剩下一只猴子时，这个猴子就是猴王，编程求输入n,m后，输出最后猴王的编号。
//每行是用空格分开的两个整数，第一是n，第二是m。最后一行是0 0，输出 对于每行输入数据（最后一行除外），输出数据也是一行，即最后猴王的编号
/*
#include<iostream>
using namespace std;
//一共最多有300只猴子
int succedent[300];//这个数组用于保存一个猴子后一位是谁，
       //比如“next[5]的值是7”就是说5号猴子的下一位是7号猴子，6号猴子已经在之前退出了。
int precedent[300];//这个数组用于保存一个猴子前一位是谁，用法和上面的类似。

int main()
{
	int n, m;
	while (true){
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		for (int i = 0; i < n - 1; i++){
			succedent[i] = i + 1;
			precedent[i + 1] = i;
		}
		succedent[n - 1] = 0;
		precedent[0] = n - 1;

		int current = 0;
		while (true){
			//如果一共要报m次号，那么取m-1次succedent之后就是需要退出的那只猴子
			for (int count = 0; count < m - 1; count++)
				current = succedent[current];

			int pre = precedent[current];
			int suc = succedent[current];
			//让current号猴子退出很简单，就是把前一位的“下一位”指向current的下一位
			//下一位的“前一位”指向current的前一位就好了
			succedent[pre] = suc;
			precedent[suc] = pre;
			if (pre == suc){
				//如果只剩下两个了，那么每个人的前位和后位就是同一个了
				//current推出的，那么另一个就是剩下的
				//我们的序号是从0编号的，输出时要加1
				cout << pre + 1 << endl;
				break;
			}
			current = suc;
		}
	}
	return 0;
}
*/
//抄写题#2：分数求和
//描述 输入n个分数并对他们求和，用约分之后的最简形式表示。如q/p=x1/y1+x2/y2+....+xn/yn要求q/p是规约之后的形式。如5/6已经是最简形式，3/6需要规约为1/2,3/1需要规约成3，10/3就是最简形式。分子分母都没有为0的情况，也没有出现负数的情况
//第一行的输入n,代表一共有几个分数需要求和，接下来的n行就是分数
//输出只有一行，即规约后的结果
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sumn = 0, sumd = 1;//存储结果，sumn/sumd
	while (n--){
		int num, deno;
		char slash;//专门用来吃掉/的
		cin >> num >> slash >> deno;
		//先相加a/b+c/d=(a*d+c*b)/(b*d)
		sumn = sumn*deno + num*sumd;
		sumd = sumd*deno;
	}
	//后约分
	//先求最大公约数gcd，这里用的是欧几里得法
	int a = sumd, b = sumn, c;
	while (a != 0){
		c = a; a = b%a; b = c;
	}
	int gcd = b;
	//分子分母同时除以gcd就可以完成约分
	sumd /= gcd;
	sumn /= gcd;
	if (sumd > 1)
		cout << sumn << '/' << sumd << endl;
	else
		cout << sumn << endl;
	return 0;
}
*/

//编程题#1：年龄与疾病
//描述 某医院想统计一下某项疾病的获得与否与年龄相关，需要对以前的诊断记录进行整理
//输入共两行，第一行为过往病人的数目n，第二行为每个病人患病时的年龄。输出每个年龄段（分四段：18以下，19-35,36-60，大于60注意看样例输出的格式）的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）.
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;//病人的数目
	cin >> n;
	int s[100];//用数组来存储这些病人的年龄
	int i = 0;
	for (i = 0; i < n; i++)
		cin >> s[i];
	int a = 0, b = 0, c = 0, d = 0;//a记录18岁以下的人数，b记录19-35岁的人数，c记录36-60岁的人数，d记录60岁以上的人数
	float x = 0, y = 0, z = 0,p=0;//x记录18岁以下占的比例，y记录19-35岁人数占的比例，z记录36-60岁人数占的比例，p记录60岁以上人数占的比例
	for (i = 0; i < n; i++){      
		if (s[i] <= 18)
			a++;
		else if (s[i]>18 && s[i] <= 35)
			b++;
		else if (s[i]>35 && s[i] <= 60)
			c++;
		else
			d++;
	}
	x = a * 100 / n;
	y = b*100/ n;
	z = c*100/ n;
	p = d*100 / n;
	cout << "1-18： " <<fixed<<setprecision(2)<< x<<"%"<<endl;
	cout << "19-35： " <<setprecision(2)<< y<<"%"<<endl;
	cout << "36-60： " <<setprecision(2)<<z<<"%"<<endl;
	cout << "60-： " <<setprecision(2)<< p<<"%"<<endl;

 	return 0;
}
*/

//编程题#2：成绩判断
//描述：输入一个0-100的分数，判断分数代表什么等级。95-100输出1,90-95输出2,85-90输出3,80-85输出4,70-80输出5,60-70输出6，小于60输出7.
/*
#include<iostream>
using namespace std;
int main()
{
	int n;//n为分数
	cin >> n;//输入分数
	if (n >= 95 && n <= 100)
		cout << "1" << endl;
	else if (n >= 90 && n < 95)
		cout << "2" << endl;
	else if (n >= 85 && n < 90)
		cout << "3" << endl;
	else if (n >= 80 && n < 85)
		cout << "4" << endl;
	else if (n >= 70 && n < 80)
		cout << "5" << endl;
	else if (n >= 60 && n < 70)
		cout << "6" << endl;
	else
		cout << "7" << endl;

	return 0;

}
*/

//编程题#3：找出第k大的数
//描述：用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第k大的数。注意，第K大的数意味着在第K位的数。
/*
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0;//用于循环数据
	int N, K;//用户输入N个数，输出第K大的数
	int s[100];//用s数组来存储这些数
	cin >> N >> K;
	for (i = 0; i < N; i++)
		cin >> s[i];
	int temp = 0;//临时变量，用于暂存要交换的数据
	//输入N个数，先用选择排序法把这些数从大到小的排列出来
	for (i = 0; i < N - 1; i++){

		for (j = i + 1; j < N; j++){
			if (s[j]>s[i]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	//输出第K大的数
	cout << s[K - 1] << endl;

	return 0;
}
*/

//编程题#4：人民币支付
//描述：从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票
//输入一个小于1000的整数。输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数

/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a , b , c , d , e , f ;//a表示100元数目，b表示50元数目，c表示20元数目，d表示10元数目，e表示5元数目，f表示1元数目
	int n;//n代表指定金额
	cin >> n;
	for (a = 10; a >= 0; a--){
		for (b = 20; b >=0; b--){
			for (c = 50; c >=0; c--){
				for (d = 100; d >=0; d--){
					for (e = 200; e >=0; e--){
						for (f = 1000; f >=0; f--){
							if ((a*100 + 50* b + 20* c + d * 10 + e * 5 + f * 1) == n){
								cout << a << endl;
								cout << b << endl;
								cout << c << endl;
								cout << d << endl;
								cout << e << endl;
								cout << f << endl;
								
								goto quit;
							}
						}
					}
				}
			}
		}
	}

     quit:
	return 0;
}
*/

