#include <iostream>

struct Student
{
	int number;
	char name[16];
};

int main()
{
	Student* p = new Student;

	//(*p).number = 0;
	p->number = 0;

	delete p;

	Student* p2 = new Student[5];

	p2[0].number = 1;
	p2[1].number = 2;
	// �迭�� �������̹Ƿ�
	// �󸶵��� ��ȯ�ؼ� ���Ͱ��� ��� ����

	p2->number = 1;
	(p2 + 1)->number = 2;
	// �� �����ϰ� ǥ���ϸ�
	// ���� ���̵� ����

	delete[] p2;
}