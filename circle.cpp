#include"circle.h"


void circle::setR(int r) {
	m_r = r;
}
int circle::getR() {
	return m_r;
}
//设置圆心
void circle::setCenter(point p) {
	m_center = p;
}
//获取圆心
point circle::getCenter() {
	return m_center;
}

