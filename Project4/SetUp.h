#pragma once

#ifndef SET_UP_H_
#define SET_UP_H_

#include "MainFunction.h"

class SetUp
{
public:
	SetUp();
	~SetUp();
	virtual bool LoadImageFile(std::string path, SDL_Renderer* screen);
	void Render(SDL_Renderer* des, const SDL_Rect* clip = NULL);

	void Free();
	void SetRect(const int& x, const int& y) { rect_.x = x, rect_.y = y; };
	SDL_Rect GetRect() const { return rect_; }
	SDL_Texture* GetObject() { return p_object_; }
protected:
	SDL_Texture* p_object_;
	SDL_Rect rect_;
};


#endif