#pragma once
#include "SDLGameObject.h"
#include "InputHandler.h"
#include <iostream>
#include <map>
class BackGrounds : public SDLGameObject
{
public:
	BackGrounds(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean();

private:
	void handleInput();
};