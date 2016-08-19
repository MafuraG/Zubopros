#include "patientclass.h"

PatientClass::PatientClass()
{

}

QString PatientClass::toString(PatientClass::PatientClassEnum pclass)
{
    switch(pclass){
    case PatientClassEnum::class1 : return "";
    case PatientClassEnum::class2 : return "";
    case PatientClassEnum::class3_1: return "";
    case PatientClassEnum::class3_2: return "";
    case PatientClassEnum::class3_3: return "";
    case PatientClassEnum::class3_4: return "";
    case PatientClassEnum::class4 : return "";
    }

}
