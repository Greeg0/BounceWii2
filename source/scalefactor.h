#ifndef SCALEFACTOR_H
#define SCALEFACTOR_H

extern float horizontalScaleFactor = 1.0;

if (CONF_GetAspectRatio() == CONF_ASPECT_16_9){
		horizontalScaleFactor = 0.75;
}

#endif
