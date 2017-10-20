#ifndef eSPI_GUI_h
#define eSPI_GUI_h

#include "Arduino.h"
#include "SPI.h"
#include "TFT_eSPI.h"

class eSPI_GUI
{
public:
	eSPI_GUI(void);
	void init(TFT_eSPI &TFT_eSPI, uint8_t rotation, uint16_t color);
	void drawPillBox(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t pbh, uint16_t color);
private:
	TFT_eSPI *_TFT;
};

#endif