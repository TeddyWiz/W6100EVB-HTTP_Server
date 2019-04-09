#ifndef __W6100RELFUNCTIONS_H_
#define __W6100RELFUNCTIONS_H_

#include "wizchip_conf.h"
#include "main.h"

#define SOCK_TCPS       0
#define SOCK_UDPS       1
#define PORT_TCPS		5000
#define PORT_UDPS       3000

#define MAX_HTTPSOCK	4

// Addfess Family v4
#define AF_INET 2
// Addfess Family v6
#define AF_INET6 23
// Addfess Family DUAL
#define AF_INET_DUAL 11


uint8_t spiReadByte(void);
void spiWriteByte(uint8_t byte);
void csEnable(void);
void csDisable(void);
void W6100Initialze(void);

#if defined STD_LIB

#define DMA

#if (_WIZCHIP_IO_MODE_==_WIZCHIP_IO_MODE_BUS_INDIR_)
	#ifdef DMA
   	   #define BUS_DMA
	#endif
#elif(_WIZCHIP_IO_MODE_== _WIZCHIP_IO_MODE_SPI_VDM_)||(_WIZCHIP_IO_MODE_== _WIZCHIP_IO_MODE_SPI_FDM_)
	#ifdef DMA
		#define SPI_DMA
	#endif
#endif


#if defined SPI_DMA
uint8_t spiReadBurst(uint8_t* pBuf, uint16_t len);
void spiWriteBurst(uint8_t* pBuf, uint16_t len);
#endif
iodata_t busReadByte(uint32_t addr);
void busWriteByte(uint32_t addr, iodata_t data);
#if defined BUS_DMA
void busReadBurst(uint32_t addr,uint8_t* pBuf, uint32_t len,uint8_t addr_inc);
void busWriteBurst(uint32_t addr, uint8_t* pBuf ,uint32_t len,uint8_t addr_inc);
#endif

void resetAssert(void);
void resetDeassert(void);

void W6100Reset(void);

//todo for test
void register_read(void);
void socket_register_read(uint8_t sn);
#endif

#endif

