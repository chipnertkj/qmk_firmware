# Use custom pin definitions for Pi Pico RP2040.
# https://docs.qmk.fm/platformdev_rp2040#generic-rp2040-board
BOARD = GENERIC_RP_RP2040

# Enable Bootmagic key EEPROM reset.
# https://docs.qmk.fm/features/bootmagic
BOOTMAGIC_ENABLE = yes

# Enable RGB lighting with WS2812 driver.
# https://docs.qmk.fm/features/rgblight
RGBLIGHT_ENABLE = yes
RGBLIGHT_DRIVER = ws2812
WS2812_DRIVER = vendor

# https://docs.qmk.fm/features/oled_driver
OLED_ENABLE = yes
OLED_DRIVER_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

WPM_ENABLE = yes

# https://docs.qmk.fm/features/haptic_feedback#lra
HAPTIC_ENABLE = yes
HAPTIC_DRIVER = drv2605l
