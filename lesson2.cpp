//���¼����Ǽ򵥳��򣬵���ע��cpp��c�ĸ�ʽ����
#include<iostream>
using namespace std;
int main()
{
	/*
	int a = 0, b=0, result=0;
	cout << "������һ������" ;
	cin >> a >> b;
	result = 3 * a - 2 * b - 1;
	cout << "result=" <<result<< endl;

	return 0; 
	*/
	//������������ֵ��
	/*float a = 0, b = 0, temp = 0;
	cout << "Input a and b:" << endl;
	cin >> a >> b;
	cout << "a=" << a << ",b=" << b << endl;
	temp = a; a = b; b = temp;
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
	*/
	//��֧�ṹ
	/*
	int x = 0, y = 0;
	cout << "������������:";//���ﲻ��<<endl������ͬһ��������������
	cin >> x >> y;
	if (x > y)
		cout << "Max number is:" << x << endl;
	else
		cout << "Max number is:" << y <<endl;
	return 0;
	*/
	//ѭ���ṹ����-for���
	/*int i = 0;
	cout << "20���ڵ�������" << endl;
	for (i = 0; i <= 20; i++)
	{
		if (i % 2 != 0)
			cout << "����Ϊ��" << i << endl;

	}
	return 0;
	*/
	//�򵥳���-����
	/*int i = 0;
	char a[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	cout << "��ĸ�������Ϊ������ǰ�����ĸ��" << endl;
	for (i = 0; i < 10; i = i + 2)
		cout << a[i] << endl;
	return 0;
	*/
	//�򵥳����ۺ�:��֤����ɶ��ԣ�������ע�͡�
	/*char a = 'a';//���ڴ���û��������ĸ
	cout << "�²������ĸ���ĸ��������Σ�" << endl;
	int i = 0;//���ڼ�¼�¹����ٴ�
	for (i = 0; i < 5; i++)
	{
		cin >> a;
		if (a == 'G')//�������
		{
			cout << "��������ˣ�" << endl;
			break;//����ѭ��
		}
		else   //���û�в���
			cout << "��´��ˣ����Ų°ɣ�" << endl;
	}
	
	return 0;
	*/
	//ʾ������ͬ������
	/*int nCases, i, nFeet;//nCases��ʾ����������ݵ�������nFeet��ʾ����Ľ�����
	cin >> nCases;
	for (i = 0; i < nCases; i++){
		cin >> nFeet;
		if (nFeet % 2 != 0)//���������ֻ�ţ������벻��ȷ��
			cout << "0  0" << endl;
		else if (nFeet % 4 != 0)//��Ҫ������Ŀ���٣�ʹ���ﾡ������ֻ��
			//��Ҫ������Ŀ��࣬ʹ���ﾡ����2ֻ��
			cout <<"��������"<< nFeet / 4 + 1 << "��������� " << nFeet / 2 << endl;
		else
			cout <<"��������"<< nFeet / 4 << "��������� " << nFeet / 2 << endl;

	}

	return 0;
	*/
//ʾ��2  ��Ԫ��ټ����⣺�ٶ�С��ÿֻ5�ǣ�����ÿֻ2Ԫ��ĸ��ÿֻ3Ԫ������100ԪǮҪ����100ֻ������̳����п��ܵĹ���������
	/*int x, y, z;
	cout << "\tС��\t\t����\t\tĸ��" << endl;
	for (x = 0; x <= 200; x++)
	for (y = 0; y <= 50; y++)
	for (z = 0; z < 34; z++)
	{
		if ((x+y+z)==100)
		if ((0.5*x + 2 * y + 3 * z) == 100)//����if���½����ž��൱�ڲ�
			cout << "\t" << x << "\t\t" << y << "\t\t" << z << endl;
	}
	return 0;
	*/

//ʾ��3 �ֳ���ż�������������Ӽ�������10���������뽫���е�������ż��ʶ��������ֱ���벻ͬ�����飬�������

	/*int all[10], odd[10], even[10];//odd��¼������even��¼ż��
	int i = 0, j = 0;//i,jΪѭ����������
	for (i = 0; i < 10; i++)//����10����
		cin >> all[i];
	int numodd = 0;
	int numeven = 0;//numodd,numeven�ֱ��¼������ż���ĸ���
	for (i = 0; i < 10; i++)//��������all,��������odd,ż������even
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
		cout <<"�������"<< odd[i] << endl;
	for (i = 0; i < numeven; i++)
		cout <<"���ż��"<< even[i] << endl;
	return 0;
	*/


//ʾ��4 �������򣨲���ѡ�����������������Ӽ���������10���������밴�մӴ�С��˳���������кã������µĴ����������Ļ�ϡ�
	/*int a[10];//���ڴ����������
	int i = 0, j = 0;//����ѭ������
	int temp = 0;//��ʱ�����������ݴ�Ҫ����������
	for (i = 0; i < 10; i++)
		cin >> a[i];
	for (i = 0; i < 9; i++)//����Ϊ����ĵ�i��Ԫ��ѡ��������
	{
		for (j = i + 1; j < 10; j++)//�ӵ�i+1��Ԫ�ؿ�ʼѰ�ұ�a[i]�������
		{
			if (a[j]>a[i])//����ҵ���a[i]����������ͽ�����a[i]����
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

//ʾ��5 ����10��ͬ���������˴��Կո�ָ����������Ժ������Ҳ���ո�ָ�����Ҫ�����������е����������Ӵ�С������Ȼ��������е�ż����������С����������
	//�������
	//allΪȫ��ʮ������odd��¼������even��¼ż��
	int all[10], odd[10], even[10];
	int i = 0, j = 0;//ѭ������
	cout << "������10����ͬ��������";
	for (i = 0; i < 10; i++)//��������10������all��iΪall���±�
		cin >> all[i];
	//numodd,numeven�ֱ��¼������ż���ĸ���
	int numodd = 0, numeven = 0;
	//��������all�������ǰall[i]Ϊ���������odd[numodd],ż���ͷ���even[numeven]
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
	//��oddѡ������
	for (i = 0; i < 9; i++){
		for (j = i + 1; j < 10; j++){
			if (odd[j]>odd[i]){
				//tempΪ��ʱ����
				int temp = odd[i];
				odd[i] = odd[j];
				odd[j] = temp;
			}
		}
	}
	//��evenѡ������
	for (i = 0; i < 9; i++){
		for (j = i+1; j < 10; j++){
			if (even[j] < even[i]){
				int temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
		}
	}
	//�������
	for (i = 0; i < numodd; i++){
		cout << odd[i] << "";
	}//���ż��
	for (i = 0; i < numeven; i++){
		cout << even[i] << "";
	}
	cout << endl;
	return 0;




			
		
	
		

}