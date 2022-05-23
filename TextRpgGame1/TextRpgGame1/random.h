#pragma once
#include <stdlib.h>
#include "event.h"
#include "status.h"

void random(int* a);
void random_attack(int a, status b);

void random(int* a)//a=rands
{
	*a = rand();
	*a = (int)*a % 9;//랜덤함수 부분. 9 이내로 표현함
}

void random_attack(int a, status b)//a=적의 스테이터스, b=rands
{
	
}