//以下几个是简单程序，但是注意cpp与c的格式区别
#include<iostream>
using namespace std;
int main()
{
	/*
	int a = 0, b=0, result=0;
	cout << "请输入一个数：" ;
	cin >> a >> b;
	result = 3 * a - 2 * b - 1;
	cout << "result=" <<result<< endl;

	return 0; 
	*/
	//交换两个数的值。
	/*float a = 0, b = 0, temp = 0;
	cout << "Input a and b:" << endl;
	cin >> a >> b;
	cout << "a=" << a << ",b=" << b << endl;
	temp = a; a = b; b = temp;
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
	*/
	//分支结构
	/*
	int x = 0, y = 0;
	cout << "请输入两个数:";//这里不加<<endl就是在同一行输入这两个数
	cin >> x >> y;
	if (x > y)
		cout << "Max number is:" << x << endl;
	else
		cout << "Max number is:" << y <<endl;
	return 0;
	*/
	//循环结构例子-for语句
	/*int i = 0;
	cout << "20以内的奇数：" << endl;
	for (i = 0; i <= 20; i++)
	{
		if (i % 2 != 0)
			cout << "奇数为：" << i << endl;

	}
	return 0;
	*/
	//简单程序-数组
	/*int i = 0;
	char a[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	cout << "字母表中序号为奇数的前五个字母：" << endl;
	for (i = 0; i < 10; i = i + 2)
		cout << a[i] << endl;
	return 0;
	*/
	//简单程序综合:保证程序可读性，缩进、注释。
	/*char a = 'a';//用于存放用户输入的字母
	cout << "猜猜我是哪个字母，最多猜五次：" << endl;
	int i = 0;//用于记录猜过多少次
	for (i = 0; i < 5; i++)
	{
		cin >> a;
		if (a == 'G')//如果猜中
		{
			cout << "被你猜中了！" << endl;
			break;//终于循环
		}
		else   //如果没有猜中
			cout << "你猜错了！接着猜吧！" << endl;
	}
	
	return 0;
	*/
	//示例鸡兔同笼问题
	/*int nCases, i, nFeet;//nCases表示输入测试数据的组数，nFeet表示输入的脚数。
	cin >> nCases;
	for (i = 0; i < nCases; i++){
		cin >> nFeet;
		if (nFeet % 2 != 0)//如果有奇数只脚，则输入不正确。
			cout << "0  0" << endl;
		else if (nFeet % 4 != 0)//若要动物数目最少，使动物尽量有四只脚
			//若要动物数目最多，使动物尽量有2只脚
			cout <<"动物最少"<< nFeet / 4 + 1 << "，动物最多 " << nFeet / 2 << endl;
		else
			cout <<"动物最少"<< nFeet / 4 << "，动物最多 " << nFeet / 2 << endl;

	}

	return 0;
	*/
//示例2  百元买百鸡问题：假定小鸡每只5角，公鸡每只2元，母鸡每只3元。现有100元钱要求买100只鸡，编程出所有可能的购鸡方案。
	/*int x, y, z;
	cout << "\t小鸡\t\t公鸡\t\t母鸡" << endl;
	for (x = 0; x <= 200; x++)
	for (y = 0; y <= 50; y++)
	for (z = 0; z < 34; z++)
	{
		if ((x+y+z)==100)
		if ((0.5*x + 2 * y + 3 * z) == 100)//两个if上下紧挨着就相当于并
			cout << "\t" << x << "\t\t" << y << "\t\t" << z << endl;
	}
	return 0;
	*/

//示例3 分出奇偶数问题描述：从键盘输入10个整数，请将其中的奇数和偶数识别出来，分别放入不同的数组，并输出。

	/*int all[10], odd[10], even[10];//odd记录奇数，even记录偶数
	int i = 0, j = 0;//i,j为循环计数变量
	for (i = 0; i < 10; i++)//输入10个数
		cin >> all[i];
	int numodd = 0;
	int numeven = 0;//numodd,numeven分别记录奇数和偶数的个数
	for (i = 0; i < 10; i++)//遍历数组all,奇数放入odd,偶数放入even
	{
		if (all[i] % 2 != 0){
			odd[numodd] = all[i];
			numodd++;
		}
		else {
			even[numeven] = all[i];
			numeven++;

		}
	}
	for (i = 0; i < numodd; i++)
		cout <<"输出奇数"<< odd[i] << endl;
	for (i = 0; i < numeven; i++)
		cout <<"输出偶数"<< even[i] << endl;
	return 0;
	*/


//示例4 整数排序（采用选择排序）问题描述：从键盘上输入10个整数，请按照从大到小的顺序将它们排列好，并按新的次序输出到屏幕上。
	/*int a[10];//用于存放输入数据
	int i = 0, j = 0;//用与循环计数
	int temp = 0;//临时变量，用于暂存要交换的数据
	for (i = 0; i < 10; i++)
		cin >> a[i];
	for (i = 0; i < 9; i++)//依次为数组的第i个元素选择最大的数
	{
		for (j = i + 1; j < 10; j++)//从第i+1个元素开始寻找比a[i]更大的数
		{
			if (a[j]>a[i])//如果找到比a[i]更大的数，就将它与a[i]互换
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}
		}
	}
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";

	return 0;
	*/

//示例5 输入10不同的整数，彼此以空格分隔重新排序以后输出（也按空格分隔），要求先输入其中的奇数并按从大到小排练；然后输出其中的偶数，并按从小到大排练。
	//定义变量
	//all为全部十个数，odd记录奇数，even记录偶数
	int all[10], odd[10], even[10];
	int i = 0, j = 0;//循环变量
	cout << "请输入10个不同的整数：";
	for (i = 0; i < 10; i++)//依次输入10个数至all，i为all的下标
		cin >> all[i];
	//numodd,numeven分别记录奇数、偶数的个数
	int numodd = 0, numeven = 0;
	//遍历数组all，如果当前all[i]为奇数则放在odd[numodd],偶数就放在even[numeven]
	for (i = 0; i < 10; i++){
		if (all[i]%2!=0){
			odd[numodd] = all[i];
			numodd++;
		}
		else{
			even[numeven] = all[i];
			numeven++;
		}
	}
	//对odd选择排序
	for (i = 0; i < 9; i++){
		for (j = i + 1; j < 10; j++){
			if (odd[j]>odd[i]){
				//temp为临时变量
				int temp = odd[i];
				odd[i] = odd[j];
				odd[j] = temp;
			}
		}
	}
	//对even选择排序
	for (i = 0; i < 9; i++){
		for (j = i+1; j < 10; j++){
			if (even[j] < even[i]){
				int temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
		}
	}
	//输出奇数
	for (i = 0; i < numodd; i++){
		cout << odd[i] << "";
	}//输出偶数
	for (i = 0; i < numeven; i++){
		cout << even[i] << "";
	}
	cout << endl;
	return 0;




			
		
	
		

}