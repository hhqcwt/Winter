#include <iostream>

int main() {
	using namespace std;
	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << count << "���ڸ� �о����ϴ�.\n";
	return 0;
}