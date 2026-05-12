/// Set debounce in [ms] and algorithm used.
/// https://docs.qmk.fm/feature_debounce_type
#define DEBOUNCE 10
#define DEBOUNCE_TYPE asym_eager_defer_pk

/// Set I2C pins and driver.
/// https://docs.qmk.fm/drivers/i2c
/// https://docs.qmk.fm/platformdev_rp2040#generic-pro-micro-rp2040
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP20
#define I2C1_SCL_PIN GP21

/// Enable bootmagic on first key.
/// https://docs.qmk.fm/features/bootmagic
/// TODO: https://docs.qmk.fm/features/bootmagic#split-keyboards
#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 0

/// Enable RGB lighting with WS2812 driver.
/// https://docs.qmk.fm/features/rgblight
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LED_COUNT 31
#define RGBLIGHT_LIMIT_VAL 100
#define WS2812_DI_PIN GP22
#define WS2812_PIO_USE_PIO1

/// Enable haptic feedback.
/// https://docs.qmk.fm/features/haptic_feedback#erm
#define DRV2605L_FB_ERM_LRA 0
#define DRV2605L_FB_BRAKEFACTOR 2 /* For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7 */
#define DRV2605L_FB_LOOPGAIN 3    /* For  Low:0, Medium:1, High:2, Very High:3 */

#define DRV2605L_RATED_VOLTAGE 3
#define DRV2605L_V_PEAK 5

#define DRV2605L_GREETING 16
#define DRV2605L_DEFAULT_MODE 1

/// https://docs.qmk.fm/features/oled_driver
#define OLED_DISPLAY_128x32
#define OLED_I2C_ADDRESS 0x3C
