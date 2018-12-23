#ifndef _SERVER_H_
#define _SERVER_H_

void *get_addr(struct sockaddr *addr);
int get_socket(char *hostname, char *port);

#endif /* _SERVER_H_ */
