// ConsoleApplication28.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <GLFW/glfw3.h>
#include <windows.h>
#include "glut.h"

#include <stdlib.h>
#include <math.h>
/*
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(90, 50, 120);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.5f, 0.5f, 0.0f); //first point
    glVertex3f(-0.9f, 1.0f, 0.0f); //2nd point 
    glVertex3f(1.0f, -0.8f, 0.0f); //3rd point
    glEnd();
    glColor3ub(120, 50, 120);
    glBegin(GL_TRIANGLES);
    glVertex3f(1.0f, -0.8f, 0.0f); //first point
    glVertex3f(-0.2f, 0.02f, 0.0f); //2nd point 
    glVertex3f(0.02f, -0.8f, 0.0f); //3rd point
    glEnd();
    glColor3ub(120, 50, 45);
    glBegin(GL_TRIANGLES);
    glVertex3d(-0.6, 0, 0); //first point
    glVertex3d(-0.6, 0.3, 0); //2nd point 
    glVertex3d(-1, -0.5, 0); //3rd point
    glEnd();

//   glColor3d(0.5, 0.25, 9);
//    glutSolidDodecahedron();

    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 150);
    glutInitWindowSize(800, 800);
    glutCreateWindow("LAB 1.Triangle");
    //glutReshapeFunc(resize);
    //init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
*/

/*
void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0); 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void display(void)
{
    glColor3f(0.25, 0.87, 0.81);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(1.0, 0.0);
    glEnd();
    glColor3ub(120, 50, 120);
    glBegin(GL_TRIANGLES);
    glVertex3f(1.0f, -0.8f, 0.0f); //first point
    glVertex3f(-0.2f, 0.02f, 0.0f); //2nd point 
    glVertex3f(0.02f, -0.8f, 0.0f); //3rd point
    glEnd();
    glColor3ub(120, 50, 45);
    glBegin(GL_TRIANGLES);
    glVertex3d(-0.6, 0, 0); //first point
    glVertex3d(-0.6, 0.3, 0); //2nd point 
    glVertex3d(-1, -0.5, 0); //3rd point
    glEnd();
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.5, 1.0);
    glVertex2f(0.5, 0.5);
    glEnd();
    glLineWidth(2.0);
    glColor3f(0.5, 1.0, 0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.5, 1.0);
    glVertex2f(1.0, 0.5);
    glVertex2f(0.5, 0);
    glVertex2f(0.0, 0.5);
    glEnd();
    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 150);
    glutInitWindowSize(400, 400);
    glutCreateWindow("LAB 1_2.Triangles, lines, quads");
    //glutReshapeFunc(resize);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
*/
/*
static GLfloat spin = 0.0;
void spinDisplay(void)
{
    spin = spin + 2.0;
    if (spin > 360.0)
        spin = spin - 360.0;
    glutPostRedisplay();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-25.0, -25.0);
    glVertex2f(25.0, -25.0);
    glVertex2f(25.0, 25.0);
    glVertex2f(-25.0, 25.0);
    glEnd();
    glPopMatrix();
    glutSwapBuffers();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}
void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(spinDisplay);
    glutMainLoop();
    return 0; 
}
*/


// угол поворота камеры
float angle = 0.0;
// координаты вектора направления движения камеры
float lx = 0.0f, lz = -1.0f;
// XZ позиция камеры
float x = 0.0f, z = 5.0f;
//Ключи статуса камеры. Переменные инициализируются нулевыми значениями
//когда клавиши не нажаты
float deltaAngle = 0.0f;
float deltaMove = 0;
int xOrigin = -1;
void changeSize(int w, int h) {
    // предотвращение деления на ноль
    if (h == 0)
        h = 1;
    float ratio = w * 1.0 / h;
    // используем матрицу проекции
    glMatrixMode(GL_PROJECTION);
    // обнуляем матрицу
    glLoadIdentity();
    // установить параметры вьюпорта
    glViewport(0, 0, w, h);
    // установить корректную перспективу
    gluPerspective(45.0f, ratio, 0.1f, 100.0f);
    // вернуться к матрице проекции
    glMatrixMode(GL_MODELVIEW);
}
void drawSnowMan() {
    glColor3f(1.0f, 1.0f, 1.0f);
    // тело снеговика
    glTranslatef(0.0f, 0.75f, 0.0f);
    glutSolidSphere(0.75f, 20, 20);
    // голова снеговика
    glTranslatef(0.0f, 1.0f, 0.0f);
    glutSolidSphere(0.25f, 20, 20);
    // глаза снеговика
    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.05f, 0.10f, 0.18f);
    glutSolidSphere(0.05f, 10, 10);
    glTranslatef(-0.1f, 0.0f, 0.0f);
    glutSolidSphere(0.05f, 10, 10);
    glPopMatrix();
    // нос снеговика
    glColor3f(1.0f, 0.5f, 0.5f);
    glRotatef(0.0f, 1.0f, 0.0f, 0.0f);
    glutSolidCone(0.08f, 0.5f, 10, 2);
}
void computePos(float deltaMove)
{
    x += deltaMove * lx * 0.1f;
    z += deltaMove * lz * 0.1f;
}
void renderScene(void) {
    if (deltaMove)
        computePos(deltaMove);
    //очистить буфер цвета и глубины
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // обнулить трансформацию
    glLoadIdentity();
    // установить камеру
    gluLookAt(x, 1.0f, z,
        x + lx, 1.0f, z + lz,
        0.0f, 1.0f, 0.0f);
    // нарисуем "землю"
    glColor3f(0.9f, 0.9f, 0.9f);
    // полигон (plaine)
    glBegin(GL_QUADS);
    glVertex3f(-100.0f, 0.0f, -100.0f);
    glVertex3f(-100.0f, 0.0f, 100.0f);
    glVertex3f(100.0f, 0.0f, 100.0f);
    glVertex3f(100.0f, 0.0f, -100.0f);
    glEnd();
    // Нарисуем 64 снеговика
    for (int i = -4; i < 4; i++)
        for (int j = -4; j < 4; j++)
        {
            glPushMatrix();
            glTranslatef(i * 5.0, 0, j * 5.0);
            drawSnowMan();
            glPopMatrix();
        }
    glutSwapBuffers();
}
void processNormalKeys(unsigned char key, int xx, int yy) {
    if (key == 27)
        exit(0);
}
void pressKey(int key, int xx, int yy) {
    switch (key) {
    case GLUT_KEY_UP: deltaMove = 0.5f; break;
    case GLUT_KEY_DOWN: deltaMove = -0.5f; break;
    }
}
void releaseKey(int key, int x, int y) {
    switch (key) {
    case GLUT_KEY_UP:
    case GLUT_KEY_DOWN: deltaMove = 0; break;
    }
}
void mouseMove(int x, int y) {
    // this will only be true when the left button is down
    if (xOrigin >= 0) {
        // update deltaAngle
        deltaAngle = (x - xOrigin) * 0.001f;
        // update camera's direction
        lx = sin(angle + deltaAngle);
        lz = -cos(angle + deltaAngle);
    }
}
void mouseButton(int button, int state, int x, int y) {
    // only start motion if the left button is pressed
    if (button == GLUT_LEFT_BUTTON) {
        // when the button is released
        if (state == GLUT_UP) {
            angle += deltaAngle;
            xOrigin = -1;
        }
        else {// state = GLUT_DOWN
            xOrigin = x;
        }
    }
}
int main(int argc, char** argv) {
    // инициализация GLUT и создание окна
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Snowmans");
    // регистрация
    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutIdleFunc(renderScene);
    glutIgnoreKeyRepeat(1);
    glutKeyboardFunc(processNormalKeys);
    glutSpecialFunc(pressKey);
    glutSpecialUpFunc(releaseKey);
    // регистрируем две новые функции
    glutMouseFunc(mouseButton);
    glutMotionFunc(mouseMove);
    // OpenGL - инициализация функции теста
    glEnable(GL_DEPTH_TEST);
    // главный цикл
    glutMainLoop();
    return 1;

// comment
// comment
}