#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cout << "��ȣ�� �Է����ּ���" << endl;
	getline(cin, s1);
	cout << "��ȣ�� �ٽ��ѹ� �Է����ּ���" << endl;
	getline(cin, s2);

	if (s1 == s2)
		cout << "��ȣ�� �¾ҽ��ϴ�" << endl;
	else
		cout << "��ȣ�� Ʋ�Ƚ��ϴ�" << endl;
	return 0;
}