//switch��֧���
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

//Ҫ���հٷ��Ƴɼ������Ӧ�ĵȼ��ɼ�90-100ΪA��80-90ΪB��70-80ΪC��60-70ΪD��60����ΪE��
//��switch�����
/*
#include<iostream>
using namespace std;
int main()//�۲�ֻ����ɼ���ʮλ���й�
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
		if (counter % 10 == 0)//ÿʮ������
			cout << endl;
	}
	cout << endl;
	return 0;
}
*/

