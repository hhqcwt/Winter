#include <iostream>
using namespace std;

int main() {
	int i = 0;
	double n[5] = { 0 },max;
	cout << "5���� �Ǽ��� �Է� �ϼ���: " << endl;
	
	cin >> n[0];
	max = n[0];

	for (i = 1; i < 5; i++) {
		cin >> n[i];
		if (max < n[i])
			max = n[i];
	}

	cout << "���� ū ��= " <<max<< endl;


	return 0;
}