#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>//文件流
#include <string>
using namespace std;

void test01()
{
	//写文件 o --输出
	ofstream ofs("./test.text", ios::out | ios::trunc);

	//ofs.open("./test.text", ios::out | ios::trunc); 设置打开方式以及路径

	if (!ofs.is_open())
	{
		cout << "文件打开失败" << endl;
	};
	ofs << "姓名：孙悟空" << endl;
	ofs << "年龄：999" << endl;

	//关闭
	ofs.close();
}

void test02()
{
	//读文件
	ifstream ifs;
	ifs.open("./test.text", ios::in );

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	};

	//第一种方式读取
	//char buf[1024] = { 0 };
	//while (ifs >> buf) //利用>>把数据一行行读出来
	//{
	//	cout << buf << endl;
	//}

	//第二种方式读取
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//		cout << buf << endl;
	//}

	//第三种方式读取
	//string buf;
	//while (getline(ifs,buf)) 
	//{
	//cout << buf << endl;
	//}

	//第四种不推荐
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	//关闭
	ifs.close();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

