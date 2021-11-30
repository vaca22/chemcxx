#include <string>
#include "chem.h"
#include "jni.h"
#include "chem_ChemCalculation.h"
#include <iostream>
using namespace std;

JNIEXPORT jstring JNICALL Java_chem_ChemCalculation_calcChem
        (JNIEnv *env, jclass thiz, jbyteArray chem){
    signed char *arrayChem = env->GetByteArrayElements(chem, NULL);
    ChemEquation *chemEquation = new ChemEquation(reinterpret_cast<const char *>(arrayChem));
    string result=chemEquation->myResult();
    delete chemEquation;
    return env->NewStringUTF(result.c_str());
}