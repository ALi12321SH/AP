QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customers.cpp \
    dentistdoctorsintro.cpp \
    dentrisrtysection.cpp \
    dialog_login.cpp \
    digestiondoctorsintro.cpp \
    digestionsection.cpp \
    doctors.cpp \
    doctorsintroduction.cpp \
    doctorsschedule.cpp \
    heartdoctorsintro.cpp \
    heartsection.cpp \
    hospitalsections.cpp \
    learningsection.cpp \
    main.cpp \
    mainwindow.cpp \
    neurologydoctorsintro.cpp \
    neurologysection.cpp \
    orthopedistdoctorsintro.cpp \
    orthopedysection.cpp \
    registeration_form.cpp \
    userpage.cpp

HEADERS += \
    ../../../tvr/Hospital-Management/APproject/customers.h \
    customers.h \
    dentistdoctorsintro.h \
    dentrisrtysection.h \
    dialog_login.h \
    digestiondoctorsintro.h \
    digestionsection.h \
    doctors.h \
    doctorsintroduction.h \
    doctorsschedule.h \
    heartdoctorsintro.h \
    heartsection.h \
    hospitalsections.h \
    learningsection.h \
    mainwindow.h \
    neurologydoctorsintro.h \
    neurologysection.h \
    orthopedistdoctorsintro.h \
    orthopedysection.h \
    registeration_form.h \
    userpage.h

FORMS += \
    dentistdoctorsintro.ui \
    dentrisrtysection.ui \
    dialog_login.ui \
    digestiondoctorsintro.ui \
    digestionsection.ui \
    doctors.ui \
    doctorsintroduction.ui \
    doctorsschedule.ui \
    heartdoctorsintro.ui \
    heartsection.ui \
    hospitalsections.ui \
    learningsection.ui \
    mainwindow.ui \
    neurologydoctorsintro.ui \
    neurologysection.ui \
    orthopedistdoctorsintro.ui \
    orthopedysection.ui \
    register_form.ui \
    registeration_form.ui \
    userpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recources.qrc
