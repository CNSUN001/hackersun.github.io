#include "person.cpp" //包含.h文件会报错 因为类模板的函数不是一开始就创建的，包含.h文件会在链接时出问题 
//所以类模板不建议分文件编写


void test01()
{
	Person<string, int>P("Jerry", 20);
	P.showPerson();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

