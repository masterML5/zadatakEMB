// 4.22.1 0xaa9b6801
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_background_screen1[]; // BITMAP_BACKGROUND_SCREEN1_ID = 0, Size: 480x272 pixels
extern const unsigned char image_background_screen2[]; // BITMAP_BACKGROUND_SCREEN2_ID = 1, Size: 480x272 pixels
extern const unsigned char image_btn_round[]; // BITMAP_BTN_ROUND_ID = 2, Size: 97x60 pixels
extern const unsigned char image_btn_round_pressed[]; // BITMAP_BTN_ROUND_PRESSED_ID = 3, Size: 97x60 pixels
extern const unsigned char image_configuration[]; // BITMAP_CONFIGURATION_ID = 4, Size: 48x48 pixels
extern const unsigned char image_down_arrow[]; // BITMAP_DOWN_ARROW_ID = 5, Size: 32x19 pixels
extern const unsigned char image_down_arrow_pressed[]; // BITMAP_DOWN_ARROW_PRESSED_ID = 6, Size: 32x19 pixels
extern const unsigned char image_up_arrow[]; // BITMAP_UP_ARROW_ID = 7, Size: 32x19 pixels
extern const unsigned char image_up_arrow_pressed[]; // BITMAP_UP_ARROW_PRESSED_ID = 8, Size: 32x19 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_background_screen1, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_background_screen2, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_btn_round, 0, 97, 60, 15, 9, 67, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 40, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_btn_round_pressed, 0, 97, 60, 15, 9, 67, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 40, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_configuration, 0, 48, 48, 44, 19, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_down_arrow, 0, 32, 19, 12, 10, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_down_arrow_pressed, 0, 32, 19, 12, 10, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_up_arrow, 0, 32, 19, 12, 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_up_arrow_pressed, 0, 32, 19, 12, 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
