#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	cout << "�ѹ��ڸ� �Է��Ͻʽÿ�.(�������� @)\n";
	cin.get(ch);
	while (ch != '@') {
		if (isalnum(ch))
		{
			if (isdigit(ch))
				;
			else if (islower(ch)) {
				cout.put(toupper(ch));
				
			}
			else
				cout.put(tolower(ch));
		}
		else
			cout.put(ch);
		cin.get(ch);
	}
	return 0;
}
