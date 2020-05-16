

#include <iostream>
#include "server.h"


int main(int argc, char* argv[]){
    rtc::Server* server = new rtc::Server();
    if(server){
        server->run();
    }
    return 0;
}