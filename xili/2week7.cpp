//����ṹ�����͵ı���
/*
#include<iostream>
using namespace std;
struct student
{
	int id_num;
	char name[10];
};
int main()
{
	student mike = { 123, { 'm', 'i', 'k', 'e', '\0' } };
	mike.id_num = 20130000 + mike.id_num;
	for (int i = 0; mike.name[i] != '\0'; i++)
		mike.name[i] = toupper(mike.name[i]);//toupper()�����ǰ�Сд��ĸ��ɴ�д��ĸ
	cout << mike.id_num << " " << mike.name << endl;
	return 0;
}
*/

//�ṹ���������������ṹ���������൱��copyһ�ݸ�����
/*
#include<iostream>
using namespace std;
struct student
{
	int id_num;
	char name[10];
};
void renew(student one)
{
	one.id_num = 20130000 + one.id_num;
	for (int i = 0; one.name[i] != '\0'; i++)
		one.name[i] = toupper(one.name[i]);
	cout << one.id_num << " " << one.name << endl;
}
int main()
{
	student mike = { 123, { 'm', 'i', 'k', 'e', '\0' } };
	renew(mike);//copyһ�ݴ��ݸ���renew
	cout << mike.id_num << " " << mike.name << endl;
	return 0;
}
*/

//�ṹ������������ֵ
/*
#include<iostream>
using namespace std;
struct student
{
	int id_num;
	char name[10];
};
student newone()
{
	student one = { 20130123, { 'M', 'I', 'K', 'E', '\0' } };
	return one;
}
int main()
{
	student mike = newone();//�ṹ��������ֵ�൱��copyһ�ݸ�������
	cout << mike.id_num << " " << mike.name << endl;
	return 0;
}
*/
//ָ��ṹ���ָ��
/*
#include<iostream>
using namespace std;
struct student
{
	int id_num;
	char name[10];
};
int main()
{
	student mike = { 123, { 'm', 'i', 'k', 'e', '\0' } };
	student *one = &mike;
	cout << (*one).id_num << " " << (*one).name;
	//����cout<<one->id_num<<" "<<one->name;//����ָ�������
	return 0;
}
*/
//ָ��ṹ�������ָ������������
/*
#include<iostream>
using namespace std;
struct student
{
	int id_num;
	char name[10];
};
void renew(student *one)
{
	one->id_num = 20130000 + one->id_num;
	for (int i = 0; one->name[i] != '\0'; i++)
		one->name[i] = toupper(one->name[i]);
}
int main()
{
	student mike = { 123, { 'm', 'i', 'k', 'e', '\0' } };
	renew(&mike);
	cout << mike.id_num << " " << mike.name;
	return 0;
}
*/

//���ýṹ�����������
/*
#include<iostream>
using namespace std;
struct student
{
	int id_num;
	char name[10];
};
int main()
{
	student myclass[3]=
	{ 123, { 'm', 'i', 'k', 'e', '\0' },
	133, { 't', 'o', 'm', '\0' },
	143, { 'j', 'a', 'c', 'k', '\0' }};
	student *one = myclass;
	cout << one->id_num << " " << one->name << endl;
	one++;//�������൱��ָ�������һ��Ԫ�ص�ָ�룬ָ��Ԫ�ص�ָ��++,����һ�����ṹ��
	cout << one->id_num << " " << one->name << endl;
	return 0;
}
*/

//������ͬ����
//��һ����100�˵Ĵ�༶�У����ڶ��������ͬ��ͬѧ���ʷǳ����ָ���ÿ��ѧ����ѧ�ţ��������ա����г�����������ͬ��ͬѧ��
/*
#include<iostream>
using namespace std;
struct student
{
	char ID[10];
	int month;
	int day;
} stu[100];
void main()
{
	int i, j, k, n, flag, count[100] = { 0 };
	cout << "how many students?";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> stu[i].ID >> stu[i].month >> stu[i].day;
	for (int m = 1; m <= 12;m++)
	for (int d = 1; d <= 3; d++)
	{
		flag = 0, j = 0;
		for (int i = 0; i < n;i++)
		if (stu[i].month == m&&stu[i].day == d)
		{
			count[++j] = i;//count���ڼ�¼������ͬͬѧ��ѧ��
			flag++;
		}
		if (flag>1)
		{
			cout << m << " " << d << " ";
			for (k = 1; k <= j; k++)
				cout << stu[count[k]].ID << " " << endl;
		}
	}

}
*/
//����Ԫ�صı���
/*
#include<iostream>
using namespace std;
struct student
{
	int id;
	student *next;
};
student *create();
int main()
{
	student *pointer = create();
	while (pointer->next != NULL)
	{
		cout << pointer->id << endl;
		pointer = pointer->next;
	}
	return 0;
}
*/

