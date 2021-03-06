/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SETTINGSVIEWBASE_HPP
#define SETTINGSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/Image.hpp>

class SettingsViewBase : public touchgfx::View<SettingsPresenter>
{
public:
    SettingsViewBase();
    virtual ~SettingsViewBase() {}
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
    touchgfx::Box box2;
    touchgfx::Box box3;
    touchgfx::Button button1;
    touchgfx::Button button2;
    touchgfx::TextArea textArea1_2_1_2;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::Button button4;
    touchgfx::Image image2;
    touchgfx::Button settings;
    touchgfx::Button conf;
    touchgfx::TextArea textArea1;
    touchgfx::Button camera;
    touchgfx::Button graph;
    touchgfx::Button map;
    touchgfx::Button main;
    touchgfx::Button notifications;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<SettingsViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SETTINGSVIEWBASE_HPP
