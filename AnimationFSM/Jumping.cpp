#include <Idle.h>
#include <Jumping.h>
#include <Walking.h>
#include <Shoveling.h>
#include <Hammering.h>
#include <Swording.h>

#include <string>

Jumping::Jumping()
{
	m_minFrame = 12; 
	m_maxFrame = 17;
};

int Jumping::getMinFrame()
{
	return m_minFrame;
}

int Jumping::getMaxFrame()
{
	return m_maxFrame;
}

void Jumping::idle(Animation* a)
{
	//std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::walking(Animation* a)
{
	//std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Jumping::hammering(Animation * a)
{
	a->setCurrent(new Hammering());
	delete this;
}

void Jumping::shoveling(Animation * a)
{
	a->setCurrent(new Shoveling());
	delete this;
}

void Jumping::swording(Animation * a)
{
	a->setCurrent(new Swording());
	delete this;
}