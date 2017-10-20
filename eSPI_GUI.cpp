#include "Arduino.h"
#include "TFT_eSPI.h"
#include "eSPI_GUI.h"
#include "SPI.h"

eSPI_GUI::eSPI_GUI(){

}

void eSPI_GUI::init(TFT_eSPI &TFT_eSPI, uint8_t rotation, uint16_t color){
	_TFT = &TFT_eSPI;
	_TFT->init();
	_TFT->fillScreen(color);
	_TFT->setRotation(rotation);
	_TFT->setTextSize(1);
	_TFT->setTextFont(2);
}

void eSPI_GUI::drawPillBox(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t pbh, uint16_t color){
	_TFT->drawRect(x, y, w, h, color);
	_TFT->fillRect(x, y, w, pbh, color);
	_TFT->fillRect(x, (y+h)-pbh, w, pbh, color);
}