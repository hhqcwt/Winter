#include <iostream>
using namespace std;
#include <iomanip>
#define LINE(n) {int i;for (i = 0; i < n; i++) cout << '='; cout << endl;}

int main() {
	char name[20];
	int kor, eng, mat, tot;
	double avg;

	cout << "�̸� �Է� : ";
	cin.getline(name, sizeof(name));
	cout << "�� ������ ���� �Է�:";
	cin >> kor >> eng >> mat;

	tot = kor + eng + mat;
	avg = tot / 3.0;

	cout << setw(40) << "=====<����ǥ>=====" << "\n\n";
	LINE(60);
	//cout << left; ��������
	cout << setw(10) << "�̸�" << setw(10) << "����" << setw(10) << "����" << setw(10) << "����" << setw(10) << "����" << setw(10) << "���" << endl;
	LINE(60);
	cout << fixed;
	cout << left<< setw(10) << name << setw(10) << kor << setw(10) << eng << setw(10) << mat
		<< setw(10) << tot << setw(10) << setprecision(3) << avg<<endl;
	
	
	return 0;
}