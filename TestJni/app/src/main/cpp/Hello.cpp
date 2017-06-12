//
// Created by Administrator on 2017/3/11 0011.
//

#include <jni.h>
#include <string>
#include <iostream>
#include <android/log.h>


using namespace std;


#define  LOG_TAG    "native-dev"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)


JNIEXPORT void JNICALL
Java_org_cocos2dx_cpp_Native_onResp(JNIEnv *env, jclass type, jstring code_) {
    const char *code = env->GetStringUTFChars(code_, 0);

    // TODO

    env->ReleaseStringUTFChars(code_, code);
}

JNIEXPORT void JNICALL
Java_org_cocos2dx_cpp_Native_onBatteryResp(JNIEnv *env, jclass type, jint battery) {

    // TODO

}


JNIEXPORT void JNICALL
Java_org_cocos2dx_cpp_Native_onCallResp(JNIEnv *env, jclass type, jint status) {

    // TODO

}

extern "C"
jstring
Java_jni_test_com_testjni_LoginUtils_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    jclass cls = env->FindClass("jni/test/com/testjni/LoginUtils");
    jmethodID mid = env->GetStaticMethodID(cls, "login","()Ljava/lang/String;");  ;//映射方法
    //静态：
    jstring jstr = (jstring) env->CallStaticObjectMethod(cls, mid);


    const

//    return env->NewStringUTF(hello.c_str());
    return jstr;
}

extern "C"
JNIEXPORT void JNICALL
Java_jni_test_com_testjni_LoginUtils_onResponse(JNIEnv *env, jclass type, jstring token_) {
    const char *token = env->GetStringUTFChars(token_, 0);
    const char * name = "token";
    __android_log_print(ANDROID_LOG_INFO, "json", "string From Java To C : %s", token);
    env->ReleaseStringUTFChars(token_, token);
}



