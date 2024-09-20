#include <iostream>

int main() {
	using namespace std;

	cout << "출생연도를 입력하세요. : ";
	int years;
	cin >> years;
	cout << "2002 한일월드컵 당시 한국 나이는 " << 2002 - years << "세입니다." << endl;
	return 0;

#ifndef _M_X64
	cout << "이 프로그램은 x86프로그램입니다." << endl;
#else
	cout << "이 프로그램은 x64프로그램입니다." << endl;
#endif

}