#ifndef NDK_SOCKET_LOOP_TCP_IPV4_H
#define NDK_SOCKET_LOOP_TCP_IPV4_H


#include "msg-listener.h"

class LoopTcpIpv4 {
private:
    IMsgListener* listener_;

public:
    LoopTcpIpv4(IMsgListener* listener);
    void run();
};


#endif //NDK_SOCKET_LOOP_TCP_IPV4_H
