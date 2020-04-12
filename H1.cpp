#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int i = 1;

	while (i <= 100)
	{
		cout << i;
		
		i++;
		
		if ((i % 10) == 1) {
			cout << endl;
			continue;
		}
		cout << setw(10);
	}
	return 0;
}