#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
3.1.2.1 string ���캯��
string();//����һ���յ��ַ��� ����: string str;
string(const string& str);//ʹ��һ��string�����ʼ����һ��string����
string(const char* s);//ʹ���ַ���s��ʼ��
string(int n, char c);//ʹ��n���ַ�c��ʼ��

3.1.2.2 string������ֵ����
string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
string& operator=(const string &s);//���ַ���s������ǰ���ַ���
string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
string& assign(const char *s);//���ַ���s������ǰ���ַ���
string& assign(const char *s, int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string &s);//���ַ���s������ǰ�ַ���
string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���
string& assign(const string &s, int start, int n);//��s��start��ʼn���ַ���ֵ���ַ���
*/

void test01()
{
	string str;
	string str2(str);

	string str3 = "abc";
	cout << "str3 = " << str3 << endl;

	string str4(10, 'a');//10��a
	cout << "str4 = " << str4 << endl;

}

void test02()
{
	string str;
	str = "abc";
	str.assign("abcde", 3);
	cout << str << endl;

	string str2;
	str2.assign(str);
	cout << str2 << endl;

	//string& assign(const string & s, int start, int n);//��s��start��ʼn���ַ���ֵ���ַ���
	str2.assign(str, 1, 2);
	cout << str2 << endl;
}

/*
3.1.2.3 string��ȡ�ַ�����
char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
char& at(int n);//ͨ��at������ȡ�ַ�
*/
void test03()
{
	string str = "hello world";
	//for (int i = 0; i < str.size(); i++)
	//{
	//	//cout << str[i] << endl;
	//	cout << str.at(i) << endl;
	//}
	//[]��at����[]����Խ�� ֱ�ӹҵ���at����Խ�� �׳�out_of_rang�쳣
	try
	{
		//cout << str[100] << endl;
		cout << str.at(100) << endl;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "�쳣����" << endl;;
	}
}

/*
3.1.2.4 stringƴ�Ӳ���
string& operator+=(const string& str);//����+=������
string& operator+=(const char* str);//����+=������
string& operator+=(const char c);//����+=������
string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);//ͬoperator+=()
string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�c

3.1.2.5 string���Һ��滻
int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const;  //�����ַ�c��һ�γ���λ��
int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

void test04()
{
	//stringƴ�Ӳ���
	//string str1 = "��";
	//string str2 = "������";

	//str1 += str2;
	//cout << str1 << endl;

	//str1.append("�찲��");
	//cout << str1 << endl;

	//str1.append(3, 'a');
	//cout << str1 << endl;

	//string���Һ��滻
	string str = "abcdefgde";

	//int pos = str.find("fg",0,2);//��posλ�ò���s��ǰn���ַ���һ��λ��
	//if (pos == -1)
	//{
	//	cout << "δ�ҵ��ַ���" << endl;
	//}
	//else
	//{
	//	cout << "�ҵ����ַ�����λ��Ϊ��" << pos << endl;
	//}


	//rfind ���������
	//int  pos = str.rfind("de");//����s���һ�γ���λ��
	//if (pos == -1)
	//{
	//	cout << "δ�ҵ��ַ���" << endl;
	//}
	//else
	//{
	//	cout << "�ҵ����ַ�����λ��Ϊ��" << pos << endl;
	//}

	//�滻 replace
	string& replace(int pos, int n, const string & str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
	string str2 = "11111";
	str.replace(1, 3, str2);
	cout << str << endl;
}


void test05()
{

//3.1.2.6 string�Ƚϲ���
//compare������>ʱ���� 1��<ʱ���� -1��==ʱ���� 0��
//�Ƚ����ִ�Сд���Ƚ�ʱ�ο��ֵ�˳����Խǰ���ԽС��
//��д��A��Сд��aС��
//
//int compare(const string &s) const;//���ַ���s�Ƚ�
//int compare(const char *s) const;//���ַ���s�Ƚ�

	string str1 = "bbcde";
	string str2 = "abcde";
	if (str1.compare(str2) == 0)
	{
		cout << "str1 == str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}

}

void test06()
{
//3.1.2.7 string�Ӵ�
//string substr(int pos = 0, int n = npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���

	//string str = "abcdef";
	//string subStr = str.substr(0, 3);
	//cout << subStr << endl;

	string email = "zhangtao@sian.com";

	int pos = email.find('@');  //8

	string userName = email.substr(0, pos);

	cout << userName << endl;

}

//�����ַ���
void test07()
{
	string str = "www.itcast.com.cn";

	vector<string> v; //��www  itcast com cn��ȡ��vector������
	int start = 0;
	int pos = -1;

	while (true)
	{
		 pos = str.find('.',start);

		 if (pos == -1)//û���ҵ�����-1�����һ��û�� "." ���Ծͻ�©�����һ��
		 {
			 //�����һ�����ʵ�������
			 string tempStr = str.substr(start, str.size() - start);
			 v.push_back(tempStr);
			 break;
		 }

		string tempStr = str.substr(start, pos - start);
		v.push_back(tempStr);

		start = pos + 1;
	}
	for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}

/*
3.1.2.8 string�����ɾ������
string& insert(int pos, const char* s); //�����ַ���
string& insert(int pos, const string& str); //�����ַ���
string& insert(int pos, int n, char c);//��ָ��λ�ò���n���ַ�c
string& erase(int pos, int n = npos);//ɾ����Pos��ʼ��n���ַ�
*/

void test08()
{
	//insert
	string str = "hello";
	//str.insert(1, "111");
	str.insert(1, 3, 'c');
	cout << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << str << endl;
}


void doWork(string str)
{

}

void doWork2(const char* str)
{

}

//3.1.2.9 string��c-style�ַ���ת��
void test09()
{
	const char* str = "abcd";
	//const char*תΪstring

	string s(str); //����s���вι���

	//string תΪ const char*
	const char* str2 = s.c_str();
	
	//const char*������ʽ����ת��Ϊstring
	doWork(str2);

	//string��������ʽ����ת��Ϊconst char*
	//doWork2(s);
}
//Ϊ���޸�string�ַ��������ݣ��±������[]��at���᷵���ַ������á������ַ������ڴ汻���·���֮�󣬿��ܷ�������.
void test10()
{
		string s = "abcdefg";
		char& a = s[2];
		char& b = s[3];

		a = '1';
		b = '2';

		cout << s << endl;
		cout << (int*)s.c_str() << endl;

		s = "pppppppppppppppppppppppp";

		//a = '1';
		//b = '2';

		cout << s << endl;
		cout << (int*)s.c_str() << endl;
}

//дһ����������string�ַ���Сд��ĸ��ɴ�д��ĸ
void test11()
{
	string str = "abcdEFg";
	for (int i = 0; i < str.size(); i++)
	{
		//str[i] = toupper(str[i]); //ת��д
		str[i] = tolower(str[i]);	//תСд
	}
	cout << str << endl;
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07(); //�����ַ���
	//test08();
	//test09();
	//test10(); 
	test11();
	system("pause");
	return EXIT_SUCCESS;
}

