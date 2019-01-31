#include<stdio.h>
#include<stdbool.h>

bool isAlphabet(char c) { // a ~ Zにcharがあればtrue
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}
int main(int argc, char const *argv[]) {
	do {
		bool isEnd = true; // これがtrueならプログラム終了
		int wordNum = 0; // 単語数
		char inputChar; // 読み込む文字
		bool findWord = false; // 単語を発見したか否か
		printf("文字列を入力してください: ");
		
		while((inputChar = getchar()) != '\n') { // 改行が読み込まれない限り繰り返す
			isEnd = false; // 一文字以上発見してるので、プログラムはまだ続く
			if (!isAlphabet(inputChar)) 
                findWord = false;
			else if (!findWord) { // 単語の開始地点を発見した場合
				findWord = true;
				++ wordNum; // 単語数+1
			}
		}   
		if (isEnd) break; // 文字を発見しなかったので終了
		printf("ワード数: %d\n", wordNum);
	} while(true);
}