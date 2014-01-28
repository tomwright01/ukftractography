#ifndef __DefaultGradients_h
#define __DefaultGradients_h
#include "CompressedSensing.h"

void
SetDefaultGradients(MatrixType &mat)
{
  static double DefaultGradients[][3] =
    {
      { 0, 0, 1 },
      { -0.221077265884, 0.16062203564, 0.961938357784 },
      { 0.273266528913, 0, 0.961938357784 },
      { -0.221077265884, -0.16062203564, 0.961938357784 },
      { 0.0844440014279, -0.259891913008, 0.961938357784 },
      { 0.0844440014279, 0.259891913008, 0.961938357784 },
      { -0.4472135955, 5.83678785436e-17, 0.894427191 },
      { -0.138196601125, 0.425325404176, 0.894427191 },
      { 0.361803398875, -0.26286555606, 0.894427191 },
      { 0.361803398875, 0.26286555606, 0.894427191 },
      { -0.138196601125, -0.425325404176, 0.894427191 },
      { -0.425325404176, -0.309016994375, 0.850650808352 },
      { -0.425325404176, 0.309016994375, 0.850650808352 },
      { 0.162459848116, -0.5, 0.850650808352 },
      { 0.162459848116, 0.5, 0.850650808352 },
      { 0.525731112119, 0, 0.850650808352 },
      { -0.67082039325, 0.162459848116, 0.72360679775 },
      { -0.361803398875, -0.587785252292, 0.72360679775 },
      { -0.361803398875, 0.587785252292, 0.72360679775 },
      { -0.0527864045, -0.688190960236, 0.72360679775 },
      { -0.0527864045, 0.688190960236, 0.72360679775 },
      { 0.4472135955, -0.525731112119, 0.72360679775 },
      { 0.4472135955, 0.525731112119, 0.72360679775 },
      { 0.638196601125, -0.26286555606, 0.72360679775 },
      { -0.67082039325, -0.162459848116, 0.72360679775 },
      { 0.638196601125, 0.26286555606, 0.72360679775 },
      { -0.59719637575, -0.433888564553, 0.674608925484 },
      { -0.59719637575, 0.433888564553, 0.674608925484 },
      { 0.228108717578, -0.702046444776, 0.674608925484 },
      { 0.228108717578, 0.702046444776, 0.674608925484 },
      { 0.738175316343, 0, 0.674608925484 },
      { 0.688190960236, -0.5, 0.525731112119 },
      { -0.850650808352, 1.30514544126e-16, 0.525731112119 },
      { -0.26286555606, -0.809016994375, 0.525731112119 },
      { -0.26286555606, 0.809016994375, 0.525731112119 },
      { 0.688190960236, 0.5, 0.525731112119 },
      { -0.818273641634, -0.273266528913, 0.505720922628 },
      { -0.818273641634, 0.273266528913, 0.505720922628 },
      { -0.512752374322, -0.69378047756, 0.505720922628 },
      { -0.512752374322, 0.69378047756, 0.505720922628 },
      { 0.00703145169386, -0.862668480416, 0.505720922628 },
      { 0.00703145169386, 0.862668480416, 0.505720922628 },
      { 0.501375246491, -0.702046444776, 0.505720922628 },
      { 0.501375246491, 0.702046444776, 0.505720922628 },
      { 0.822619317771, -0.259891913008, 0.505720922628 },
      { 0.822619317771, 0.259891913008, 0.505720922628 },
      { 0.894427191, 0, 0.4472135955 },
      { 0.27639320225, 0.850650808352, 0.4472135955 },
      { -0.72360679775, 0.525731112119, 0.4472135955 },
      { -0.72360679775, -0.525731112119, 0.4472135955 },
      { 0.27639320225, -0.850650808352, 0.4472135955 },
      { -0.4472135955, 0.850650808352, 0.27639320225 },
      { 0.67082039325, -0.688190960236, 0.27639320225 },
      { 0.861803398875, -0.425325404176, 0.27639320225 },
      { -0.9472135955, -0.162459848116, 0.27639320225 },
      { -0.9472135955, 0.162459848116, 0.27639320225 },
      { -0.4472135955, -0.850650808352, 0.27639320225 },
      { -0.138196601125, -0.951056516295, 0.27639320225 },
      { -0.138196601125, 0.951056516295, 0.27639320225 },
      { 0.67082039325, 0.688190960236, 0.27639320225 },
      { 0.861803398875, 0.425325404176, 0.27639320225 },
      { 0.14366471615, -0.961938357784, 0.232454393715 },
      { -0.870462904662, -0.433888564553, 0.232454393715 },
      { -0.870462904662, 0.433888564553, 0.232454393715 },
      { -0.681640377177, -0.69378047756, 0.232454393715 },
      { -0.681640377177, 0.69378047756, 0.232454393715 },
      { 0.14366471615, 0.961938357784, 0.232454393715 },
      { 0.449185983462, 0.862668480416, 0.232454393715 },
      { 0.959252582227, -0.16062203564, 0.232454393715 },
      { 0.959252582227, 0.16062203564, 0.232454393715 },
      { 0.449185983462, -0.862668480416, 0.232454393715 },
      { 6.5257272063e-17, 1, 0 },
      { -0.309016994375, 0.951056516295, 0 },
      { 0.309016994375, 0.951056516295, 0 },
      { -0.587785252292, 0.809016994375, 0 },
      { 0.587785252292, 0.809016994375, 0 },
      { -0.809016994375, 0.587785252292, 0 },
      { 0.809016994375, 0.587785252292, 0 },
      { -0.951056516295, 0.309016994375, 0 },
      { 0.951056516295, 0.309016994375, 0 },
      { -1, 1.45919696359e-16, 0 },
    };
  const unsigned int numPoints = sizeof(DefaultGradients)/(3*sizeof(double));
  mat.conservativeResize(numPoints, 3);
  for(unsigned i = 0; i < numPoints; ++i)
    {
    for(unsigned j = 0; j < 3; ++j)
      {
      mat(i,j) = DefaultGradients[i][j];
      }
    }
}
#endif // __DefaultGradients_h
