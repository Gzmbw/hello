//��ά����ĳ�ʼ��
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 12, 13 } };
	for (int i = 0; i < 3; i++)//i��jΪ��ʱ����
	{
		for (int j = 0; j < 4; j++)
			cout << setw(3) << a[i][j];//setw(3)��ʾ������Ʒ������屣֤�����������ռ3���ַ�λ
		cout << endl;
	}
	return 0;
}
*/
//������������ͳ�Ƶ�����
//������ĳѧУ��1000λ��ʦ���ֲ���20����ͬ��ѧԺ�У�ÿ��ѧԺ���12��ϵ�������дһ����������ÿλ��ʦ������Ժ��ϵ�ı�ţ�Ժ���1-20��ϵ���1-12������ӡ������ϵ��ʦ������
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
//�ҳ����������ַ���
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
//��������˼·������Ԫ������Ϊ0��ɸѡ���к������ֱ����2,3,4,5��....��99������Ӷ�ε���ֵ��ÿ�μ���õ��Ľ������һ���������������б�Ǹ����ֱ�ˢ����ÿ�μ�������У�ֻҪ��ӽ��û�дﵽ100�ͼ���������ӡ����ݱ���������û�б�ˢ��������
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
//�����#1������ĸ�ĸ���
//��������һ���ַ������ҳ�Ԫ����ĸa,e,i,o,u���ֵĴ���
/*
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
	int i=0;
	char s[80] = {0};//�洢�ַ���
	int sum[5] = {0};//��¼a,e,i,o,u��ĸ���ֵĸ���
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

//���#2�����Դ�Сд�Ƚ��ַ�����С
//˼·��һ���ַ������д�д��Сд�����԰��������ַ����е���ĸ��ת����Сд��Ȼ����ȥ�Ƚ�
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i = 0,j=0;//ѭ������
	char s1[80] = { 0 };//�����洢�����ַ���
	char s2[80] = { 0 };
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	//���ַ���s1�е���ĸ��ת����Сд��ĸ
	for (i = 0; i < 80; i++){
		if ((s1[i] >= 65)&&(s1[i] <= 90))
			s1[i]+=32;
		//cout << s1[i] ;
	}
	//���ַ���s2�е���ĸ��ת����Сд��ĸ
	for (j = 0; j< 80; j++){
		if ((s2[j] >= 65) && (s2[j] <= 90))
			s2[j] += 32;
	//	cout << s2[j] ;
	}
    //�Ƚ��ַ����Ĵ�С
	if (strcmp(s1, s2)>0)
		cout << ">" << endl;
	else if (strcmp(s1, s2) < 0)
		cout << "<" << endl;
	else
		cout << "=" << endl;
	return 0;
}
*/
//�����#3�������2
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

//�����#4�����󽻻���
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
//�����#5���쳣ϸ�����
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
