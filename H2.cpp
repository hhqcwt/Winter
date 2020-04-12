#include <iostream>
using namespace std;

int main() {
	int i = 0;
	double n[5] = { 0 },max;
	cout << "5개의 실수를 입력 하세요: " << endl;
	
	cin >> n[0];
	max = n[0];

	for (i = 1; i < 5; i++) {
		cin >> n[i];
		if (max < n[i])
			max = n[i];
	}

	cout << "제일 큰 수= " <<max<< endl;


	return 0;
}