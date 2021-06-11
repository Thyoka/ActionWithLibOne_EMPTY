#pragma once
struct PLAYER {
	int imgIdx = 0;
	int imgH = 0;
	int imgW = 0;
	float px = 0;
	float py = 0;
	float vx = 0;
	float vy = 0;
	float initVy = 0;
	float gravity = 0;
	int jumpFlag = 0;
	float limmitPy = 0;
};
void load(struct PLAYER* p);
void init(struct PLAYER* p);
void move(struct PLAYER* p);
void draw(struct PLAYER* p);
