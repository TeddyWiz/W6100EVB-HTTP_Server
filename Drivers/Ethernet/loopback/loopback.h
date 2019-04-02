#ifndef _LOOPBACK_H_
#define _LOOPBACK_H_

#include <stdint.h>

/* Loopback test debug message printout enable */
#define	_LOOPBACK_DEBUG_

/* DATA_BUF_SIZE define for Loopback example */
#ifndef DATA_BUF_SIZE
	#define DATA_BUF_SIZE			2048
#endif

/************************/
/* Select LOOPBACK_MODE */
/************************/
#define LOOPBACK_MAIN_NOBLOCK    0
#define LOOPBACK_MODE   LOOPBACK_MAIN_NOBLOCK


/* TCP server Loopback test example */
int32_t loopback_tcps(uint8_t sn, uint16_t port, uint8_t* buf, uint8_t ip_ver);

/* TCP client Loopback test example */
int32_t loopback_tcpc(uint8_t sn, uint8_t* buf, uint8_t* destip, uint16_t destport, uint8_t ip_ver);

/* UDP Loopback test example */
int32_t loopback_udps(uint8_t sn, uint8_t* buf, uint16_t port, uint8_t ip_ver);

static void proc_http(unsigned char s,	u_char * buf);
static u_int replace_sys_env_value(u_char* base, u_int len);
#endif