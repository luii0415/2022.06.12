/*[���׸� 1] : ���� ����

��ǻ�����α׷��� �򰡰��� (���� 25��)
�а� : ��ǻ�Ͱ��а�
�й� : 202200250
�̸� : ���Ѹ�

���� ���� : �ڷγ�Ȯ���� ���� & ���� ��Ȳ

*/
#include <stdio.h>
#include "doingprogram.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	extern int ch;
	char d[100] = "1. 2022.06.09 / 2. 2022.06.10";
	int c = 2;
	/*[���׸� 7] : ���� �����*/
	FILE* fp;
	fp = fopen("MEMO.txt","w");
	fprintf(fp, "%s\n", d);
	fclose(fp);

	printf("----------\n");
	printf("1 : ���� Ȯ���� ��Ȳ\n");
	printf("2 : ���� Ȯ���� ��Ȳ\n");
	printf("3 : �ڷ� ȹ�� ��¥\n");
	printf("----------\n");

	printf("���ڸ� �Է����ּ���(1, 2, 3)");
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