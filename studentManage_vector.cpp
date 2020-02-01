#include<iostream>
#include<vector>
using namespace std;
struct Student
{
	int age;
	char name[20];
};
void create(vector<Student> &student)       //���������õ����� 
{
	int i;
	for(i=0;i<student.capacity();i++)          //���������� 
	{
		cout<<"�������"<<i+1<<"��ѧ������Ϣ:";
		cin>>student[i].name>>student[i].age;
	}
 } 
void display(vector<Student> student) 
{
	vector<Student>::iterator iter;           //������ 
	for(iter=student.begin();iter!=student.end();iter++)
	{
		cout<<iter->name<<" "<<iter->age<<endl;
	}
 } 
 void insertElement(vector<Student> &student)
 {
 	cout<<"��������������λ��:";
	int n;
	cin>>n;
	cout<<"������ѧ����Ϣ:";
	Student stu;
	cin>>stu.name>>stu.age;
	student.insert(student.begin()+n-1,stu);        //����Ԫ�أ� vec.insert(vec.begin()+i,a);�ڵ�i+1��Ԫ��ǰ�����a 
 }
 void deleteElement(vector<Student> &student)
 {
 	cout<<"����������ɾ���ڼ�λѧ����Ϣ:";
	int n;
	cin>>n;
	student.erase(student.begin()+n-1);     
 }
int main()
{
	vector<Student> stu(3);
	create(stu);
	display(stu);
	while(1)
	{
		cout<<"����1������ѧ����Ϣ������2ɾ��ѧ����Ϣ������3�˳�����"<<endl;
		int k;
		cin>>k;
		if(k==3)
		{
			break;
		}
		switch(k)
		{
			case 1:
			{
				insertElement(stu);
				display(stu);
				break;
			}
			case 2:
			{
				deleteElement(stu);
				display(stu);
				break;
			}
		} 
	}
}
