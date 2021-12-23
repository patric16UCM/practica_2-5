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
getaddrinfo(arg[1],arg[2] , hints, res);
    char *host[];
    char *serv[];
     getnameinfo(res.ai_addr,res.ai_addrlen,host, NI_MAXHOST,serv,NI_MAXSERV,  NI_NUMERICHOST);


int sd =socket(res.ai_family,res.ai_socktype, res.ai_protocol);
int bind(sd, res.ai_addr, res.ai_addrlen);
while(1){
int *buf[];
struct sockaddr_storage client;
socklent_t client_len = sizeof(struct sockaddr_storage);
int bytes =  recvfrom(sd, buf, 100, 0,(struct sockaddr*)client, client.len);
if(srtcmp(buf,'t')==0){
    //tiempo
    time_t tiempo;
    time(&tiempo);
    timeinfo = localtime(&tiempo);
    sendto(sd,timeinfo,100,0,(struct sockaddr*)client, client.len);
}
else if (srtcmp(buf,'d')==0){

sendto(sd,timeinfo,100,0,(struct sockaddr*)client, client.len);
}
else if(srtcmp(buf,'q')==0){
    cout<<"exit"<<endl;
}
}
freeaddrinfo(res);
    return 0;
}
