#include <iostream>
#include <string>
using namespace std;

int main() {
	string a="yes",s;
	while (1) {
		cout << "�����ϰ� ������ 'yes'�� �Է��ϼ���" << endl;
		getline(cin, s);

		if (a == s) {
		cout << "�����մϴ�" << endl;
		break;
		}
	}
	return 0;
}