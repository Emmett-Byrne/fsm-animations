#include <Input.h>

Input::Input() 
{
	m_current = IDLE;
	m_previous = m_current;
}
Input::~Input() {}

void Input::setCurrent(Action a) {
	m_previous = m_current;
	m_current = a;
}

Input::Action Input::getCurrent() {
	return m_current;
}

Input::Action Input::getPrevious()
{
	return m_previous;
}
