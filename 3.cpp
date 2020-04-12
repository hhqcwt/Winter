#include <iostream>
#include <string>

int main() {
	char str[80];
	char ch;
	int i = 0;

	std::cout << "문장을 입력하세요 :";
	ch = std::cin.get();

	while (ch != '\n') {
		str[i] = ch;
		i++;
		ch = std::cin.get();
		//getline(cin, ch);
	}

	str[i] = '\0';
	std::cout << "입력된 문장은 :" << str << std::endl;

	std::cout << "새로운 문장을 입력하세요:";
	std::cin.getline(str, sizeof(str));
	std::cout << "새로 입력된 문장은:" << str << std::endl;
	return 0;
}