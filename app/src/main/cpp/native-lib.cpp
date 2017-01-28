#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_farseer_djinni_demo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
