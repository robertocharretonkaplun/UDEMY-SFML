#include "BaseApp.h"

void 
BaseApp::init() {
	m_window = new sf::RenderWindow(sf::VideoMode({ 200, 200 }), "SFML works!");
	m_circle = new sf::CircleShape(100.f);
	m_circle->setFillColor(sf::Color::Green);
}

void 
BaseApp::update() {
}

void 
BaseApp::render() {
	m_window->clear();
	m_window->draw(*m_circle);
	m_window->display();
}

void 
BaseApp::destroy() {
	delete m_circle;
	delete m_window;
}

void 
BaseApp::handleEvents() {
	while (const std::optional event = m_window->pollEvent())
	{
		if (event->is<sf::Event::Closed>())
			m_window->close();
	}
}

int 
BaseApp::run() {
	init();

	while (m_window->isOpen())
	{
		handleEvents();
		update();
		render();
	}

	destroy();
	return 0;
}
