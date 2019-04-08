# HTTP Server Example for W6100-EVB
Common to Any MCU, Easy to Add-on. Internet Offload co-Processor, HW TCP/IP chip,
best fits for low-end Non-OS devices connecting to Ethernet for the Internet of Things. These will be updated continuously.

## Compile
* 개발 환경 소개
* 소스코드 변경없이 컴파일 할 수 있는 방법을 제안한다.
  * 툴 설치까지는 말고, command 수행이나 프로젝트를 열고 컴파일 하는 정도로 구현되어 있으면 이 부분의 설명이 줄어들 수 있다.

## Run
* 테스트 환경
* 테스트 프로그램
* 테스트 결과 (Wireshark dump file 포함해주면 좋을듯)

### Message via Serial port
 <p align="center">
   <img width="60%" src="image/serial.png" />
 </p>

### Main page
<p align="center">
  <img width="60%" src="image/web_server_main.png" />
</p>

### NetWork Information page
<p align="center">
  <img width="60%" src="image/web_server_netinfo.png" />
</p>

### RGB LED Control page
<p align="center">
  <img width="60%" src="image/web_server_RGB_Control.png" />
</p>

## Code review
* main.c 정도 설명
The HTTP server library is roughly composed of the following functions.
- httpServer_init(): Handler the HTTP server initialization (user's buffer, H/W sockets for HTTP)
- reg_httpServer_webContent(): Function for example web page registration
  - webpages, javascript function pages, images and etc.
- httpServer_run(): HTTP server process handler in main routine.

** web page examples are located in 'webpages.h' file.

W6100-EVB uses AJAX method and pre-defined CGI function to configure the network or monitor and control the I/O.
<p align="center">
  <img width="70%" src="https://user-images.githubusercontent.com/48539052/55704586-78dce180-5a17-11e9-8b43-7e57b2c94cfb.png" />
</p>
CGI for W6100-EVB consists the 'Request name + .cgi' using HTTP GET/POST request method. The CGI for each HTTP methods are handled as below.

<p align="center">
  <img width="90%" src="https://user-images.githubusercontent.com/48539052/55704588-79757800-5a17-11e9-930b-893a18b9dd10.png" />
</p>

### GET
- The method for getting the values from web server
- Passed in the form of a JavaScript callback function parameters
  - Same structures as JSON
  - The function name in the HTTP response body must be the same on the Web page's JavaScript Callback function name
  - e.g., If the 'function IoStatusCallback' is Javascript function name in the Web page, web server must pass the data as next; DioCallback({"dio_p" : "0"}, {"dio_s" : "0"}, {"dio_d" : "2"})

### POST
- The method for putting the changed values to web server
- Values are passing by the Web form element
- Key-value pairs; Each pair is separated by '&' and the Key/value of a pair is represented by '='
  - e.g., 'Pin : 1, Val : 1' ⇒ 'Pin=1&Val=1'

### Pre-defined GET/POST CGI Name Example
- GET (Get)
  - get_netinfo.cgi (Network information, Return MAC/IP/GW/SN/DNS/LLA/GUA/SN6/GW6/DHCPen/)

- POST (Set)
  - set_diostate.cgi (Setting the Digital I/O status, Post requset have to includes 'pin=x&val=y', 0(low) or 1(high))

<br>
