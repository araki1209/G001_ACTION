#pragma once
#include"floart.h"
#include"rect_srea.h"
struct OBSTACLE {
	int Imgdx = 0;
	int imgW = 0;
	int imgH = 0;
	struct FLOAT2 p;
	float vx = 0;
	struct RECT_AREA r;
};
void load(struct OBSTACLE* o);
void init(struct OBSTACLE* o);
void move(struct OBSTACLE* o);
void draw(struct OBSTACLE* o);
