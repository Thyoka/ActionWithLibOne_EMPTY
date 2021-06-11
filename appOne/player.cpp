#include"libOne.h"
#include"player.h"
void load(struct PLAYER* p) {
	p->imgIdx = loadImage("assets/witch.png");
	p->imgW = 223;
	p->imgH = 500;
}
void init(struct PLAYER* p) {
	p->px = 400;
	p->py = height - p->imgH;
	p->limmitPy = p->py;
	p->vx = 2;
	p->initVy = -50;
	p->gravity = 2;
	p->jumpFlag = 0;
}
	void move(struct PLAYER* p) {
		p->px += p->vx;
		if (p->jumpFlag == 0) {
			if (isTrigger(KEY_SPACE)) {
				p->vy = p->initVy;
				p->jumpFlag = 1;
			}
		}
		if (p->jumpFlag == 1) {
			p->py += p->vy;
			p->vy += p->gravity;
			if (p->py > p->limmitPy) {
				p->py = p->limmitPy;
				p->jumpFlag = 0;
			}
		}
	}
void draw(struct PLAYER* p) {
image(p->imgIdx, p->px, p->py);
	}
