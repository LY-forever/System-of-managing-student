#include<student_2.h>
Person::Person()
{
	name=NULL;
}
Person::Person(char *na,char s,int a)
{
	if(na)
	{
		name=new char[strlen(na)+1];
		strcpy(name,na);
	}
	sex = s;
	age = a;
}
Person::~Person()
{
	if(name)
		delete []name;
}

//student类函数的实现
Student::Student()
{
}
Student::Student(char *na,char s,int a,char *spec,char *num):Person(na,s,a)
{
	strcpy(speciality,spec);
	strcpy(number,num);
}
Student::~Student()
{
	//count--;
}
Student & Student::operator = (Student & stu)
{
	strcpy(name,stu.name);
	sex = stu.sex;
	age = stu.age;
	strcpy(speciality,stu.speciality);
	strcpy(number,stu.number);
	return *this;
}
Student::operator char*()
{
	return name;
}
Student::operator char();
{
	return sex;
}
Student::operator int()
{
	return age;
}
ostream & operator<<(ostream & out,const Student & stu)
{
	out<<stu.name<<'\t';
	out<<stu.sex<<'\t';
	out<<stu.age<<'\t';
	out<<stu.speciality<<'\t';
	out<<stu.number<<'\n';
	return out;
}
istream & operator>>(istream & in,Student & stu)
{
	char temp[80];
	cout<<"输入学生信息"<<endl;
	cout<<"name:";
	in>>temp;
	if(temp)
	{
		stu.name = new char[strlen(temp)+1];
		strcpy(stu.name,temp);
	}
	cout<<"sex:";			in>>stu.sex;
	cout<<"age:";			in>>stu.age;
	cout<<"speciality:";	in>>stu.speciality;
	cout<<"number:";		in>>stu.number;
	return in;
}





















































