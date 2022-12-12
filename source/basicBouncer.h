#ifndef BASICBOUNCER_H
#define BASICBOUNCER_H

class basicBouncer {
	protected:
		int width;
		int height;
		
		int dirx; //direction x
		int diry; //direction y
		
		int posx; //position x
		int posy; //position y
		
		int speedx; //speed x
		int speedy; //speed y
		
		int colour; // colour of object.
		
		GRRLIB_texImg *texture;
		
	public:
		
		int getBottomBound(){
			return 480 - height; // This is the bottom bound relative to the origin point of the image.
		}
		
		int getRightBound(){
			return 640 - width; 
			// This is the right bound, and widthScale is of float type that scales the width for different aspect ratios.
		}
		
		int getColour(){
			return colour;
		}
		
		void setHeight(int inHeight){
			height = inHeight;
		}
		
		void setWidth(int inWidth){
			width = inWidth * horizontalScaleFactor; // 16:9 distorts the image and stretches it, the scale factor fixes it.
		}
		
		void setColour(int inColour){
			colour = inColour;
		}
};
#endif
