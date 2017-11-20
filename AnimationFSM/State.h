#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual int getMinFrame() = 0;

	virtual int getMaxFrame() = 0;

	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void walking(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void shoveling(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void hammering(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void swording(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
};

#endif // ! ANIMATION_H

