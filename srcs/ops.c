#include "fdf.h"

t_mat4x4	rot_mat_x(float x)
{
	t_mat4x4	mat;

	mat = id_mat();
	mat.m[1][1] = cos(x);
	mat.m[1][2] = sin(x);
	mat.m[2][1] = -sin(x);
	mat.m[2][2] = cos(x);
	return (mat);
}

t_mat4x4	rot_mat_y(float y)
{
	t_mat4x4	mat;

	mat = id_mat();
	mat.m[0][0] = cos(y);
	mat.m[0][2] = sin(y);
	mat.m[2][0] = -sin(y);
	mat.m[2][2] = cos(y);
	return (mat);
}

t_mat4x4	rot_mat_z(float z)
{
	t_mat4x4	mat;

	mat = id_mat();
	mat.m[0][0] = cos(z);
	mat.m[0][1] = -sin(z);
	mat.m[1][0] = sin(z);
	mat.m[1][1] = cos(z);
	return (mat);
}

t_mat4x4	rot_mat_pos(t_hpt vec)
{
	t_mat4x4	mat;

	mat = id_mat();
	mat.m[0][3] = vec.x;
	mat.m[1][3] = vec.y;
	mat.m[2][3] = vec.z;
	mat.m[3][3] = 1.0;
	return (mat);
}
