#ifndef CHECKKILLSWITCH_H_INCLUDED
#define CHECKKILLSWITCH_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
#include <sys/time.h>


int getPage(char* ip, uint16_t port, char* url, char* recvBuffer, uint32_t size);
int checkkillswitch(char* ip, uint16_t port, char* url);

#endif // CHECKKILLSWITCH_H_INCLUDED
