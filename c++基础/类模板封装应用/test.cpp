#include "myArray.hpp"

class Person
{
public:
	Person() {};
	Person(string name,int age):m_Name(name),m_Age(age)
	{}
	string m_Name = "0";
	int m_Age = 0;
};

void myPrintInt(myArray<int>&myIntArr)
{
	for (int i = 0; i < myIntArr.getSize(); i++)
	{
		cout << myIntArr[i] << endl;
	}
}

void test01()
{
	myArray<int>myIntArr(100);
	for (int i = 0; i<10; i++)
	{
		myIntArr.pushBack(i + 100);
	}
	//myPrintInt(myIntArr);

	myArray<int>myIntArr2(100);

	myIntArr2 = myIntArr;
	myPrintInt(myIntArr2);
}

void myPrintPerson(myArray<Person>& myPersonArr)
{
	for (int i = 0; i < myPersonArr.getSize(); i++)
	{
		cout << "ÐÕÃû£º" << myPersonArr[i].m_Name << " ÄêÁä£º" << myPersonArr[i].m_Age << endl;
	}
}

void test02()
{
	myArray<Person> myPersonArr(100);
	Person p1("ËïÎò¿Õ", 1000);
	Person p2("Öí°Ë½ä", 800);
	Person p3("É³ºÍÉÐ", 700);
	Person p4("ÌÆÉ®", 600);
	Person p5("°×ÁúÂí", 500);

	myPersonArr.pushBack(p1);
	myPersonArr.pushBack(p2);
	myPersonArr.pushBack(p3);
	myPersonArr.pushBack(p4);
	myPersonArr.pushBack(p5);
	//myPrintPerson(myPersonArr);
	myArray<Person> myPersonArr2(100);
	myPersonArr2 = myPersonArr;
	myPrintPerson(myPersonArr2);

}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

