# chipnertkj_dm

<!---
![chipnertkj_dm](imgur.com image replace me!)
-->

## Custom Dactyl Manuform for the RP2040

* Keyboard Maintainer: [Piotr Wyszomirski](https://github.com/chipnertkj)
* Hardware Supported: Custom wired RP2040
* Hardware Availability: N/A

Build command:

```bash
qmk compile -kb chipnertkj_dm -km default -j 12
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader using the following steps:

1. Download [`flash_nuke.uf2`](https://datasheets.raspberrypi.com/soft/flash_nuke.uf2).
2. Press the BOOTSEL button on Pico and while keeping it pressed, connect it to your computer via a USB cable. The Pico should now appear as a mass storage device on your computer with the label RPI-RP2.
3. Copy and paste the flash_nuke.uf2 file into this new drive. Your Pico will now restart and all the files in its Flash memory will be erased.

Attribution: [Electrocredible](https://electrocredible.com/) ([source](https://electrocredible.com/how-to-reset-raspberry-pi-pico-w/)).
