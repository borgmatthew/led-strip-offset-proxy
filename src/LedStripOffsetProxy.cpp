#include "LedStripOffsetProxy.h"

LedStripOffsetProxy::LedStripOffsetProxy(LedStrip* strip, unsigned int offset) {
    _strip = strip;
    _offset = offset;
}

void LedStripOffsetProxy::setPixelColour(unsigned int offset, uint32_t colour) {
    _strip -> setPixelColour(_offset + offset, colour);
}

void LedStripOffsetProxy::update() {
    _strip -> update();
}

void LedStripOffsetProxy::clear() {
    _strip -> clear();
}