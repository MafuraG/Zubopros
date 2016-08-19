#include "dentistwizard.h"
#include "wp3_1.h"
#include "wp3_10.h"
#include "wp3_11.h"
#include "wp3_12.h"
#include "wp3_13.h"
#include "wp3_14.h"
#include "wp3_2.h"
#include "wp3_3.h"
#include "wp3_4.h"
#include "wp3_5.h"
#include "wp3_6.h"
#include "wp3_7.h"
#include "wp3_8.h"
#include "wp3_9.h"
#include "wp4_5.h"
#include "wp4_6.h"
#include "wppatientclass.h"
#include "wppatientinfo.h"

DentistWizard::DentistWizard(QWidget *parent)
    :QWizard(parent)
{
    setPage(WP_PatientInfo, new WpPatientInfo);
    setPage(WP_PatientClass, new WpPatientClass);
    setPage(WP_3_1, new Wp3_1);
    setPage(WP_3_2, new Wp3_2);
    setPage(WP_3_3, new Wp3_3);
    setPage(WP_3_4, new Wp3_4);
    setPage(WP_3_5, new Wp3_5);
    setPage(WP_3_6, new Wp3_6);
    setPage(WP_3_7, new Wp3_7);
    setPage(WP_3_8, new Wp3_8);
    setPage(WP_3_9, new Wp3_9);
    setPage(WP_3_10, new Wp3_10);
    setPage(WP_3_11, new Wp3_11);
    setPage(WP_3_12, new Wp3_12);
    setPage(WP_3_13, new Wp3_13);
    setPage(WP_3_14, new Wp3_14);
    setPage(WP_4_5, new Wp4_5);
    setPage(WP_4_6, new Wp4_6);

    setStartId(WP_PatientInfo);

}
