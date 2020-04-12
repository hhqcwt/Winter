#include <iostream>
#include <string>
using namespace std;

int main() {
	string a="yes",s;
	while (1) {
		cout << "종료하고 싶으면 'yes'를 입력하세요" << endl;
		getline(cin, s);

		if (a == s) {
		cout << "종료합니다" << endl;
		break;
		}
	}
	return 0;
}