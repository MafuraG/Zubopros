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
#include "pgglobalconstants.h"
#include "wpdiagnosis.h"

DentistWizard::DentistWizard(QWidget *parent)
    :QWizard(parent)
{
    m_patientHistory = std::make_shared<PatientHistory> ();

    auto *wp = new WpPatientInfo();
    wp->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_PatientInfo, wp);

    auto *wp1 = new WpPatientClass();
    wp1->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_PatientClass, wp1);

    auto *wp3_1 = new Wp3_1();
    wp3_1->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_1, wp3_1);

    auto *wp3_2 = new Wp3_2();
    wp3_2->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_2, wp3_2);

    auto *wp3_3 = new Wp3_3();
    wp3_3->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_3, wp3_3);

    auto *wp3_4 = new Wp3_4();
    wp3_4->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_4, wp3_4);

    auto *wp3_5 = new Wp3_5();
    wp3_5->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_5, wp3_5);

    auto *wp3_6 = new Wp3_6();
    wp3_6->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_6, wp3_6);

    auto *wp3_7 = new Wp3_7();
    wp3_7->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_7, wp3_7);

    auto *wp3_8 = new Wp3_8();
    wp3_8->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_8, wp3_8);

    auto *wp3_9 = new Wp3_9();
    wp3_9->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_9, wp3_9);

    auto *wp3_10 = new Wp3_10();
    wp3_10->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_10, wp3_10);

    auto *wp3_11 = new Wp3_11();
    wp3_11->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_11, wp3_11);

    auto *wp3_12 = new Wp3_12();
    wp3_12->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_12, wp3_12);

    auto *wp3_13 = new Wp3_13();
    wp3_13->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_13, wp3_13);

    auto *wp3_14 = new Wp3_14();
    wp3_14->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_3_14, wp3_14);

    auto *wp4_5 = new Wp4_5();
    wp4_5->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_4_5, wp4_5);

    auto *wp4_6 = new Wp4_6();
    wp4_6->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_4_6, wp4_6);

    auto *wp_diagnosis = new WpDiagnosis();
    wp_diagnosis->setPatientHistory(m_patientHistory);
    setPage(PgGlobalConstants::WP_Diagnosis, wp_diagnosis);

//    setPatientHistory(PgGlobalConstants::WP_PatientInfo);
//    setPatientHistory(PgGlobalConstants::WP_PatientClass);
//    setPatientHistory(PgGlobalConstants::WP_3_1);
//    setPatientHistory(PgGlobalConstants::WP_3_2);
//    setPatientHistory(PgGlobalConstants::WP_3_3);
//    setPatientHistory(PgGlobalConstants::WP_3_4);
//    setPatientHistory(PgGlobalConstants::WP_3_5);
//    setPatientHistory(PgGlobalConstants::WP_3_6);
//    setPatientHistory(PgGlobalConstants::WP_3_7);
//    setPatientHistory(PgGlobalConstants::WP_3_8);
//    setPatientHistory(PgGlobalConstants::WP_3_9);
//    setPatientHistory(PgGlobalConstants::WP_3_10);
//    setPatientHistory(PgGlobalConstants::WP_3_11);
//    setPatientHistory(PgGlobalConstants::WP_3_12);
//    setPatientHistory(PgGlobalConstants::WP_3_13);
//    setPatientHistory(PgGlobalConstants::WP_3_14);
//    setPatientHistory(PgGlobalConstants::WP_4_5);
//    setPatientHistory(PgGlobalConstants::WP_4_6);


    setStartId(PgGlobalConstants::WP_PatientInfo);

}

//void DentistWizard::setPatientHistory(unsigned int pageId){
//    PatientWizardPage *p_WP = (PatientWizardPage*) page(pageId);
//    p_WP->setPageHistory(m_patientHistory);
//}
