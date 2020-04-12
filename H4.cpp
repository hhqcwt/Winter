#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cout << "암호를 입력해주세요" << endl;
	getline(cin, s1);
	cout << "암호를 다시한번 입력해주세요" << endl;
	getline(cin, s2);

	if (s1 == s2)
		cout << "암호가 맞았습니다" << endl;
	else
		cout << "암호가 틀렸습니다" << endl;
	return 0;
}