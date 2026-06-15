# keyboard


Custom mechanical keyboard PCB designed using KiCad.

###Motivation

I designed this device in order to get some practical experience in hardware design, PCB manufacturing, and embedded systems programming. Instead of using an off-the-shelf keyboard design, I aimed at learning all the steps required to manufacture a custom keyboard.

Working on this project, I had the opportunity to do schematic design, PCB layouting, components selection, 3D rendering, firmware writing, and manufacturing preparation with the help of KiCad. Thus, having successfully completed the whole design cycle, I got some practical experience in both hardware and software engineering.

It was my intention not only to manufacture a working device but also learn some electronics designing techniques along with problem solving in the engineering field while doing a project that is manufacturable and improvable in the future.

## Images

### Schematic
<img width="1644" height="1208" alt="image" src="https://github.com/user-attachments/assets/73812962-68cc-4463-ae73-b20b07e187af" />


### PCB
![PCB](image/pcb.png)

### PCB Front 3D
![PCB Front](image/pcb-3d-front.png)

### PCB Back 3D
![PCB Back](image/pcb-3d-back.png)

### 3D Model 1
## Features<img width="1512" height="834" alt="Screenshot 2026-06-15 at 5 45 38 PM" src="https://github.com/user-attachments/assets/c6127631-d901-457c-b1aa-082dfde9d3fb" />

### 3D Model 2
<img width="1512" height="919" alt="Screenshot 2026-06-15 at 5 45 10 PM" src="https://github.com/user-attachments/assets/d4445bb2-0336-4617-8dee-947b45ba9b1c" />


---



- Custom Keyboard PCB
- Designed in KiCad
- 3D PCB Visualization
- Gerber Manufacturing Files Included

---

## Repository Structure

```text
keyboard/
│
├── code/
├── image/
├── kicad/
├── grb.zip
└── README.md
```

---

## Files

- `code/` → Firmware / keyboard code
- `image/` → PCB renders and 3D models
- `kicad/` → KiCad project files
- `grb.zip` → Gerber files for PCB manufacturing

---

## Bill of Materials

| Name | Purpose | Quantity | Avg Cost (USD) | Distributor |
|------|----------|----------|----------|----------|
| Cherry MX2A Switch Set | Key switches for typing | 1 Set | $42.00 | Keychron |
| PBT Keycap Set | Keycaps for switches | 1 Set | $13.00 | Meckeys |
| Raspberry Pi Pico | Keyboard microcontroller | 1 | $5.00 | Robu.in |
| Rotary Encoder (EC11) | Volume/media control knob | 1 | $2.00 | Robu.in |
| Encoder Knob | Mounts on rotary encoder | 1 | $1.00 | Robu.in |
| 1N4148 Diodes | Key matrix isolation | 70–100 | $3.00 | Robu.in |
| PCB Fabrication | Custom keyboard PCB | 1 | $25.00 | JLCPCB / PCBWay |
| PCB Components | Headers, sockets, passive components | 1 Lot | $5.00 | Robu.in |
| MX Hotswap Sockets (Optional) | Tool-free switch replacement | 70 | $15.00 | Meckeys / StackKB |
| USB-C Cable | Connection to computer | 1 | $3.00 | Robu.in |
| Stabilizers | Support for larger keys | 1 Set | $10.00 | Meckeys |
| Screws & Standoffs | Assembly hardware | 1 Lot | $3.00 | Local Supplier |
| 3D Printed Case | Keyboard enclosure | 1 | $20.00 | Local 3D Printing Service |
| 3D Printed Encoder Knob (Optional) | Custom encoder knob | 1 | $1.00 | Local 3D Printing Service |


## Estimated Total

**Recommended Hotswap Build Total: ~$144 USD**


## Author

Created by [AYUSH-pro-grammer](https://github.com/AYUSH-pro-grammer)
