#ifndef INPUT_H
#define INPUT_H

#include <iostream>

class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		UP,
		LEFT,
		RIGHT,
		DOWN,
		SPACE
	};

	void setCurrent(Action);
	Action getCurrent();
	Action getPrevious();

private:
	Action m_current;
	Action m_previous;
};
#endif