#include "doingprogram.h"
#define _CRT_SECURE_NO_WARNINGS
#define MYSIZE 5
#define SIZE 4
/*[���׸� 8] : ���� �ҽ� ���� ���*/


int doing_program(int ch)/*[���׸� 2] : �Լ� ���*/
{	
	int lowest_people = 139384;
	int i;
	int j = 0;
	int stop = 5;
	int restart = 0;
	/* [���׸� 5] : ����ü ���*/
	struct people {
		long number;
		double per_people;
	};
	
	struct people list[SIZE] = { 
		{18,0.03},
		{106,0.21},
		{111,0.21},
		{12161,23.55}
	};

	long in_sea_people[MYSIZE]; /* [���׸� 3] : �迭 ���*/
	in_sea_people[0] = 4948774;
	in_sea_people[1] = 3635708;
	in_sea_people[2] = 1097720;
	in_sea_people[3] = 1094759;
	in_sea_people[4] = 1076197;
	
	int* p;/*[���׸� 4] : ������ ���*/
	p = &lowest_people;

	long (*pa)[5]; /*[���׸� 6] : ������ Ȱ��*/
	pa = &in_sea_people;
	
	do 
	{
		if (ch == 1)
			for (i = 0; i < SIZE; i++)
				printf("���� : ���, ��� ������, �ű��Կ�, Ȯ��\n����: %d, �α� 10�����: %f\n ", list[i].number, list[i].per_people);
		else if (ch == 2) 
			printf("Ȯ���ڼ� ���� 5�� ����(,���,����,�λ�,�泲,��õ)�� �������� �������� ����մϴ�.");
			
			for (j = 0; j < 5; j++)
				printf("%d. %s\n", j, (*pa)[j]); 
			printf("���� : %s\n", *p);

		printf("�ٽ� ���� �Ͻðڽ��ϱ�? �ٽ� �����Ϸ��� 0(����)�� �Է����ּ���.");
		scanf("%d", &restart);
	} while (restart == 0);


	return 0;
}


