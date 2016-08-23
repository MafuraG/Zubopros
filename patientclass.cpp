#include "patientclass.h"
#include "pgglobalstrings.h"

PatientClass::PatientClass()
{

}

QString PatientClass::toString(PatientClass::PatientClassEnum pclass)
{
    switch(pclass){
    case PatientClassEnum::class1 : return PgGlobalStrings::CLASS1;
    case PatientClassEnum::class2 : return PgGlobalStrings::CLASS2;
    case PatientClassEnum::class3_1: return PgGlobalStrings::CLASS3_1;
    case PatientClassEnum::class3_2: return PgGlobalStrings::CLASS3_2;
    case PatientClassEnum::class3_3: return PgGlobalStrings::CLASS3_3;
    case PatientClassEnum::class3_4: return PgGlobalStrings::CLASS3_4;
    case PatientClassEnum::class4 : return PgGlobalStrings::CLASS4;
    default: return
    }

}
