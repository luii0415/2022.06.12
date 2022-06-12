#include "doingprogram.h"
#define _CRT_SECURE_NO_WARNINGS
#define MYSIZE 5
#define SIZE 4
/*[평가항목 8] : 다중 소스 파일 사용*/


int doing_program(int ch)/*[평가항목 2] : 함수 사용*/
{	
	int lowest_people = 139384;
	int i;
	int j = 0;
	int stop = 5;
	int restart = 0;
	/* [평가항목 5] : 구조체 사용*/
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

	long in_sea_people[MYSIZE]; /* [평가항목 3] : 배열 사용*/
	in_sea_people[0] = 4948774;
	in_sea_people[1] = 3635708;
	in_sea_people[2] = 1097720;
	in_sea_people[3] = 1094759;
	in_sea_people[4] = 1076197;
	
	int* p;/*[평가항목 4] : 포인터 사용*/
	p = &lowest_people;

	long (*pa)[5]; /*[평가항목 6] : 포인터 활용*/
	pa = &in_sea_people;
	
	do 
	{
		if (ch == 1)
			for (i = 0; i < SIZE; i++)
				printf("순서 : 사망, 재원 위중증, 신규입원, 확진\n일일: %d, 인구 10만명당: %f\n ", list[i].number, list[i].per_people);
		else if (ch == 2) 
			printf("확진자수 상위 5개 지역(,경기,서울,부산,경남,인천)과 최하위의 지역만을 출력합니다.");
			
			for (j = 0; j < 5; j++)
				printf("%d. %s\n", j, (*pa)[j]); 
			printf("세종 : %s\n", *p);

		printf("다시 진행 하시겠습니까? 다시 진행하려면 0(숫자)를 입력해주세요.");
		scanf("%d", &restart);
	} while (restart == 0);


	return 0;
}


