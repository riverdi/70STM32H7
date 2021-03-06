/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CAMERAVIEWBASE_HPP
#define CAMERAVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/camera_screen/cameraPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>

class cameraViewBase : public touchgfx::View<cameraPresenter>
{
public:
    cameraViewBase();
    virtual ~cameraViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image image3;
    touchgfx::Box box2;
    touchgfx::Box box3;
    touchgfx::Button button1;
    touchgfx::Button button2;
    touchgfx::TextArea textArea1_2_1_2;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::Button button4;
    touchgfx::Image image2;
    touchgfx::Button graph;
    touchgfx::Button camera;
    touchgfx::Button map;
    touchgfx::Button main;
    touchgfx::Button notifications;
    touchgfx::Button settings;
    touchgfx::Button conf;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<cameraViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // CAMERAVIEWBASE_HPP
