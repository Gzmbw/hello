//1 ��д���������ж��У���һ��Ϊ����n,��ʾ��n������������n�У�ÿ���������������ֱ�����������ţ�ʵ��ǰϸ�������������ϸ��������
//������ж��У���һ�����A��������������������ÿ�����A����������ı�ţ�����ֳ���������С�Ȼ��һ�����B��������������������ÿ�����B����������ı�ţ�Ҳ����ֳ���������С�
/*#include<iostream>
using namespace std;
int main()
{
	int n;//nΪϸ������
	//id��¼ϸ���ı�ţ�rate��¼ϸ���ķ�ֳ�ʣ���һ��ϸ����Ӧid[i]��rate[i]
	int id[100];
	double rate[100];

	cin >> n;
	for (int i = 0; i < n; i++){
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = (double)final / initial;
	}
	//������ϸ������
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
	//��¼����
	double maxDiff = 0;
	//�������±�
	int maxDiffIndex = 0;
	for (int i = 0; i < n - 1; i++){
		double diff = rate[i] - rate[i + 1];
		if (maxDiff < diff){
			maxDiff = diff;
			maxDiffIndex = i;
		}
		}
		//�����ֳ�ϴ������ϸ��
		cout << maxDiffIndex + 1 << endl;
		for (int i = maxDiffIndex; i >= 0; i--){
		cout << id[i] << endl;
		}
		//�����ֳ�ʽ�С������ϸ��
		cout << n - maxDiffIndex - 1 << endl;
		for (int i = n - 1; i >= maxDiffIndex + 1; i--){
		cout << id[i] << endl;
		}
		return 0;
		}
		*/

//�����#1��ƻ���ͳ��� ����������һ��n��ƻ�����ܲ��ҵ�����������������һ�����ӡ�����ÿxСʱ�ܳԵ�һ��ƻ������������ڳ���һ��ƻ��֮ǰ�������һ������ô����yСʱ�㻹�ж��ٸ�������ƻ����
//�����һ�У�����n,x��y�����Ҳ��һ�У�ʣ�µ�ƻ������
/*
		#include<iostream>
		using namespace std;
		int main()
		{
		int n, x, y;//n��ƻ����ÿx��Сʱ��һ��ƻ��������yСʱ
		//ʣ�µĸ���m
		int m;
		cin >> n >> x >> y;
		if ((y*1.0 / x) > (y / x))//�������������˵���ܹ���ƻ��Ҫ��ȥ����������y/x��ƻ����Ҫ��ȥһ����������ƻ��
		m = n - (y / x + 1);
		else
		m = n - y / x;
		cout << m << endl;

		return 0;
		}
		*/

//�����#2 �����ˮ
//����һֻ����ڿ��ˣ�Ҫ��20��ˮ���ܽ�ʣ�������ֻ��һ����h���ף�����뾶Ϊr���׵�СԲͰ��h��r�������������ʴ�������Ҫ�ȶ���Ͱˮ�Ż��ʡ�
//������һ�У�����������������һ���ո�ֿ����ֱ��ʾСԲͰ����h�͵���뾶r,��λ�������ס����һ�У�����һ����������ʾ��������Ҫ��ˮ��Ͱ����
/*
		#include<iostream>
		using namespace std;
		int main()
		{
		int h, r;//����Ͱ���Ͱ�װ뾶
		int m;//��������Ҫ�ȵ�Ͱ����ˮ
		double t;
		cout << "Ͱ� cm" << "\t" << "Ͱ�װ뾶��cm" << endl;
		cin >> h >> r;
		t=20 * 1000 / (h*3.14159*r*r);

		m = (int)t + 1;
		cout << m << endl;


		return 0;
		}
		*/

//�����#3����ߵķ���
//�������У���һ��Ϊ����n����ʾ�μ���ο��Ե��������ڶ�������n��ѧ���ĳɼ�������������֮���õ����ո���������гɼ���Ϊ0��100������
//���һ������������߳ɼ�
/*
		#include<iostream>
		using namespace std;
		int main()
		{
		int n;//��ʾ�μӿ��Ե�����
		int max=0;//����������ɼ����±�
		cin >> n;
		int s[100];//����һ������������ѧ���ĳɼ�
		for (int i = 0; i < n; i++)
		cin >> s[i];//����n��ѧ���ĳɼ�
		//�Ƚ������ֵ
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

//�����#4�������������Сż��֮��ľ���ֵ
//����������6��������������6�������������ٴ���һ��������һ��ż��������6������������������Ϊa����С����Ϊb�����|a-b|.
//���� ����Ϊһ��6������������6����������С��100�����뱣֤��6���������ٴ���һ��������һ��ż����
//���Ϊһ�У����������������С��ż��֮��ľ���ֵ
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0, j = 0;
	int s[10], odd[10], even[10];//�ֱ���������������ż��
	cout << "������6����������";
	for (i = 0; i < 6; i++){
		cin >> s[i];
	}
	int numodd = 0, numeven = 0;//�ֱ��¼������ż���ĸ���
	for (i = 0; i < 6; i++){    //��������s,��������odd,ż������even
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
	//�ҳ���С��ż��
	for (i = 0; i <numeven; i++){
		if (even[mineven]>even[i]){
			even[mineven] = even[i];
			mineven = i;
		}
	}
	//�ҳ���������
	int maxodd = 0;
	for (i = 0; i < numodd; i++){
		if (odd[maxodd] < odd[i]){
			odd[maxodd] = odd[i];
			maxodd = i;
		}
	}
	int m = 0;//��������������Сż���Ĳ�
	m = odd[maxodd] - even[mineven];
	//���m�ľ���ֵ
	if (m>0)
		cout << m << endl;
	else
		cout << -m << endl;


	return 0;

}
*/

//�����#5:���������ĸ�����λ
//�������Ӽ�������һ���������λ����Ҫ����ȷ�ķ�������İ�λ��ʮλ�͸�λ�������ֱ�����Ļ��������������ÿ�����һ�����ķ�ʽ�������������š�
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "������һ����λ����" << endl;
	cin >> n;
	int a = 0, b = 0, c = 0;//a��ʾ��λ����b��ʾʮλ����c��ʾ��λ��
	c = n % 10;
	b = (n/10) % 10;
	a = (n / 100) % 10;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;

}
*/