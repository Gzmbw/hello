//switch分支语句
/*
#include<iostream>
using namespace std;
int main()
{
	char grade = 'a';
	cin >> grade;
	switch (grade)
	{
	 case 'a':cout << "85-100" << endl;
	 case 'b':cout << "70-84" << endl;
	 case 'c':cout << "60-69" << endl;
	 case 'd':cout << "<60" << endl;
	 default:cout << "error" << endl;
	}
	return 0;
}
*/

//要求按照百分制成绩输出相应的等级成绩90-100为A，80-90为B，70-80为C，60-70为D，60以下为E；
//用switch语句解决
/*
#include<iostream>
using namespace std;
int main()//观察只是与成绩的十位数有关
{
	int score, num;
	cout << "please give the score" << endl;
	cin >> score;
	num = score / 10;
	switch (num)
	{
	case 10:cout << "A" << endl; break;
	case 9:cout << "A" << endl; break;
	case 8:cout << "B" << endl; break;
	case 7:cout << "C" << endl; break;
	case 6:cout << "D" << endl; break;
	default:cout << "E" << endl;
	}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int n, counter = 0;
	for (n = 1; n <= 100; n++){
		if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
			continue;
		cout << n << '\t';
		counter++;
		if (counter % 10 == 0)//每十个换行
			cout << endl;
	}
	cout << endl;
	return 0;
}
*/

