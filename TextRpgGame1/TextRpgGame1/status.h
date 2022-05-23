#pragma once
#include "event.h"
#include "random.h"

class status
{
public://public 으로 해야 변수를 변경할 수 있음.
	int hp = 0;
	int atk = 0;
	int def = 0;
	int spd = 0;

	status(int hp1, int atk1, int def1, int spd1)
	{
		this->hp = hp1;//사용할 변수 명을 메인에서 지정하고 인수를 넣으면 사용변수명.HP값에 저장.
		this->atk = atk1;
		this->def = def1;
		this->spd = spd1;
	}
};



