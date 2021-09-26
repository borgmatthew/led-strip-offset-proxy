#ifndef LIBRARIES_LEDSTRIPOFFSETPROXY_H
#define LIBRARIES_LEDSTRIPOFFSETPROXY_H

#include <LedStrip.h>

class LedStripOffsetProxy : public LedStrip  {
public:
    LedStripOffsetProxy(LedStrip* strip, unsigned int offset);
    void setPixelColour(unsigned int offset, uint32_t colour);
    void update();
    void clear();

private:
    LedStrip *_strip;
    unsigned int _offset;
};


#endif //LIBRARIES_LEDSTRIPOFFSETPROXY_H
