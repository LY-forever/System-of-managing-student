#include"people.h"
//Date
void Date::Set(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}
int Date::GetYear()
{
	return year;
}

int Date::GetMonth()
{
	return month;
}

int Date::GetDay()
{
	return day；
}

//person
Person::Person()
{
	strcpy(name,"00");
}
char *Person::GetName()
{
	return name;
}
void Person::Input()
{
	cout<<"please input the information\n";
	cout<<"name:";
	cin>>name;
	cout<<"number:";
	cin>>number;
	int y,m,d;
	cout<<"birthday(year,month,day):";
	cin>>y>>m>>d;
	birthday.Set(y,m,d);
	cout<<"sex(m/f):";
	cin>>sex;
}

void Person::Output()
{
	cout<<"name:"<<name<<endl;
	cout<<"number"<<number<<endl;
	cout<<"sex:";
	if (sex=="m")
		cout<<"male"<<endl;
	else
		cout<<"female"<<endl;
	cout<<"birthday"<<birthday.GetYear()<<"-"<<birthday.GetMonth()<<"-"<<birthday.GetDay()<<endl;
}

//student
void Student::Input()
{
	Person::Input();
	cout<<"speciality";
	cin>>speciality;
}

void Student::Output()
{
	Person::Output();
	cout<<"speciality:"<<speciality<<endl;
}

//Graduate
void Graduate::Input()
{
	Student::Input();
	cout<<"the topic of research:";
	cin>>researchTopic;
}
void Graduate::Output()
{
	Student::Output();
	cout<<"the topic of research:"<<researchTopic<<endl;
}

//Teacher
void Graduate::Input()
{
	Student::Input();
	cout<<"calling of teacher:";
	cin>>academicTitle;
}
void Teacher::Output()
{
	Person::Output();
	cout<<"calling of teacher:"<<academicTitle<<endl;
}
//PostgraduateOnJob
void PostgraduateOnJob::input()
{
	Graduate::Input();
	cout<<"calling of PostgraduateOnJob:";
	cin>>academicTitle;
}

void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout<<"calling of PostgraduateOnJob:"<<academicTitle<<endl;
}






































































