#pragma once
#include "TextureManager.h"
#include "GameObject.h"
#include <vector>
#include "Player.h"
#include "Enemy.h"
#include "InputHandler.h"
class Game {
public:

	bool init(std::string title, int xpos, int ypos, int width, int height, bool fullscreen);
	void update();
	void render();
	void clean();
	void handleEvents();
	bool running() { return m_bRunning; }

	static Game * Instance() {
		if (s_pInstance == 0) {
			s_pInstance = new Game();
		}
		return s_pInstance;
	}

	SDL_Renderer* getRenderer() const { return renderer; }

private:
	bool m_bRunning;
	static Game * s_pInstance;
	SDL_Window *window;
	SDL_Renderer *renderer;
	Game();
	~Game();
	std::vector<GameObject*> m_gameObjects;

};
typedef Game TheGame;
