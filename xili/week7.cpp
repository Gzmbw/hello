//week7 ���ݳɷ�Ӧ����ϰ
/*
#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14159;//PI����һ�����ų������ڳ���������ֵ�Ͳ�����
	float r, area;
	cin >> r;
	area = r*r*PI;
	cout << "Area=" << area;
	return 0;
}
*/

//��д��#1��Լɪ������
//��������nֻ���ӣ���˳ʱ�뷽��Χ��һȦѡ��������Ŵ�1��n�����ӵ�1�ſ�ʼ������һֱ��m������m�ĺ����Ƴ�Ȧ�⣬ʣ�µĺ����ٽ��Ŵ�1��ʼ��������������ֱ��Ȧ��ֻʣ��һֻ����ʱ��������Ӿ��Ǻ��������������n,m������������ı�š�
//ÿ�����ÿո�ֿ���������������һ��n���ڶ���m�����һ����0 0����� ����ÿ���������ݣ����һ�г��⣩���������Ҳ��һ�У����������ı��
/*
#include<iostream>
using namespace std;
//һ�������300ֻ����
int succedent[300];//����������ڱ���һ�����Ӻ�һλ��˭��
       //���硰next[5]��ֵ��7������˵5�ź��ӵ���һλ��7�ź��ӣ�6�ź����Ѿ���֮ǰ�˳��ˡ�
int precedent[300];//����������ڱ���һ������ǰһλ��˭���÷�����������ơ�

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
			//���һ��Ҫ��m�κţ���ôȡm-1��succedent֮�������Ҫ�˳�����ֻ����
			for (int count = 0; count < m - 1; count++)
				current = succedent[current];

			int pre = precedent[current];
			int suc = succedent[current];
			//��current�ź����˳��ܼ򵥣����ǰ�ǰһλ�ġ���һλ��ָ��current����һλ
			//��һλ�ġ�ǰһλ��ָ��current��ǰһλ�ͺ���
			succedent[pre] = suc;
			precedent[suc] = pre;
			if (pre == suc){
				//���ֻʣ�������ˣ���ôÿ���˵�ǰλ�ͺ�λ����ͬһ����
				//current�Ƴ��ģ���ô��һ������ʣ�µ�
				//���ǵ�����Ǵ�0��ŵģ����ʱҪ��1
				cout << pre + 1 << endl;
				break;
			}
			current = suc;
		}
	}
	return 0;
}
*/
//��д��#2���������
//���� ����n����������������ͣ���Լ��֮��������ʽ��ʾ����q/p=x1/y1+x2/y2+....+xn/ynҪ��q/p�ǹ�Լ֮�����ʽ����5/6�Ѿ��������ʽ��3/6��Ҫ��ԼΪ1/2,3/1��Ҫ��Լ��3��10/3���������ʽ�����ӷ�ĸ��û��Ϊ0�������Ҳû�г��ָ��������
//��һ�е�����n,����һ���м���������Ҫ��ͣ���������n�о��Ƿ���
//���ֻ��һ�У�����Լ��Ľ��
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sumn = 0, sumd = 1;//�洢�����sumn/sumd
	while (n--){
		int num, deno;
		char slash;//ר�������Ե�/��
		cin >> num >> slash >> deno;
		//�����a/b+c/d=(a*d+c*b)/(b*d)
		sumn = sumn*deno + num*sumd;
		sumd = sumd*deno;
	}
	//��Լ��
	//�������Լ��gcd�������õ���ŷ����÷�
	int a = sumd, b = sumn, c;
	while (a != 0){
		c = a; a = b%a; b = c;
	}
	int gcd = b;
	//���ӷ�ĸͬʱ����gcd�Ϳ������Լ��
	sumd /= gcd;
	sumn /= gcd;
	if (sumd > 1)
		cout << sumn << '/' << sumd << endl;
	else
		cout << sumn << endl;
	return 0;
}
*/

//�����#1�������뼲��
//���� ĳҽԺ��ͳ��һ��ĳ����Ļ�������������أ���Ҫ����ǰ����ϼ�¼��������
//���빲���У���һ��Ϊ�������˵���Ŀn���ڶ���Ϊÿ�����˻���ʱ�����䡣���ÿ������Σ����ĶΣ�18���£�19-35,36-60������60ע�⿴��������ĸ�ʽ���Ļ�������ռ�ܻ��������ı������԰ٷֱȵ���ʽ�������ȷ��С�������λ��double��.
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;//���˵���Ŀ
	cin >> n;
	int s[100];//���������洢��Щ���˵�����
	int i = 0;
	for (i = 0; i < n; i++)
		cin >> s[i];
	int a = 0, b = 0, c = 0, d = 0;//a��¼18�����µ�������b��¼19-35���������c��¼36-60���������d��¼60�����ϵ�����
	float x = 0, y = 0, z = 0,p=0;//x��¼18������ռ�ı�����y��¼19-35������ռ�ı�����z��¼36-60������ռ�ı�����p��¼60����������ռ�ı���
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
	cout << "1-18�� " <<fixed<<setprecision(2)<< x<<"%"<<endl;
	cout << "19-35�� " <<setprecision(2)<< y<<"%"<<endl;
	cout << "36-60�� " <<setprecision(2)<<z<<"%"<<endl;
	cout << "60-�� " <<setprecision(2)<< p<<"%"<<endl;

 	return 0;
}
*/

//�����#2���ɼ��ж�
//����������һ��0-100�ķ������жϷ�������ʲô�ȼ���95-100���1,90-95���2,85-90���3,80-85���4,70-80���5,60-70���6��С��60���7.
/*
#include<iostream>
using namespace std;
int main()
{
	int n;//nΪ����
	cin >> n;//�������
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

//�����#3���ҳ���k�����
//�������û�����N��K��Ȼ���������N��������������ģ��������ڲ���N���������������£��ҳ���k�������ע�⣬��K�������ζ���ڵ�Kλ������
/*
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0;//����ѭ������
	int N, K;//�û�����N�����������K�����
	int s[100];//��s�������洢��Щ��
	cin >> N >> K;
	for (i = 0; i < N; i++)
		cin >> s[i];
	int temp = 0;//��ʱ�����������ݴ�Ҫ����������
	//����N����������ѡ�����򷨰���Щ���Ӵ�С�����г���
	for (i = 0; i < N - 1; i++){

		for (j = i + 1; j < N; j++){
			if (s[j]>s[i]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	//�����K�����
	cout << s[K - 1] << endl;

	return 0;
}
*/

//�����#4�������֧��
//�������Ӽ�������һָ������ԪΪ��λ����345����Ȼ�����֧���ý��ĸ��������������������ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ�������ţ�Ҫ����ʹ�ô����ĳ�Ʊ
//����һ��С��1000��������������У�ÿ����ʾһ�����������ϵ��·ֱ��ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ����ҵ�����

/*
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a , b , c , d , e , f ;//a��ʾ100Ԫ��Ŀ��b��ʾ50Ԫ��Ŀ��c��ʾ20Ԫ��Ŀ��d��ʾ10Ԫ��Ŀ��e��ʾ5Ԫ��Ŀ��f��ʾ1Ԫ��Ŀ
	int n;//n����ָ�����
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

