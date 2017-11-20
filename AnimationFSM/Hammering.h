#pragma once
#include <State.h>
class Hammering :
	public State
{
public:
	Hammering();
	void handleInput();
	void update();
	int getMinFrame();
	int getMaxFrame();
	void jumping(Animation* a);
	void walking(Animation* a);
	void shoveling(Animation* a);
	void swording(Animation* a);
	void idle(Animation* a);

private:
	int m_minFrame;
	int m_maxFrame;
};

