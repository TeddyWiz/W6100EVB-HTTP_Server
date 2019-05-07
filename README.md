# Index
- [HTTP Server Example for W6100-EVB](#HTTP-Server-Example-for-W6100-EVB)
- [Hardware Environment](#Hardware-Environment)
- [Software Environments](#Software-Environment)
- [Run](#Run)
- [Code review](#Code-review)
  - [Test packet capture file](#Test-packet-capture-file)



------
# HTTP Server Example for W6100-EVB
Common to Any MCU, Easy to Add-on. Internet Offload co-Processor, HW TCP/IP chip,
best fits for low-end Non-OS devices connecting to Ethernet for the Internet of Things. These will be updated continuously.

## Hardware Environment
* W6100EVB
  - connecting Micro usb.
  - connecting Ethernet cable. <br>
<p align="center">
  <img width="60%" src="https://wizwiki.net/wiki/lib/exe/fetch.php?w=600&tok=eabde4&media=products:w6100:w6100_evb:w6100-evb_callout.png" />
</p>

## Software Environment
* Device Setting Program : STM32CubeMX Ver 5.1.0
* Compile Program : TrueStudio Ver 9.2.0
* Flash Program : FLASHER-STM32 Ver2.8.0
* Compile method <br>
  - Git-Hub source file download <br>
  - TrueStudio -> W6100EVB-HTTP_Server in folder, run TrueStudio Project file <br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Setting_01.png" />
  </p>

  - WorkSpace path select<br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Setting_02.png" />
  </p>

  - ① open main.c file and build ② build icon or Key CTRL + B  <br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Setting_03.png" />
  </p>

  - Click Debug icon or Key F11  <br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Setting_04.png" />
  </p>

  - If you have ST-LINK, Run Debug - Click debug button or Key F8<br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Setting_05.png" />
  </p>

  - Serial Flash Download<br>
    - Check Serial Port<br>
    <p align="center">
      <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Setting_06.png" />
    </p>

    - Check Hex file <br>
    <p align="center">
      <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Setting_07.png" />
    </p>

    - Device Program upload, See site below.
      - [How to uploading to firmware ](https://wizwiki.net/wiki/doku.php?id=products:w6100:w6100_evb:getting_started#how_to_uploading_to_firmware)



## Run
* Demo Environment & Program <br>

  - Windows 10 <br>
  - Internet Explorer <br>
  - Hercules <br>


* Demo Result <br>
  - Power On and push Reset button to start Program<br>
  - Program Run Serial display <br>
  <p align="center">
    <img width="60%" src="https://user-images.githubusercontent.com/48539052/55784555-c75bb000-5aeb-11e9-9bbe-a662209c9285.png" />
  </p>

  - Excute Internet Explorer and input device ip address<br>
  - Internet Explorer contact HTTP Server <br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Result_01.png" />
  </p>

  - Connect Ipv6 Address <br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Result_04.png" />
  </p>

  - Internet Explorer HTTP Server Device Network Information <br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Result_02.png" />
  </p>

  - Internet Explorer HTTP Server Device RGB LED control <br>
  <p align="center">
    <img width="60%" src="https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/wiki/Result_03.png" />
  </p>

  ## Code review
  * main.c code flow <br>
  <p align="center">
    <img width="50%" src="https://user-images.githubusercontent.com/48539052/55776879-19470a80-5ad9-11e9-8945-32cdbd5ba0a3.png" />
  </p>

   ## Test packet capture file
   <p align="center">
     <img width="60%" src="https://user-images.githubusercontent.com/48539052/55852389-ba949600-5b97-11e9-8824-91287170a243.png" />
   </p>
   
    - [HTTP_Server_Packet.zip](https://github.com/WIZnet-ioLibrary/W6100EVB-HTTP_Server/files/3057274/HTTP_Server_Packet.zip)