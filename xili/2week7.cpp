//定义结构体类型的变量
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
		mike.name[i] = toupper(mike.name[i]);//toupper()函数是把小写字母变成大写字母
	cout << mike.id_num << " " << mike.name << endl;
	return 0;
}
*/

//结构体做函数参数。结构体做参数相当于copy一份给函数
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
	renew(mike);//copy一份传递给了renew
	cout << mike.id_num << " " << mike.name << endl;
	return 0;
}
*/

//结构体做函数返回值
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
	student mike = newone();//结构体做返回值相当于copy一份给调用者
	cout << mike.id_num << " " << mike.name << endl;
	return 0;
}
*/
//指向结构体的指针
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
	//或者cout<<one->id_num<<" "<<one->name;//利用指向运算符
	return 0;
}
*/
//指向结构体变量的指针做函数参数
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

//利用结构体数组的特性
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
	one++;//数组名相当于指向数组第一个元素的指针，指向元素的指针++,则跨过一整个结构体
	cout << one->id_num << " " << one->name << endl;
	return 0;
}
*/

//生日相同问题
//在一个有100人的大班级中，存在多个生日相同的同学概率非常大。现给出每个学生的学号，出生月日。请列出所有生日相同的同学。
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
			count[++j] = i;//count用于记录生日相同同学的学号
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
//链表元素的遍历
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

