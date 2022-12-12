#ifndef CLASSICOBJ_H
#define CLASSICOBJ_H

class classicObj : public basicBouncer {
	public:
		classicObj(GRRLIB_TexImg *inTheme, int inWidth, int inHeight);
		void PositionUpdate();
		void Collision();
};
#endif
