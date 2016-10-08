#pragma once

#include "Draw.h"
#include "Geometric.h"

// Cursor Position Check
bool InsideCircle(const int& i0, const int& j0, int r, double xpos, double ypos)
{
	double check = (xpos - (double)i0) * (xpos - (double)i0) + (ypos - (double)j0) * (ypos - (double)j0);

	if (check < (double)r * (double)r) return true;
	else return false;
}

// Child Class
class Change1 : public Geometric
{
public:
	int x, y, r;

	Change1(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 0.0f, 0.0f, 1.0f);
	}
};

// Child Class
class Change2 : public Geometric
{
public:
	int x, y, r;

	Change2(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 0.0f, 0.0f, 1.0f);
	}
};

// Child Class
class Change3 : public Geometric
{
public:
	int x, y, r;

	Change3(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 0.0f, 0.0f, 1.0f);
	}
};

// Child Class
class Change4 : public Geometric
{
public:
	int x, y, r;

	Change4(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 0.0f, 0.0f, 1.0f);
	}
};