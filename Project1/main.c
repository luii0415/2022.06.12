/*[평가항목 1] : 과제 설명

컴퓨터프로그래밍 평가과제 (배점 25점)
학과 : 컴퓨터공학과
학번 : 202200250
이름 : 강한림

과제 주제 : 코로나확진의 국내 & 지역 현황

*/
#include <stdio.h>
#include "doingprogram.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	extern int ch;
	char d[100] = "1. 2022.06.09 / 2. 2022.06.10";
	int c = 2;
	/*[평가항목 7] : 파일 입출력*/
	FILE* fp;
	fp = fopen("MEMO.txt","w");
	fprintf(fp, "%s\n", d);
	fclose(fp);

	printf("----------\n");
	printf("1 : 국내 확진자 현황\n");
	printf("2 : 지역 확진자 현황\n");
	printf("3 : 자료 획득 날짜\n");
	printf("----------\n");

	printf("숫자를 입력해주세요(1, 2, 3)");
	scanf("%d", &ch);
	if (ch == 1 || ch == 2)
		doing_program(ch);
	else if (ch == 3)
		while ((c = fgetc(fp) != EOF))
		{
			fp = fopen("MEMO.txt", "r");
			putchar(c);
		}
	fclose(fp);
	printf("\n");

	return 0;
}