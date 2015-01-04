#ifndef YGO_DATA_JNI_DATAUTILS_H
#define YGO_DATA_JNI_DATAUTILS_H

#include <jni.h>

#include <ygo/data/c/DataTypes.h>

#ifdef __cplusplus
extern "C" {
#endif

jobject ygo_data_static_card_data_to_java(JNIEnv* env,
        ygo_data_StaticCardData* scd);

#ifdef __cplusplus
}
#endif

#endif
