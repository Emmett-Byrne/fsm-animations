#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Shoveling.h>
#include <Hammering.h>
#include <Swording.h>



Swording::Swording()
{
	m_minFrame = 18;
	m_maxFrame = 23;
}

void Swording::handleInput() {}
void Swording::update() {}

int Swording::getMinFrame()
{
	return m_minFrame;
}

int Swording::getMaxFrame()
{
	return m_maxFrame;
}

void Swording::jumping(Animation* a)
{
	//std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Swording::walking(Animation* a)
{
	//std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Swording::hammering(Animation * a)
{
	a->setCurrent(new Hammering());
	delete this;
}

void Swording::shoveling(Animation * a)
{
	a->setCurrent(new Shoveling());
	delete this;
}

void Swording::idle(Animation* a)
{
	//std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}