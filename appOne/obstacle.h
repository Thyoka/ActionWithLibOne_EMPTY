#pragma once
struct OBSTACLE {
	int imgIdx = 0;
	int imgW = 0;
	int imgH = 0;
	float px = 0;
	float py = 0;
	float vx = 0;
};
void load(struct OBSTACLE* o) ;
void init(struct OBSTACLE* o) ;
void move(struct OBSTACLE* o) ;
void draw(struct OBSTACLE* o) ;
