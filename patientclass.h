#ifndef PATIENTCLASS_H
#define PATIENTCLASS_H

#include <QString>



class PatientClass
{
public:
    PatientClass();
    enum PatientClassEnum{
        class1,
        class2,
        class3_1,
        class3_2,
        class3_3,
        class3_4,
        class4
    };
    static QString toString(PatientClassEnum pclass);
};

#endif // PATIENTCLASS_H
