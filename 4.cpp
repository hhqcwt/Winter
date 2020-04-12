#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	cout << "한문자를 입력하십시오.(끝내려면 @)\n";
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
