#include <jni.h>
#include <string>
#include "socket-client.h"

extern "C"
JNIEXPORT jint JNICALL
Java_dev_seabat_socket_SocketClient_sendJni(JNIEnv *env, jobject thiz, jobject jSocketClient,
                                            jstring msg) {
    SocketClient* client = SocketClient::createInstance(jSocketClient);
    const char *msgChar = env->GetStringUTFChars(msg, nullptr);
    client->send(msgChar);
    env->ReleaseStringUTFChars(msg, msgChar);
    return 0;
}