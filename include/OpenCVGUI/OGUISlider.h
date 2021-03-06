#ifndef OpenCVGUI_OGUISlider_h
#define OpenCVGUI_OGUISlider_h

#include "OGUIWidget.h"
#include <functional>

namespace OpenCVGUI {

class OGUISlider : public OGUIWidget {

 public:

    virtual void draw(int x, int y, int width);

    OGUISlider(const char* title,double min,double max, double value);
    void setCallBack(std::function<void()> func);

private:
    double min, max, value;
    const char* title;
    int actual_press_status;
    std::function<void()> btn_click_callback;
};

} /* End of namespace OpenCVGUI */

#endif // OpenCVGUI_OGUISlider_h
