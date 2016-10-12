#pragma once

#define DHCLIENT_TRANSION_INIT 1
#define DHCLIENT_TRANSION_SELECTING 2
#define DHCLIENT_TRANSION_REQUESTING 4
#define DHCLIENT_TRANSION_BOUND 8
#define DHCLIENT_TRANSION_RENEWING 16
#define DHCLIENT_TRANSION_REBINDING 32

void start_dhclient(void);
