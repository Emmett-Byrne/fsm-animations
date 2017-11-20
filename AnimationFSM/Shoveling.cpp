#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Shoveling.h>
#include <Hammering.h>
#include <Swording.h>



Shoveling::Shoveling()
{
	m_minFrame = 30;
	m_maxFrame = 35;
}

void Shoveling::handleInput() {}
void Shoveling::update() {}

int Shoveling::getMinFrame()
{
	return m_minFrame;
}

int Shoveling::getMaxFrame()
{
	return m_maxFrame;
}

void Shoveling::jumping(Animation* a)
{
	//std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Shoveling::walking(Animation* a)
{
	//std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Shoveling::hammering(Animation * a)
{
	a->setCurrent(new Hammering());
	delete this;
}

void Shoveling::swording(Animation * a)
{
	a->setCurrent(new Swording());
	delete this;
}

void Shoveling::idle(Animation* a)
{
	//std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
