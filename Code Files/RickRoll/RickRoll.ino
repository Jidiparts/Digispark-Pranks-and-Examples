// Witten by V.hopf 
// For more info email me at this email address: jidiparts@gmail.com
// Website: https://jidiparts.wordpress.com/
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.sendKeyStroke(KEY_F);// 5 min delay to prevent the device from interfering with user login 
}
  
void loop() {  

}
