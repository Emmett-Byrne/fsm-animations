#include <AnimatedSprite.h>
#include <iostream>

AnimatedSprite::AnimatedSprite() 
{
	m_current_frame = 0;
	m_startFrame = 0;
	m_endFrame = 5;
}

AnimatedSprite::AnimatedSprite(const sf::Texture& t) : Sprite(t), m_current_frame(0), m_time(seconds(0.5f)), m_startFrame(0), m_endFrame(5) {}

AnimatedSprite::AnimatedSprite(const sf::Texture& t, const sf::IntRect& rect) : Sprite(t), m_current_frame(0), m_time(seconds(0.5f)), m_startFrame(0), m_endFrame(5) {
	m_frames.push_back(rect);
}

AnimatedSprite::~AnimatedSprite() {}

const sf::Clock& AnimatedSprite::getClock() {
	return m_clock;
}

const sf::Time& AnimatedSprite::getTime() {
	return m_time;
}

const vector<IntRect>& AnimatedSprite::getFrames() {
	return m_frames;
}

const IntRect& AnimatedSprite::getFrame(int n) {
	return m_frames[n];
}

void AnimatedSprite::addFrame(IntRect& frame) {
	m_frames.push_back(frame);
}

const int AnimatedSprite::getCurrentFrame() {
	return m_current_frame;
}

void AnimatedSprite::update(){
	if (m_clock.getElapsedTime() > m_time) {
		std::cout << m_current_frame << std::endl;
		if (m_endFrame > m_current_frame)
		{
			m_current_frame++;
		}
		else {
			m_current_frame = m_startFrame;
		}
		m_clock.restart();
	}
}

void AnimatedSprite::setFrameRange(int min, int max)
{
	m_startFrame = min;
	m_endFrame = max;
}

