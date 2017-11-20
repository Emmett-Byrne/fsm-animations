#pragma once
#include <State.h>
class Swording :
	public State
{
public:
	Swording();
	void handleInput();
	void update();
	int getMinFrame();
	int getMaxFrame();
	void jumping(Animation* a);
	void walking(Animation* a);
	void hammering(Animation* a);
	void shoveling(Animation* a);
	void idle(Animation* a);

private:
	int m_minFrame;
	int m_maxFrame;
};

