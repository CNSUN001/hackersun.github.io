

//C++输入输出流
//标准输入 键盘 标准输出 屏幕
//数据先到缓冲区 再输出或输入


//标准输入流
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//cin.get() //一次只能读取一个字符
//cin.get(一个参数) //读一个字符
//cin.get(两个参数) //可以读字符串
//cin.getline()
//cin.ignore()
//cin.peek()
//cin.putback()

void test01()
{
	//输入 as 输出a s
	char c = cin.get();

	cout << "c = " << c << endl;//a


	 c = cin.get();
	
	cout << "c = " << c << endl;//s
	
	c = cin.get();

	cout << "c = " << c << endl;//拿到换行符

	c = cin.get();

	cout << "c = " << c << endl;//等待下次输入
}


//cin.get(两个参数) 
void test02()
{
	char buf[1024] = { 0 };
	cin.get(buf, 1024);//将数据写入buf

	char c = cin.get();
	//换行符遗留在缓冲区
	if (c == '\n')
	{
		cout << "换行符遗留在缓冲区" << endl;
	}
	else
	{
		cout << "换行符不在缓冲区" << endl;

	}

	cout << buf << endl;
}

//cin.get(两个参数) //可以读字符串
void test03()
{
	char buf[1024] = {0};
	cin.getline(buf, 1024);
	//cin.getline获取字符串的时候，换行符不在缓冲区，并且没有被buf拿走 被丢弃了
	char c = cin.get();
	if (c == '\n')
	{
		cout << "换行符遗留在缓冲区" << endl;
	}
	else
	{
		cout << "换行符不在缓冲区" << endl;
	}

	cout << buf << endl;
}


//cin.ignore() 默认忽略1个字符，填入参数x，代表忽略x个字符
void test04()
{
	cin.ignore(2);
	char c = cin.get();
	cout << "c = " << c << endl;
}

//cin.peek() 偷窥
void test05()
{
	char c = cin.peek();
	//看了一眼第一个字符但是没有取走
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

}

void test06()
{
	char c = cin.get();
	cin.putback(c);
	char buf[1024] = { 0 };
	cin.getline(buf, 1024);
	cout << buf << endl;
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();
	system("pause");
	return EXIT_SUCCESS;
}

