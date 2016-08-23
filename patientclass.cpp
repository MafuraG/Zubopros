#include "patientclass.h"
#include "pgglobalconstants.h"

PatientClass::PatientClass()
{

}

QString PatientClass::toString(PatientClass::PatientClassEnum pclass)
{
    switch(pclass){
    case PatientClassEnum::class1 : return PgGlobalConstants::CLASS1;
    case PatientClassEnum::class2 : return PgGlobalConstants::CLASS2;
    case PatientClassEnum::class3_1: return PgGlobalConstants::CLASS3_1;
    case PatientClassEnum::class3_2: return PgGlobalConstants::CLASS3_2;
    case PatientClassEnum::class3_3: return PgGlobalConstants::CLASS3_3;
    case PatientClassEnum::class3_4: return PgGlobalConstants::CLASS3_4;
    case PatientClassEnum::class4 : return PgGlobalConstants::CLASS4;
    default: return PgGlobalConstants::CLASS_UNKNOWN;
    }

}
