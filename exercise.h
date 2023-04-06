#include "QString"
#include "QPixmap"

#ifndef EXERCISE_H
#define EXERCISE_H




class Exercise
{
public:
    Exercise();
    Exercise(QString x, QString y, QString z);
    QString nameOfEx;
    QString time;
    QString path;
};

#endif // EXERCISE_H
