#ifndef VISUALOBJECT_H
#define VISUALOBJECT_H


#include <QOpenGLFunctions_4_1_Core>
#include <QMatrix4x4>
#include <vector>
#include "vertex.h"


class VisualObject : public QOpenGLFunctions_4_1_Core
{
public:
    VisualObject();
    ~VisualObject();

    virtual void init(GLint matrixUniform)=0;
    virtual void draw()=0;
    // move for interaktive objekter
    virtual void move(float x, float y, float z) {  }
    // move for simulerende objekter
    virtual void move(float dt) {}
    bool mRotate;

protected:
    std::vector<Vertex> mVertices;
    GLuint mVAO{0};
    GLuint mVBO{0};
    GLint mMatrixUniform{0};

    QMatrix4x4 mMatrix;
    QMatrix4x4 mPmatrix;
    QMatrix4x4 mVmatrix;

    // Velger å lagre posisjon, rotasjon og translasjon
    // I hver sin 4x4 matrise
    QMatrix4x4 mPosition;
    QMatrix4x4 mRotation;
    QMatrix4x4 mScale;
    // Legger til rette for simulering
    QVector3D mVelocity;
 };
 #endif // VISUALOBJECT_H
