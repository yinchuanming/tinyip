#ifndef _APP_H_
#define _APP_H_

#define ADDITIONAL_LOOP_NUM 0 /* number of additional loops */

/*
 *  Definition of priority and stack size
 *
 *  Define priority and stack size for each task used in this
 *  application. These definitions are refered from system the
 *  confguration file (.cfg).
 */
#ifndef MAIN_TASK_PRI
#define MAIN_TASK_PRI  4
#endif /* MAIN_TASK_PRI */

#ifndef MAIN_TASK_STACK_SIZE
#define MAIN_TASK_STACK_SIZE 1024
#endif  /* MAIN_TASK_STACK_SIZE */

#ifndef ETHERNET_TASK_PRI
#define ETHERNET_TASK_PRI  8
#endif /* ETHERNET_TASK_PRI */

#ifndef ETHERNET_TASK_STACK_SIZE
#define ETHERNET_TASK_STACK_SIZE 1024
#endif  /* ETHERNET_TASK_STACK_SIZE */

#ifndef IP_TASK_PRI
#define IP_TASK_PRI  7
#endif /* IP_TASK_PRI */

#ifndef IP_TASK_STACK_SIZE
#define IP_TASK_STACK_SIZE 1024
#endif  /* ETHERNET_TASK_STACK_SIZE */

#ifndef ARP_TASK_PRI
#define ARP_TASK_PRI  7
#endif /* ARP_TASK_PRI */

#ifndef ARP_TASK_STACK_SIZE
#define ARP_TASK_STACK_SIZE 1024
#endif  /* ARP_TASK_STACK_SIZE */

#ifndef ICMP_TASK_PRI
#define ICMP_TASK_PRI  6
#endif /* ICMP_TASK_PRI */

#ifndef ICMP_TASK_STACK_SIZE
#define ICMP_TASK_STACK_SIZE 1024
#endif  /* ICMP_TASK_STACK_SIZE */

#ifndef UDP_TASK_PRI
#define UDP_TASK_PRI  5
#endif /* UDP_TASK_PRI */

#ifndef UDP_TASK_STACK_SIZE
#define UDP_TASK_STACK_SIZE 1024
#endif  /* UDP_TASK_STACK_SIZE */

#ifndef TCP_TASK_PRI
#define TCP_TASK_PRI  5
#endif /* TCP_TASK_PRI */

#ifndef TCP_TASK_STACK_SIZE
#define TCP_TASK_STACK_SIZE 1024
#endif  /* TCP_TASK_STACK_SIZE */

/*
 *  Definition of memory size for RTOS
 *
 *  Define size of memory which used by RTOS at runtime.
 */

#ifndef KMM_SIZE
#define	KMM_SIZE	(MAIN_TASK_STACK_SIZE * 16)
#endif /* KMM_SIZE */

/*
 *  Declaration of handlers and tasks
 *
 *  When you define a new handler/task in .cfg, add its prototype
 *  declaration here.
 */
#ifdef __cplusplus
extern "C" {
#endif

extern void	cyclic_handler(intptr_t exinf);
extern void main_task(intptr_t exinf);
extern void ethernet_task(intptr_t exinf);
extern void ip_task(intptr_t exinf);
extern void arp_task(intptr_t exinf);
extern void icmp_task(intptr_t exinf);
extern void udp_task(intptr_t exinf);
extern void tcp_task(intptr_t exinf);

#ifdef __cplusplus
}
#endif

#endif /* _APP_H_ */