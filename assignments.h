#include <stdint.h>

struct Assignment {

    bool fired;
    bool oldVal;
    const uint8_t key;
    const uint8_t pin;

}; 

Assignment keyboard[] = {
    { 0, 1, KEY_RETURN,      0 },
    { 0, 1, KEY_LEFT_ARROW,  1 },
    { 0, 1, KEY_RIGHT_ARROW, 2 },
    { 0, 1, KEY_UP_ARROW,    3 },
    { 0, 1, KEY_DOWN_ARROW,  4 },
    { 0, 1, KEY_ESC,         5 },
    { 0, 1, 'H',             6 },
    { 0, 1, 'P',             7 },
    { 0, 1, 'O',             8 },
    { 0, 1, 'X',             9 },
    { 0, 1, 'C',            10 },
    { 0, 1, 'V',            11 },
    { 0, 1, 'N',            12 },
    { 0, 1, 'B',            13 },
    { 0, 1, 'M',            14 },
    { 0, 1, '1',            15 },
    { 0, 1, '2',            16 }
};

enum struct keys : uint16_t
{
  _ENTER =        KEY_RETURN,
  _LEFT =         KEY_LEFT_ARROW,
  _RIGHT =        KEY_RIGHT_ARROW,
  _UP =           KEY_UP_ARROW,
  _DOWN =         KEY_DOWN_ARROW,
  _BACK =         KEY_ESC,
  _HOME =         'H',
  _PHONE =        'P',
  _CALL_END =     'O',
  _PLAY =         'X',
  _PAUSE =        'C',
  _PREV_TRACK =   'V',
  _NEXT_TRACK =   'N',
  _TOGGLE_PLAY =  'B',
  _VOICE_CMD =    'M',
  _WHEEL_LEFT =   '1',
  _WHEEL_RIGHT =  '2',
};

enum struct input_pins : uint8_t 
{
  _ENTER =        0,
  _LEFT =         1,
  _RIGHT =        2,
  _UP =           3,
  _DOWN =         4,
  _BACK =         5,
  _HOME =         6,
  _PHONE =        7,
  _CALL_END =     8,
  _PLAY =         9,
  _PAUSE =        10,
  _PREV_TRACK =   11,
  _NEXT_TRACK =   12,
  _TOGGLE_PLAY =  13,
  _VOICE_CMD =    14,
  _WHEEL_LEFT =   15,
  _WHEEL_RIGHT =  16,
};
