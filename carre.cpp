#include"carre.h"

void CCarre::Setsx(int sx1)
{
	sx = sx1;
	this->sx = sx1;

}

void CCarre::Setsy(int sy1)
{
	sy = sy1;
	this-> sy = sy1;

}

void CCarre::Setcote(unsigned int cote1)
{
	cote = cote1;
	this->cote = cote1;


}

void CCarre::Afficher()
{
	cout << "sx : " << this->sx <<endl << "sy : " << this->sy <<endl << "cote : " << this->cote<<endl
		;
}

int CCarre::Getsx()
{
	return sx;
}

int CCarre::Getsy()
{
	return sy;
}

int CCarre::GetCote()
{
	return cote;
}

void CCarre::Deplacer(char direction, int saut)
{
	switch (direction)
	{
	case 'n'://nord
		sy += saut;
		break;
	case 's'://sud
		sy -= saut;
		break;
	case 'o'://ouest
		sx -= saut;
		break;
	case 'e'://est
		sx += saut;
		break;
	
	};
}
void CCarre::Deplacer(unsigned int dx, unsigned int dy)
{
	sx += dx;
	sy += dy;
}

