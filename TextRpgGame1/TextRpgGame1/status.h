#pragma once
#include "event.h"
#include "random.h"

class status
{
public://public ���� �ؾ� ������ ������ �� ����.
	int hp = 0;
	int atk = 0;
	int def = 0;
	int spd = 0;

	status(int hp1, int atk1, int def1, int spd1)
	{
		this->hp = hp1;//����� ���� ���� ���ο��� �����ϰ� �μ��� ������ ��뺯����.HP���� ����.
		this->atk = atk1;
		this->def = def1;
		this->spd = spd1;
	}
};



