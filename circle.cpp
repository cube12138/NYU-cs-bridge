#include"circle.h"


void circle::setR(int r) {
	m_r = r;
}
int circle::getR() {
	return m_r;
}
//����Բ��
void circle::setCenter(point p) {
	m_center = p;
}
//��ȡԲ��
point circle::getCenter() {
	return m_center;
}

