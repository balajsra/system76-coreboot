# System76 Oryx Pro 8 (oryp8)

## Specs

- CPU
  - Intel Core i7-11800H
- Chipset
  - Intel HM570
- EC
  - ITE IT570E running [System76 EC](https://github.com/system76/ec)
- Graphics
  - dGPU options
    - NVIDIA GeForce RTX 3070
    - NVIDIA GeForce RTX 3080
  - eDP options
    - 15.6" 1920x1080@144Hz LCD
    - 17.3" 1920x1080@144Hz LCD
  - 1x HDMI
  - 1x Mini DisplayPort
  - 1x DisplayPort over USB-C
- Memory
  - Up to 64GB (2x32GB) dual-channel DDR4 SO-DIMMs @ 3200 MHz
- Networking
  - Gigabit Ethernet
  - M.2 PCIe/CNVi WiFi/Bluetooth
    - Intel Wi-Fi 6 AX200/AX201
- Power
  - 180W (19.5V, 9.23A) AC barrel adapter
    - Lite-On PA-1181-16
  - 73Wh 3-cell battery
- Sound
  - Realtek ALC1220 codec
  - TI TAS5825M smart amp
  - Internal speakers and microphone
  - Combined 3.5mm headphone/microphone jack
  - Combined 3.5mm microphone & S/PDIF jack
  - HDMI, mDP, USB-C DP audio
- Storage
  - 1x M.2 PCIe NVMe Gen 4 SSD
  - 1x M.2 PCIe NVMe Gen 3 or SATA SSD
- USB
  - 1x USB Type-C with Thunderbolt 4
  - 3x USB 3.0 Type-A

## Flashing coreboot

```eval_rst
+---------------------+-----------------+
| Type                | Value           |
+=====================+=================+
| Socketed flash      | no              |
+---------------------+-----------------+
| Vendor              | GigaDevice      |
+---------------------+-----------------+
| Model               | GD25B127D       |
+---------------------+-----------------+
| Size                | 16 MiB          |
+---------------------+-----------------+
| Package             | SOIC-8          |
+---------------------+-----------------+
| Internal flashing   | yes             |
+---------------------+-----------------+
| External flashing   | yes             |
+---------------------+-----------------+
```

The flash chip (U74) is right of the bottom DIMM slot.
