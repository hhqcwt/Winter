#include <iostream>
#include <string>

int main() {
	char str[80];
	char ch;
	int i = 0;

	std::cout << "������ �Է��ϼ��� :";
	ch = std::cin.get();

	while (ch != '\n') {
		str[i] = ch;
		i++;
		ch = std::cin.get();
		//getline(cin, ch);
	}

	str[i] = '\0';
	std::cout << "�Էµ� ������ :" << str << std::endl;

	std::cout << "���ο� ������ �Է��ϼ���:";
	std::cin.getline(str, sizeof(str));
	std::cout << "���� �Էµ� ������:" << str << std::endl;
	return 0;
}