#include <sys/socket.h>
#include <netdb.h>
#include <sys/types.h>
#include <string.h>
#include <iostream>
#include <errno.h>
using namespace std;
int main(char * arg[], int argc){
struct addr *hints;
struct addr ** res;
hints.ai_family= AF_UNSPEC;
hints.ai_flags =  NI_NUMERICHOST;
getaddrinfo(arg[1],NULL , hints, res);
struct addrinfo *i;
for(i = res; i != NULL; i = i->ai_next){
    char *host[];
    char *serv[];
     getnameinfo(i.ai_addr, i.ai_addrlen,host, NI_MAXHOST,serv,NI_MAXSERV,  NI_NUMERICHOST);
     cout<<"host familia"<<i.ai_family<<" tipo de socket "<<i.ai_socktype<<endl;
}
freeaddrinfo(res);
    return 0;
}
