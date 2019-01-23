#include <stdint.h>

struct Assignment {

    bool fired;
    bool oldVal;
    keys key;
    input_pins pin;

}; 

Assignment keyboard[] = {
    { 0, 1, keys::_ENTER, input_pins::_ENTER},
    { 0, 1, keys::_LEFT, input_pins::_LEFT}    
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
