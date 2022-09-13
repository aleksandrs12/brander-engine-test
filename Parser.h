#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <iterator>
#include <numeric>
#include"Model.h"
#include <stdio.h>
#include"Parser.h"


struct coord3d {
	double x;
	double y;
	double z;
};

struct coord2d {
	double x;
	double y;
};

struct triangle {
	int points[3];
	int pos;
	int txPoints[3];
};


struct object {
	std::vector<glm::vec3> vn;
	std::vector<glm::vec2> vt;
	std::vector<glm::GLfloat> v;
	float pos;
	std::vector<triangle> triangles;
};

std::vector<object> parse();
