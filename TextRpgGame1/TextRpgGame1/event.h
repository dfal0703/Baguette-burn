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
	printf("-�ƹ��ϵ� �Ͼ�� �ʾҴ�..\n");
}

void event_rest()
{
	printf("-�޽��Ҹ��� ��Ҹ� �߰��ߴ�. HP�� 10�ۼ�Ʈ �����ߴ�.\n");
}

void event_training()
{
	printf("-���ڱ� �Ʒ��� �ϰ�;�����!! �������ͽ��� �����ߴ�.\n");
}

void event_shop()
{
	printf("-������ �߰��ߴ�. 100�������� �������� �̰ڽ��ϱ�?");

}