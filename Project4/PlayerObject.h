#pragma once

#ifndef PLAYER_OBJECT_H_
#define PLAYER_OBJECT_H_

#include "MainFunction.h"

class PlayerObject : public SetUp
{
public:
	PlayerObject();
	~PlayerObject();

	bool LoadImg(std::string path, SDL_Renderer* screen);
	void Show(SDL_Renderer* des);
	void HandleInputAction(SDL_Event events, SDL_Renderer* screen);

	void DoFalling(SDL_Renderer* des);
	bool GetFalling() const { return is_falling_; }
	void SetFalling(bool falling) { is_falling_ = falling; }
	void DoGround(SDL_Renderer* screen);
	bool GetIsDie() const { return is_die_; }
private:
	bool is_falling_;
	float x_val_;
	float y_val_;
	bool is_die_;
};


#endif