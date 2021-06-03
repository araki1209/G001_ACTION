#include"libOne.h"
#include"player.h"
void load(struct PLAYER* p) {
	p->Imgdx = loadImage("assets/witch.png");
	p->imgW = 223;
	p->imgH = 500;
}
void init(struct PLAYER* p) {
	p->p.x = 400;
	p->p.y = height - p->imgH;
	p->limmitpy = p->p.y;
	p->vx = 2;
	p->initVy = -65;
	p->gravity = 3;
	p->jumpFlag = 0;
	p->limmitpy = p->p.y;
	p-> r.dx = 83;
	p->r.dy = 0;
	p->r.w = p->imgW - p->r.dx * 2+6;
	p->r.h = p->imgH;
}
void move(struct PLAYER* p) {
	p->p.x += p->vx;
	if (p->jumpFlag == 0) {
		if (isTrigger(KEY_SPACE)) {
			p->vy = p->initVy;
			p->jumpFlag = 1;
		}
	}
	if (p->jumpFlag == 1) {
		p->p.y += p->vy;
		p->vy += p->gravity;
		if (p->p.y > p->limmitpy) {
			p->p.y = p->limmitpy;
			p->jumpFlag = 0;
		}

	}
}
void draw(struct PLAYER* p){
	image(p->Imgdx, p->p.x, p->p.y);
}