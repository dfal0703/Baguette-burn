#pragma once
#include <stdlib.h>
#include "event.h"
#include "status.h"

void random(int* a);
void random_attack(int a, status b);

void random(int* a)//a=rands
{
	*a = rand();
	*a = (int)*a % 9;//�����Լ� �κ�. 9 �̳��� ǥ����
}

void random_attack(int a, status b)//a=���� �������ͽ�, b=rands
{
	
}