#pragma once
#include"floart.h"
#include"rect_srea.h"
struct PLAYER {
	int Imgdx = 0;
	int imgW = 0;
	int imgH = 0;
	struct FLOAT2 p;
	float vx = 0;
	float vy = 0;
	float initVy = 0;
	float gravity = 0;
	float jumpFlag = 0;
	float limmitpy = 0;
	struct RECT_AREA r;
};
void load(struct PLAYER* p);
void init(struct PLAYER* p);
void move(struct PLAYER* p);
void draw(struct PLAYER* p);
