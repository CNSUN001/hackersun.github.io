
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem):m_cpu(cpu), m_vc(vc), m_mem(mem)
	{
		cout << "���Թ���" << endl;

	}
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
	void doWork()
	{
		this->m_cpu->calculate();
		this->m_vc->display();
		this->m_mem->storage();
	}

	~Computer()
	{
		cout << "��������" << endl;

		if (this->m_cpu)
		{
			delete this->m_cpu;
			this->m_cpu = NULL;
		}
		if (this->m_vc)
		{
			delete this->m_vc;
			this->m_vc = NULL;
		}
		if (this->m_mem)
		{
			delete this->m_mem;
			this->m_mem = NULL;
		}
	}

};

//intel����

class intelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "intelCPU��ʼ������" << endl;
 }
};

class intelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "intelvideoCard��ʾ" << endl;
	}
};

class intelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "intelMemory�洢" << endl;
	}
};

//Lenovo
class LenovoCpu :public CPU
{
public:
	virtual void calculate()
	{
		cout << "LenovoCpu����" << endl;
	}
};


class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "LenovovideoCard��ʾ" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "LenovoMemory�洢" << endl;
	}
};

void test01()
{
	cout << "��һ̨������ɣ�" << endl;
	CPU* intelCpu = new intelCPU;
	VideoCard* LenovoVC = new LenovoVideoCard;
	Memory* LenovoMem = new LenovoMemory;

	Computer c1(intelCpu, LenovoVC, LenovoMem);
	c1.doWork();

	cout << "�ڶ�̨������ɣ�" << endl;
	CPU* LenovoCpu2 = new LenovoCpu;
	VideoCard* LenovoVC2 = new LenovoVideoCard;
	Memory* LenovoMem2 = new LenovoMemory;

	Computer c2(LenovoCpu2, LenovoVC2, LenovoMem2);
	c2.doWork();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}



