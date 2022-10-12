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
	// 배열이 포인터이므로
	// 얼마든지 변환해서 위와같이 사용 가능

	p2->number = 1;
	(p2 + 1)->number = 2;
	// 더 복잡하게 표현하면
	// 위와 같이도 가능

	delete[] p2;
}