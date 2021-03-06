#include "CPoint.h"


//Constructeur
/*CPoint::CPoint()
{
	this->m_nX = 0;
	this->m_nY = 0;

	this->m_strType = "pivot";

}*/

CPoint::CPoint(int m_nX, int m_nY , string m_strType):m_nX(m_nX), m_nY(m_nY),m_strType(m_strType)
{

	/*this->m_nX = m_nX;
	this->m_nY = m_nY;
	this->m_strType = m_strType;*/

}

CPoint::CPoint(int m_nX, int m_nY)
{
	this->m_nX = m_nX;
	this->m_nY = m_nY;
	this->m_strType = "pivot";
}

//Assesseurs
int CPoint::getnX() const
{
	return this->m_nX;
}

int CPoint::getnY() const
{
	return this->m_nY;
}

//Mutateurs
void CPoint::setnX(int m_nX)
{
	this->m_nX = m_nX;
}

void CPoint::setnY(int m_nY)
{
	this->m_nY = m_nY;
}

void CPoint::deplacePoint(int n_X, int n_Y)
{
	this->m_nX = this->m_nX + n_X;
	this->m_nY = this->m_nY + n_Y;
}

bool CPoint::coincidePoint(CPoint &pt)
{
	if (this->m_nX == pt.m_nX && this->m_nY == pt.m_nY)
	{
		return true;
	}
	else {
		return false;
	}
}
