/// Portable interface
/// for glew.h header
#ifndef PORT_GLEW_H_
#define PORT_GLEW_H_

#if 0 // With glew -------------------------------------------------------------

    // For those who use glew (when using opengl inferior to 3.1)
#if defined(_WIN32) && defined(_MSC_VER)
#ifndef NOMINMAX
#define NOMINMAX // Prevents definition of macro min max in windows.h
#endif

#include <windows.h>

// Undef window.h polluting macros
#ifdef DIFFERENCE
#undef DIFFERENCE
#endif

#include "GL/glew.h"
#else
#include "GL/glew.h"
#endif

#else // Without glew ----------------------------------------------------------

#ifdef __APPLE__
#include <OpenGL/gl3.h>
#define __gl_h_
#else
#define GL_GLEXT_PROTOTYPES 1
#include <GL/gl.h>
//#include <GL/glext.h>
#include <GL/glu.h>
#endif

#endif


#endif // PORT_GLEW_H_
