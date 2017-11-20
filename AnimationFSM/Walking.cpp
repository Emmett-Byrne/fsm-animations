#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Shoveling.h>
#include <Hammering.h>
#include <Swording.h>

#include <string>


int Walking::getMinFrame()
{
	return m_minFrame;
}

int Walking::getMaxFrame()
{
	return m_maxFrame;
}

void Walking::idle(Animation* a)
{
	//std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walking::jumping(Animation* a)
{
	//std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::hammering(Animation * a)
{
	a->setCurrent(new Hammering());
	delete this;
}

void Walking::shoveling(Animation * a)
{
	a->setCurrent(new Shoveling());
	delete this;
}

void Walking::swording(Animation * a)
{
	a->setCurrent(new Swording());
	delete this;
}