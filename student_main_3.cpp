#include"student_3.h"
#include<fstream.h>
const int M = 10;
int main()
{
	Student stu[M];
	char filename[80];
	iftream inf(student_3_data.txt");
	for(int i=0;i<M;i++)
	{
		inf >>stu[i};
	}
	inf.close();
	cout<<"\n请输入数据文件名:";
	cin>>filename;
	ofstream outf(filename);
	for(i=0;i<M;i++)
		out<<stu[i];
	outf.close();
	return 0;
}