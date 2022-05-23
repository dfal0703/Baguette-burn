#pragma once
#include "status.h"
#include "random.h"

void event_skip();
void event_rest();
void event_training();
void event_shop();

void event(int a)//a=rands
{
	if (a == 0)
		event_skip();
	else if (a >= 1 && a <= 3)
		event_rest();
	else if (a >= 4 && a <= 6)
		event_training();
	else
		event_shop();
}

void event_skip()
{
	printf("-아무일도 일어나지 않았다..\n");
}

void event_rest()
{
	printf("-휴식할만한 장소를 발견했다. HP가 10퍼센트 증가했다.\n");
}

void event_training()
{
	printf("-갑자기 훈련을 하고싶어졌다!! 스테이터스가 증가했다.\n");
}

void event_shop()
{
	printf("-상점을 발견했다. 100코인으로 아이템을 뽑겠습니까?");

}