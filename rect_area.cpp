#include"libOne.h"
#include"floart.h"
#include"rect_srea.h"
void drawRectarea(struct FLOAT2* p, struct RECT_AREA* r) {
	fill(0, 255, 0, 128);
	rect(p->x + r->dx, p->y + r->dy,r->w,r->h);
}