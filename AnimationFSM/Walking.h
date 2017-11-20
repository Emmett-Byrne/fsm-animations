#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Walking : public State
{
public:
	Walking() { m_minFrame = 6; m_maxFrame = 11; };
	~Walking() {};
	int getMinFrame();
	int getMaxFrame();
	void jumping(Animation* a);
	void hammering(Animation* a);
	void shoveling(Animation* a);
	void swording(Animation* a);
	void idle(Animation* a);

private:
	int m_minFrame;
	int m_maxFrame;
};

#endif // !IDLE_H