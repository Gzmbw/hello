//��ֵ����� ��������ת��
/*
#include<iostream>
using namespace std;
int main()
{
	int int_i = 64.12345;
	char char_i = int_i;
	float float_i = char_i;//���������ת����ת�����ߵ�����
	bool bool_i = float_i;
	cout << showpoint << int_i << " " << char_i << " " << float_i << " " << bool_i << endl;//ע��������һ��showpoint
	return 0;

}
*/
//����ѳ�����������
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
	cout << hex << short_i << endl;//dexΪʮ�����Ƶ���
	cout << dec <<short_i << endl;//decΪʮ���Ƶ���
	*/
	
	//��ֵ
	/*
	int i = 0;
	cout << (i = 10) << endl;
	cout << (i = i + i) << endl;
	*/
	

	/*
	int i = 1;
	double j = 0;
    j = i;//�������Ͳ�ͬ����ת��Ϊ��ߵ�����
	cout << j << endl;
	cout << showpoint << j << endl;//ע�������showpoint,������������
	*/
	
	/*
	int a = 0, b = 0, c = 2, d = 0, e = 2, f = 2;
	cout << a << " " << a++ << " " << endl;//���ҵ������
	cout << ++b << " " << b++ << " " << endl;
	cout << c << " " << (c++) + (++c) << " " << endl;
	cout << (d = f++) + (e = f) << endl;
	cout << f << " " << d << " " << e << endl;

	return 0;
}
*/


//��д��#1����������
//������4��ר�Ҷ�4�������������ۣ�A˵2�ų�����õģ�B˵4�ų�����õģ�C˵3�ų�������õģ�D˵B˵���ˡ���ʵ��ֻ��1���ѣ���ֻ��1��ר��˵���ˣ�����3�˶�˵���ˣ����������ѵĳ��ţ��Լ�˵�Ե�ר�ҡ�
/*
#include<iostream>
using namespace std;
int main()
{
	//��bestö����õĳ�
	int best;
	for (best = 1; best <= 4; best++){
		//a b c��¼��λר�ҵĻ�
		bool a = (best == 2);
		bool b = (best == 4);
		bool c = !(best == 3);
		bool d = !b;
		if (a + b + c + d != 1)
			continue;//������ֻ��1λר��˵�Ե�����
		            //�����ѵĳ�
		cout << best << endl;
		//����ж���ȷ��ר��
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

//�����#1���������
//����������һ��������a���Լ������5���������������ǣ���5�������У�С��a�������ĺ��Ƕ��٣�
//����һ�У�ֻ����6��С��100�������������е�һ������������a�����һ�У�����һ������������5������С��a�����ĺ͡�
/*
#include<iostream>
using namespace std;
int main()
{
	int i=0,sum=0;//i����ѭ������,sum�����ۼӺ�
	int s[10];//���ڴ洢��Щ��
	for (i = 0; i < 6; i++)
		cin >> s[i];
	for (i = 1; i < 6; i++){
		if (s[i] < s[0])//���һ������Ƚϣ�С�ڵ�һ��������Щ�����
			sum = sum + s[i];
	}
	cout << sum << endl;
	return 0;

}
*/

//�����#2���ﳵ����·
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0;//ѭ������
	int n;//��������
	cin >> n;
	int s[100];//�����洢��������
	for (i = 0; i < n; i++)
		cin >> s[i];
	double b = 0, w = 0;//b��ʾ�����г����õ�ʱ�䣬w��ʾ�����õ�ʱ��
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

//�����#3������
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

//�����#4:�Һ�Ϊk������Ԫ��
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

//�����#5����Ȼ����
/*
#include<iostream>
using namespace std;
int main()
{
	int n ;//����һ��10��100����
	cin >> n;
	int a = 0;//������ʾ����λ�����
	int i = 11;//ѭ������
	while (i < n){
		a = (i-i%10)/10 + i % 10;
		if ((i%a)==0)
			cout << i << endl;
		i++;
	}
	return 0;
}
*/