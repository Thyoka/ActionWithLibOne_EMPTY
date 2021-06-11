#include"libOne.h"
#include"obstacle.h"
void load(struct OBSTACLE* o) {
	o->imgIdx = loadImage("assets/pumpkin.png");
	o->imgW = 364;
	o->imgH = 300;
}
void init(struct OBSTACLE* o) {
	o->px = width;
	o->py = height - o->imgH;
	o->vx = -10;
}
void move(struct OBSTACLE* o) {
	o->px += o->vx;
	if (o->px < o->imgW) {
		o->px = width;
	}
}
void draw(struct OBSTACLE* o) {
	image(o->imgIdx, o->px, o->py);
}