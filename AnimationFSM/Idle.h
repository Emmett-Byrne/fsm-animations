#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle();
	~Idle() {};
	void handleInput();
	void update();
	int getMinFrame();
	int getMaxFrame();
	void jumping(Animation* a);
	void walking(Animation* a);
	void hammering(Animation* a);
	void shoveling(Animation* a);
	void swording(Animation* a);

private:
	int m_minFrame;
	int m_maxFrame;
};

#endif // !IDLE_H