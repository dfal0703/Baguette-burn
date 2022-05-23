#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#pragma warning(disable:4996)
#include <stdio.h>
#include <iostream>
#include <ctime>
#include "event.h"
#include "status.h"
#include "random.h"

int hp = 0, atk = 0, def = 0, spd = 0;
status player(hp = 30, atk = 3, def = 0, spd = 3);

int main()
{
	srand((unsigned int)time(NULL));//srand의 시드값 재설정
	int rands = 0;
	int hp = 0, atk = 0, def = 0, spd = 0;
	random(&rands);
	event(rands);


	return 0;
}