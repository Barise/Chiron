//���� �ؽ�Ʈ �Է�, ���ĺ� ������׷��ۼ�

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int length;
	char buf[1000];
	int alpha[26];
	
	//alpha �ʱ�ȭ
	for (int j = 0; j < 26; j++) {
		alpha[j] = 0;
	}
	//�Է�
	cin.getline(buf, 1000, ';');
	//�Է°� ����Ȯ��
	length = strlen(buf);
	
	//�빮��->�ҹ���, ���ĺ� ī��Ʈ
	for (int i = 0; i < length; i++) {
		if (isalpha(buf[i])!=0) {
			if (buf[i] >=65 && buf[i] <= 90) {
				buf[i] = tolower(buf[i]);
			}
			alpha[buf[i] - 97]++;
		}
	}

	//�� ���
	for (int k = 97; k < 123; k++) {
		cout << (char)k << " (" << alpha[k - 97] << ") \t:";
		for (int star=0; star < alpha[k - 97]; star++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << buf;
}