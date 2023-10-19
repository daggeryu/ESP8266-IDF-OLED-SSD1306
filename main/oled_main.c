#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "oled.h"

void oled_ssd1306_show() {
    OLED_Init();
    OLED_ShowString(1, 1, "Hello World");
    OLED_ShowNum(2, 1, 2431, 4);
    OLED_ShowChar(2, 7, 'A');
    OLED_ShowSignedNum(3, 1, 100,4);
    OLED_ShowHexNum(3, 7, 0x78,4);
    OLED_ShowBinNum(4, 1, 0x78,8);
    vTaskDelete(NULL);
}

void app_main() {
    xTaskCreate(oled_ssd1306_show, "oled_ssd1306_show", 1024, NULL, 0, NULL);
}
