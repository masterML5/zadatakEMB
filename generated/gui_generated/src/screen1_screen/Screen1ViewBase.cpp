/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_SCREEN1_ID));
    add(background);

    hourLabel.setPosition(86, 46, 85, 24);
    hourLabel.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    hourLabel.setLinespacing(0);
    hourLabel.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CD1R));
    add(hourLabel);

    textAreaHour.setPosition(87, 70, 83, 50);
    textAreaHour.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaHour.setLinespacing(0);
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_CJEE).getText());
    textAreaHour.setWildcard(textAreaHourBuffer);
    textAreaHour.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P3AC));
    add(textAreaHour);

    minutesLabel.setPosition(309, 46, 85, 24);
    minutesLabel.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    minutesLabel.setLinespacing(0);
    minutesLabel.setTypedText(touchgfx::TypedText(T___SINGLEUSE_B5PR));
    add(minutesLabel);

    textAreaMinute.setPosition(311, 70, 83, 50);
    textAreaMinute.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaMinute.setLinespacing(0);
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_N0GE).getText());
    textAreaMinute.setWildcard(textAreaMinuteBuffer);
    textAreaMinute.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YB4W));
    add(textAreaMinute);

    buttonHourUp.setXY(184, 51);
    buttonHourUp.setBitmaps(touchgfx::Bitmap(BITMAP_UP_ARROW_ID), touchgfx::Bitmap(BITMAP_UP_ARROW_PRESSED_ID));
    buttonHourUp.setAction(buttonCallback);
    add(buttonHourUp);

    buttonHourDown.setXY(184, 93);
    buttonHourDown.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_ARROW_ID), touchgfx::Bitmap(BITMAP_DOWN_ARROW_PRESSED_ID));
    buttonHourDown.setAction(buttonCallback);
    add(buttonHourDown);

    buttonMinuteUp.setXY(266, 51);
    buttonMinuteUp.setBitmaps(touchgfx::Bitmap(BITMAP_UP_ARROW_ID), touchgfx::Bitmap(BITMAP_UP_ARROW_PRESSED_ID));
    buttonMinuteUp.setAction(buttonCallback);
    add(buttonMinuteUp);

    buttonMinuteDown.setXY(266, 93);
    buttonMinuteDown.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_ARROW_ID), touchgfx::Bitmap(BITMAP_DOWN_ARROW_PRESSED_ID));
    buttonMinuteDown.setAction(buttonCallback);
    add(buttonMinuteDown);

    buttonSaveHour.setXY(80, 137);
    buttonSaveHour.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_ROUND_ID), touchgfx::Bitmap(BITMAP_BTN_ROUND_PRESSED_ID));
    buttonSaveHour.setLabelText(touchgfx::TypedText(T___SINGLEUSE_6E57));
    buttonSaveHour.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonSaveHour.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonSaveHour.setAction(buttonCallback);
    add(buttonSaveHour);

    buttonSaveMinute.setXY(303, 137);
    buttonSaveMinute.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_ROUND_ID), touchgfx::Bitmap(BITMAP_BTN_ROUND_PRESSED_ID));
    buttonSaveMinute.setLabelText(touchgfx::TypedText(T___SINGLEUSE_AD5A));
    buttonSaveMinute.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonSaveMinute.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonSaveMinute.setAction(buttonCallback);
    add(buttonSaveMinute);

    buttonClock.setXY(192, 204);
    buttonClock.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_ROUND_ID), touchgfx::Bitmap(BITMAP_BTN_ROUND_PRESSED_ID));
    buttonClock.setLabelText(touchgfx::TypedText(T___SINGLEUSE_S07H));
    buttonClock.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonClock.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonClock.setAction(buttonCallback);
    add(buttonClock);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonHourUp)
    {
        //buttonHourUpClicked
        //When buttonHourUp clicked call virtual function
        //Call buttonHourUpClicked
        buttonHourUpClicked();
    }
    if (&src == &buttonHourDown)
    {
        //buttonHourDownClicked
        //When buttonHourDown clicked call virtual function
        //Call buttonHourDownClicked
        buttonHourDownClicked();
    }
    if (&src == &buttonMinuteUp)
    {
        //buttonMinuteUpClicked
        //When buttonMinuteUp clicked call virtual function
        //Call buttonMinuteUpClicked
        buttonMinuteUpClicked();
    }
    if (&src == &buttonMinuteDown)
    {
        //buttonMinuteDownClicked
        //When buttonMinuteDown clicked call virtual function
        //Call buttonMinuteDownClicked
        buttonMinuteDownClicked();
    }
    if (&src == &buttonSaveHour)
    {
        //buttonSaveHourClicked
        //When buttonSaveHour clicked call virtual function
        //Call buttonSaveHourClicked
        buttonSaveHourClicked();
    }
    if (&src == &buttonSaveMinute)
    {
        //buttonSaveMinuteClicked
        //When buttonSaveMinute clicked call virtual function
        //Call buttonSaveMinuteClicked
        buttonSaveMinuteClicked();
    }
    if (&src == &buttonClock)
    {
        //buttonClockClicked
        //When buttonClock clicked change screen to Screen2
        //Go to Screen2 with screen transition towards East
        application().gotoScreen2ScreenSlideTransitionEast();
    }
}
