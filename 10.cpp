#include <iostream>
using namespace std;
#include <iomanip>
#define LINE(n) {int i;for (i = 0; i < n; i++) cout << '='; cout << endl;}

int main() {
	char name[20];
	int kor, eng, mat, tot;
	double avg;

	cout << "이름 입력 : ";
	cin.getline(name, sizeof(name));
	cout << "세 과목의 점수 입력:";
	cin >> kor >> eng >> mat;

	tot = kor + eng + mat;
	avg = tot / 3.0;

	cout << setw(40) << "=====<성적표>=====" << "\n\n";
	LINE(60);
	//cout << left; 왼쪽정렬
	cout << setw(10) << "이름" << setw(10) << "국어" << setw(10) << "영어" << setw(10) << "수학" << setw(10) << "총점" << setw(10) << "평균" << endl;
	LINE(60);
	cout << fixed;
	cout << left<< setw(10) << name << setw(10) << kor << setw(10) << eng << setw(10) << mat
		<< setw(10) << tot << setw(10) << setprecision(3) << avg<<endl;
	
	
	return 0;
}