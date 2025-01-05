#include <stdio.h>
#include <esp_log.h>
#include <esp_timer.h>
#include <math.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "ui/ui.h"
#include "t_display_s3.h"
#include "iot_button.h"


#define TAG "main"


void app_main(void) {
    // LVGL display driver
    static lv_disp_drv_t disp_drv;
    // LVGL display handle
    static lv_disp_t *disp_handle;

    // initialize the LCD
    // if you want to turn off the lcd backlight off, set to false.
    lcd_init(disp_drv, &disp_handle, true);

    /* Add and show objects on display */
    ui_init();

    ESP_LOGI(TAG, "main - Firmware's is up and running.");
}