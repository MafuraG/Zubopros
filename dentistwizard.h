#ifndef DENTISTWIZARD_H
#define DENTISTWIZARD_H

#include <QWizard>



class DentistWizard: public QWizard
{
public:
    enum { WP_PatientInfo,
           WP_PatientClass,
           WP_3_1,
           WP_3_2,
           WP_3_3,
           WP_3_4,
           WP_3_5,
           WP_3_6,
           WP_3_7,
           WP_3_8,
           WP_3_9,
           WP_3_10,
           WP_3_11,
           WP_3_12,
           WP_3_13,
           WP_3_14,
           WP_4_5,
           WP_4_6
         };
    DentistWizard(QWidget *parent = 0);
};

#endif // DENTISTWIZARD_H
