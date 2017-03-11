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

    setPage(PgGlobalConstants::WP_PatientInfo, new WpPatientInfo);
    setPage(PgGlobalConstants::WP_PatientClass, new WpPatientClass);
    setPage(PgGlobalConstants::WP_3_1, new Wp3_1(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_2, new Wp3_2(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_3, new Wp3_3(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_4, new Wp3_4(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_5, new Wp3_5(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_6, new Wp3_6(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_7, new Wp3_7(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_8, new Wp3_8(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_9, new Wp3_9(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_10, new Wp3_10(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_11, new Wp3_11(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_12, new Wp3_12(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_13, new Wp3_13(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_3_14, new Wp3_14(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_4_5, new Wp4_5(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_4_6, new Wp4_6(parent,m_patientHistory));
    setPage(PgGlobalConstants::WP_Diagnosis,new WpDiagnosis(parent,m_patientHistory));
    setStartId(PgGlobalConstants::WP_PatientInfo);

    navForm = new NavForm();

    connect(navForm,&NavForm::choosenCurrentPage,this,&DentistWizard::setCurrentPage);

    //navForm->show();

}

void DentistWizard::setCurrentPage(int page)
{
    //NavHelper *nav = (NavHelper*)currentPage();

    //nav->setNextIDNav(page);
    //nav->setNavigate(true);
    m_patientHistory->setNextpage(page);
    m_patientHistory->setNavigate(true);
    nextId();
    //nav->setNavigate(false);
    m_patientHistory->setNavigate(false);

}
