#pragma once
#include "Prerequisites.h"

class 
BaseApp {
public:
	BaseApp()  = default;
	~BaseApp() = default;

	void 
	init();

	void
	update();

	void
	render();

	void
	destroy();

	void
	handleEvents();

	int
	run();

private:
	sf::RenderWindow* m_window;
	sf::CircleShape* m_circle;
};