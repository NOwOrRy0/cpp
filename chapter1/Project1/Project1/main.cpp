#include <iostream>

int main() {
	using namespace std;

	cout << "��������� �Է��ϼ���. : ";
	int years;
	cin >> years;
	cout << "2002 ���Ͽ����� ��� �ѱ� ���̴� " << 2002 - years << "���Դϴ�." << endl;
	return 0;

#ifndef _M_X64
	cout << "�� ���α׷��� x86���α׷��Դϴ�." << endl;
#else
	cout << "�� ���α׷��� x64���α׷��Դϴ�." << endl;
#endif

}