#pragma once

#ifndef LOAD_RECT_H_
#define LOAD_RECT_H_

#include "MainFunction.h"

class LoadRect
{
public:
	static void RenderRectange(const GeometricFormat& geo_size, const ColorData& color, SDL_Renderer* screen);
	static void RenderOutline(const GeometricFormat& geo_size, const ColorData& color, SDL_Renderer* screen);
};


#endif