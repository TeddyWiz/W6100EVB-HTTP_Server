# HTTP Server Example for W6100-EVB
Common to Any MCU, Easy to Add-on. Internet Offload co-Processor, HW TCP/IP chip,
best fits for low-end Non-OS devices connecting to Ethernet for the Internet of Things. These will be updated continuously.

## Device
* Setting
  - W6100EVB
  - STM ST-LINK
<p align="center">
  <img width="60%" src="https://user-images.githubusercontent.com/48539052/55774764-8656a200-5ad1-11e9-86a0-2cfd791cad0e.png" />
</p>

## Compile
* Device Setting Program : STM32CubeMX Ver 5.1.0
* Compile Program : TrueStudio Ver 9.2.0
* Compile method <br>
  - Git-Hub source file download
  - TrueStudio -> W6100EVB-HTTP_Server in folder, run TrueStudio Project file<br>
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55773234-9e76f300-5aca-11e9-8c64-94df83c812b2.png" />
  </p>
  - WorkSpace path select <br>
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55773235-9f0f8980-5aca-11e9-825c-7f362cbfc7fd.png" />
  </p>
  - ① open main.c file and build ② build icon or Key CTRL + B  
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55773236-9f0f8980-5aca-11e9-95f4-5e68b0045935.png" />
  </p>
  - Run Debug - Click debug button or Key F8
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55773705-c404fc00-5acc-11e9-84dd-d0774a1d17db.png" />
  </p>

## Code review
* main.c code flow
<p align="center">
  <img width="50%" src="https://user-images.githubusercontent.com/48539052/55776879-19470a80-5ad9-11e9-8945-32cdbd5ba0a3.png" />
</p>
## Run
* Test Environment & Program
  - Windows 10
  - Internet Explorer
  - Hercules <br>
* Test Result
  - Program Run Serial display
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55773233-9e76f300-5aca-11e9-9260-22f32db7caaa.png" />
  </p>
  - Chrome contact HTTP Server
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55775470-64125380-5ad4-11e9-8168-5feff699d688.png" />
  </p>
  - Chrome HTTP Server Device Network Information
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55775471-64125380-5ad4-11e9-8f41-627b819f0d47.png" />
  </p>
  - Chrome HTTP Server Device RGB LED control
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55775474-64125380-5ad4-11e9-9c38-0eed6cf6164f.png" />
  </p>
  - Test Wireshark packet capture file
    - [HTTP_Server_Packet.zip](https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/files/3057274/HTTP_Server_Packet.zip)
