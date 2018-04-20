#include"interface.h"
#include<cstring>
#include<iostream>
using namespace std;
Interface::Interface()
{
	numOfSt=0;
	numOfGr=0;
	numOfPo=0;
	numOfTe=0;
}
void Interface::display()
{
	cout<<"*********0.back********"<<endl;
	cout<<"*********1.save********"<<endl;
	cout<<"*********2.scan********"<<endl;
}

void Interface::run()
{
	int choice;
	do
	{
		display();
		cout<<"Please input yout choice:";
		cin>>choice;
		switch(choice)
		{
		case 0:
			break;
		case 1:
			Input();
			break;
		case 2:
			Output()
			break;
		}
	}while(choice);
}

void Interface::Input()
{
	int type;
	int i;
	char ch;
	do
	{
		cout<<"1.student"<<endl;
		cout<<"2.graduate"<<endl;
		cout<<"3.PostgraduateOnJob"<<endl;
		cout<<"4.teacher"<<endl;
		cout<<"PLease input the type of people:";
		cin>>type;
		if(type==1)
		{
			if(numOfSt==N)
				cout<<"full,cann't save"<<endl;
			else 
			{
				for(i=0;strcmp(st[i].GetName(),"00")!=0;i++);
				st[i].Input();
				numOfSt++;
			}
		}
		else if(type==2)
		{
			if(numOfGr==N)
			{
				cout<<"full,cann't save"<<endl;
			}
			else
			{
				for(i=0;strcmp(gr[i].GetName(),"00")!=0;i++);
				gr[i].Input();
				numOfGr++;
			}
		}
		else if(type==3)
		{
			if(numOfPo==N)
			{
				cout<<"full,cann't save."<<endl;
			}
			else 
			{
				for(i=0;strcmp(po[i].GetName(),"00")!=0;i++);
				po[i].Input();
				numOfPo++;
			}
		}
		else if(type==4)
		{
			if(numOfTe==N)
				cout<<"full,cann't save"<<endl;
			else 
			{
				for(i=0;strcmp(te[i].GetName(),"00")!=0;i++);
				te[i].Input();
				numOfTe++;
			}
		}
		else
		{
			cout<<"input error"<<endl;
		}
		cout<<"continue?(y/n)"<<endl;
		cin>>ch;
	}while(ch=="y");
}
void Interface::Output()
{
	int type;
	int i;
	cout<<"1.student"<<endl;
		cout<<"2.graduate"<<endl;
		cout<<"3.PostgraduateOnJob"<<endl;
		cout<<"4.teacher"<<endl;
		cout<<"PLease input the type of people you want to scan:";
		cin>>type;
		if(type==1)
		{
			if(numOfSt==0)
				cout<<"no date of student."<<endl;
			else 
			{
				for(i=0;i<N;i++)
					if(strcmp(st[i].GetName(),"00")!=0)
						st[i].Output();
			}
		}
		else if(type==2)
		{
			if(numOfGr==0)
				cout<<"no date of graduate"<<endl;
			else 
			{
				for(i=0;i<N;i++)
				if(strcmp(gr[i].GetName(),"00")!=0)
						gr[i].Output();
			}
		}
		else if(type==3)
		{
			if(numOfPo==0)
				cout<<"no date of PostgraduateOnJob"<<endl;
			else
			{
				for(i=0;i<N;i++)
				if(strcmp(po[i].GetName(),"00")!=0)
					po[i].Output();
			}
		}
		else if(type==4)
		{
			if(numOfTe==0)
				cout<<"no date of teacher"<<endl;
			else 
			{
				for (i=0;i<N;i++)
				if(strcmp(te[i].GetName(),"00")!=0)
					te[i].Output();
			}
		}
		else
			cout<<"input error"<<endl;
}
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			




























