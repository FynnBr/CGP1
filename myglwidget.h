#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QVector3D>
#include <QKeyEvent>
#include <QDebug>

class MyGLWidget : public QOpenGLWidget{
    Q_OBJECT
    private:
        int m_FOV;
        int m_Angle;
        bool m_ProjectionMode;
        double m_Near;
        double m_Far;
        int m_RotationA;
        int m_RotationB;
        int m_RotationC;
        QVector3D m_CameraPos;


    public:
        MyGLWidget(QWidget *parent);
        void keyPressEvent(QKeyEvent *event);
        int getAngle();
        int getFOV();

    public slots:
        void setFOV(int value);
        void setAngle(int value);
        void setProjectionMode();
        void setNear(double value);
        void setFar(double value);
        void setRotationA(int value);
        void setRotationB(int value);
        void setRotationC(int value);

    signals:
        void farValueChanged(int value);
        void nearValueChanged(int value);

};

#endif // MYGLWIDGET_H
