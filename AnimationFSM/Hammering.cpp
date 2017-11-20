#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Shoveling.h>
#include <Hammering.h>
#include <Swording.h>



Hammering::Hammering()
{
	m_minFrame = 24;
	m_maxFrame = 29;
}

void Hammering::handleInput() {}
void Hammering::update() {}

int Hammering::getMinFrame()
{
	return m_minFrame;
}

int Hammering::getMaxFrame()
{
	return m_maxFrame;
}

void Hammering::jumping(Animation* a)
{
	//std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Hammering::walking(Animation* a)
{
	//std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Hammering::shoveling(Animation * a)
{
	a->setCurrent(new Shoveling());
	delete this;
}

void Hammering::swording(Animation * a)
{
	a->setCurrent(new Swording());
	delete this;
}

void Hammering::idle(Animation* a)
{
	//std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}