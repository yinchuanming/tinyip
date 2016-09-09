#include "netconf.h"
#include "protohdr.h"

uint8_t IPADDR[IP_ADDR_LEN]={0xC0,0xA8,0x00,0x0A}; //192.168.0.10/24
uint8_t NETMASK[IP_ADDR_LEN]={0xFF,0xFF,0xFF,0x00};
uint8_t DEFAULT_GATEWAY[IP_ADDR_LEN]={0xC0,0xA8,0x00,0x01}; //192.168.0.1
uint8_t MACADDR[ETHER_ADDR_LEN];