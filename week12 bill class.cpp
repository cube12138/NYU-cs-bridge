#include <iostream>
#include <string>
#include<cmath>
#include"point.h"
#include"circle.h"

using namespace std;
//example1 �����尸��
class cube {
    //��Ϊ
    //���û�ȡ�����
public:
    void setLength(int l) {
        m_l = l;
    }
    int getLength() {
        return m_l;
    }

    void setWidth(int w) {
        m_w = w;
    }
    int getWidth() {
        return m_w;
    }

    void setHighth(int h) {
        m_h = h;
    }
    int getHighth() {
        return m_h;
    }
    //��ȡ���������
    int calculateArea() {
        return 2 * (m_w * m_h + m_h * m_l + m_l * m_w);
    }
    //��ȡ���������
    int calculateVolume() {
        return m_w * m_h * m_l;
    }
    //�ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
    //��Ա������
    //����ֻ��һ��cube�ͺ� �������cube�����ǵ����Ա�!
    bool isSameInClass(cube& c) {
        if ((c.getWidth() == m_w) && (c.getHighth() == m_h) && (c.getLength() == m_l))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //���� ������private����ʱ����Ϊ�м�һЩpublic�Ľӿڡ����Կ��ƶ�дȨ�ޣ����Ҷ���дȨ�� ���Լ�����ݵ���Ч��
private:
    int m_l, m_w, m_h;
};
//ȫ�ֺ�����
bool isSame(cube& c1, cube& c2) {
    if ((c1.getWidth() == c2.getWidth()) && (c1.getHighth() == c2.getHighth()) && (c1.getLength() == c2.getLength())) {
        return true;
    }
    else
    {
        return false;
    }
}
int main1() {
    cube c1;
    c1.setLength(10);
    c1.setWidth(10);
    c1.setHighth(10);
    cout << "c1 �����Ϊ�� " << c1.calculateArea() << endl;
    cout << "c1 �����Ϊ�� " << c1.calculateVolume() << endl;

    cube c2;
    c2.setLength(10);
    c2.setWidth(10);
    c2.setHighth(11);
    //���� ȫ�ֺ��� �ж������������Ƿ����
    bool ret = isSame(c1, c2);
    if (ret) {
        cout << "same cubes" << endl;
    }
    else {
        cout << "different cubes" << endl;
    }

    //���� ��Ա���� �ж������������Ƿ����
    bool ret2 = c1.isSameInClass(c2);
    if (ret2) {
        cout << "same cubes" << endl;
    }
    else {
        cout << "different cubes" << endl;
    }
    return 0;
}

//example2 ���Բ�Ĺ�ϵ
//��(x1-x2)^2+(y1-y2)^2 �� m_r^2 �Ա�
//class point {
//public:
//    void setX(int x) {
//        m_x = x;
//    }
//    int getX() {
//        return m_x;
//    }
//    void setY(int y) {
//        m_y = y;
//    }
//    int getY() {
//        return m_y;
//    }
//private:
//    int m_x;
//    int m_y;
//};
//class circle {
//public:
//    //���ð뾶
//    void setR(int r) {
//        m_r = r;
//    }
//    int getR() {
//        return m_r;
//    }
//    //����Բ��
//    void setCenter(point p) {
//        m_center = p;
//    }
//    //��ȡԲ��
//    point getCenter() {
//        return m_center;
//    }
//
//private:
//    int m_r;
//    point m_center;
//};
void isInCircle(circle& c, point& p) {
    //��������֮������ƽ��
    int a = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    //����뾶��ƽ��
    int b = c.getR() * c.getR();
    //�ж�
    if (a == b) {
        cout << "����Բ��";
    }
    if (a > b) {
        cout << "����Բ��";
    }
    if (a < b) {
        cout << "����Բ��";
    }
}
int main2()
{
    //����Բ
    circle c;
    point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    c.setR(10);
    //������
    point p;
    p.setX(11);
    p.setY(0);
    //�Ƚϵ��Բ�Ĺ�ϵ
    isInCircle(c, p);
    return 0;
}

