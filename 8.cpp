#include <iostream>
#include <string>
using namespace std;

int main() {
	string song = "Falling in love with you";
	string elvis("Elvis Presley");
	string singer; //���ڿ� singer

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ:ù���ڴ� " << elvis[0] << ")?";

	getline(cin, singer); //stringŸ���� C++���ڿ��� �Է¹ޱ����� �����Լ�
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�";
	else
		cout << "Ʋ�Ƚ��ϴ�" + elvis + "�Դϴ�" << endl;
}