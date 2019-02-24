//영문 텍스트 입력, 알파벳 히스토그램작성

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int length;
	char buf[1000];
	int alpha[26];
	
	//alpha 초기화
	for (int j = 0; j < 26; j++) {
		alpha[j] = 0;
	}
	//입력
	cin.getline(buf, 1000, ';');
	//입력값 길이확인
	length = strlen(buf);
	
	//대문자->소문자, 알파벳 카운트
	for (int i = 0; i < length; i++) {
		if (isalpha(buf[i])!=0) {
			if (buf[i] >=65 && buf[i] <= 90) {
				buf[i] = tolower(buf[i]);
			}
			alpha[buf[i] - 97]++;
		}
	}

	//별 출력
	for (int k = 97; k < 123; k++) {
		cout << (char)k << " (" << alpha[k - 97] << ") \t:";
		for (int star=0; star < alpha[k - 97]; star++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << buf;
}