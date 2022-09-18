#include <iostream>
#include <string>
#include<cmath>
#include"point.h"
#include"circle.h"

using namespace std;
//example1 立方体案例
class cube {
    //行为
    //设置获取长宽高
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
    //获取立方体面积
    int calculateArea() {
        return 2 * (m_w * m_h + m_h * m_l + m_l * m_w);
    }
    //获取立方体体积
    int calculateVolume() {
        return m_w * m_h * m_l;
    }
    //分别利用全局函数和成员函数判断两个立方体是否相等
    //成员函数：
    //参数只用一个cube就好 用类外的cube和类那的做对比!
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

    //属性 最好设成private，此时在行为中加一些public的接口。可以控制读写权限，而且对于写权限 可以检测数据的有效性
private:
    int m_l, m_w, m_h;
};
//全局函数：
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
    cout << "c1 的面积为： " << c1.calculateArea() << endl;
    cout << "c1 的体积为： " << c1.calculateVolume() << endl;

    cube c2;
    c2.setLength(10);
    c2.setWidth(10);
    c2.setHighth(11);
    //利用 全局函数 判断两个立方体是否相等
    bool ret = isSame(c1, c2);
    if (ret) {
        cout << "same cubes" << endl;
    }
    else {
        cout << "different cubes" << endl;
    }

    //利用 成员函数 判断两个立方体是否相等
    bool ret2 = c1.isSameInClass(c2);
    if (ret2) {
        cout << "same cubes" << endl;
    }
    else {
        cout << "different cubes" << endl;
    }
    return 0;
}

//example2 点和圆的关系
//用(x1-x2)^2+(y1-y2)^2 和 m_r^2 对比
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
//    //设置半径
//    void setR(int r) {
//        m_r = r;
//    }
//    int getR() {
//        return m_r;
//    }
//    //设置圆心
//    void setCenter(point p) {
//        m_center = p;
//    }
//    //获取圆心
//    point getCenter() {
//        return m_center;
//    }
//
//private:
//    int m_r;
//    point m_center;
//};
void isInCircle(circle& c, point& p) {
    //计算两点之间距离的平方
    int a = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    //计算半径的平方
    int b = c.getR() * c.getR();
    //判断
    if (a == b) {
        cout << "点在圆上";
    }
    if (a > b) {
        cout << "点在圆外";
    }
    if (a < b) {
        cout << "点在圆内";
    }
}
int main2()
{
    //创建圆
    circle c;
    point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    c.setR(10);
    //创建点
    point p;
    p.setX(11);
    p.setY(0);
    //比较点和圆的关系
    isInCircle(c, p);
    return 0;
}

