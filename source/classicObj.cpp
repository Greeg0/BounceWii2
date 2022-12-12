#include "classicObj.h"

classicObj::classicObj(GRRLIB_texImg *inTheme, int inWidth, int inHeight, int inColour){
	setWidth(inWidth);
	setHeight(inHeight);
	setColour(inColour);
	texture = inTheme;
	dirx = 1;
	diry = 1;
	posx = 100;
	posy = 100;
	speedx = 2;
	speedy = 2;
	colour = inColour;
}

classicObj::PositionUpdate(){
	posx += speedx * dirx;
	posy += speedy * diry;
}

classicObj::Collision(){
	if (posx < 0  || posx > getRightBound()){
		dirx *= -1;
		colour = (colour + 1) % 15;
		}
	if (posy < 0 || posy > getBottomBound()){
		dirx *= -1;
		colour = (colour + 1) % 15;
	}	
}

