#include<iostream>
#include<vector>
using namespace std;
struct Student
{
	int age;
	char name[20];
};
void create(vector<Student> &student)       //函数参数用到引用 
{
	int i;
	for(i=0;i<student.capacity();i++)          //容器的容量 
	{
		cout<<"请输入第"<<i+1<<"个学生的信息:";
		cin>>student[i].name>>student[i].age;
	}
 } 
void display(vector<Student> student) 
{
	vector<Student>::iterator iter;           //迭代器 
	for(iter=student.begin();iter!=student.end();iter++)
	{
		cout<<iter->name<<" "<<iter->age<<endl;
	}
 } 
 void insertElement(vector<Student> &student)
 {
 	cout<<"请输入你想插入的位置:";
	int n;
	cin>>n;
	cout<<"请输入学生信息:";
	Student stu;
	cin>>stu.name>>stu.age;
	student.insert(student.begin()+n-1,stu);        //插入元素： vec.insert(vec.begin()+i,a);在第i+1个元素前面插入a 
 }
 void deleteElement(vector<Student> &student)
 {
 	cout<<"请输入你想删除第几位学生信息:";
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
		cout<<"输入1插入新学生信息，输入2删除学生信息，输入3退出程序"<<endl;
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
