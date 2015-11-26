/***********************************************************************
    created:    Wed May 1 2013
    author:     Paul D Turner <paul@cegui.org.uk>
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2013 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
//////////////////////////////////////////////////////////////////////////
/*************************************************************************

This file is automatically generated by CMake and should be changed by
setting CMake options and regenerating, rather than editing directly.

*************************************************************************/
//////////////////////////////////////////////////////////////////////////
#ifndef _CEGUIModuleConfig_h_
#define _CEGUIModuleConfig_h_


//////////////////////////////////////////////////////////////////////////
// The following define what renderer modules /should/ be available
// We say should because while they were built, perhaps some packager did
// not actually include them in the final distribution (or some other
// event that we do not have control over)
//////////////////////////////////////////////////////////////////////////
#define CEGUI_BUILD_RENDERER_OPENGL
/* #undef CEGUI_BUILD_RENDERER_OPENGL3 */
/* #undef CEGUI_BUILD_RENDERER_OGRE */
/* #undef CEGUI_BUILD_RENDERER_IRRLICHT */
/* #undef CEGUI_BUILD_RENDERER_DIRECTFB */
#define CEGUI_BUILD_RENDERER_DIRECT3D9
#define CEGUI_BUILD_RENDERER_DIRECT3D10
/* #undef CEGUI_BUILD_RENDERER_DIRECT3D11 */
/* #undef CEGUI_BUILD_RENDERER_NULL */
/* #undef CEGUI_BUILD_RENDERER_OPENGLES */

//////////////////////////////////////////////////////////////////////////
// The following define what image codec modules /should/ be available
// We say should because while they were built, perhaps some packager did
// not actually include them in the final distribution (or some other
// event that we do not have control over)
//////////////////////////////////////////////////////////////////////////
/* #undef CEGUI_BUILD_IMAGECODEC_SILLY */
/* #undef CEGUI_BUILD_IMAGECODEC_DEVIL */
#define CEGUI_BUILD_IMAGECODEC_FREEIMAGE
/* #undef CEGUI_BUILD_IMAGECODEC_CORONA */
/* #undef CEGUI_BUILD_IMAGECODEC_STB */
/* #undef CEGUI_BUILD_IMAGECODEC_TGA */
/* #undef CEGUI_BUILD_IMAGECODEC_PVR */

//////////////////////////////////////////////////////////////////////////
// The following define what xml parser modules /should/ be available
// We say should because while they were built, perhaps some packager did
// not actually include them in the final distribution (or some other
// event that we do not have control over)
//////////////////////////////////////////////////////////////////////////
/* #undef CEGUI_BUILD_XMLPARSER_EXPAT */
/* #undef CEGUI_BUILD_XMLPARSER_XERCES */
#define CEGUI_BUILD_XMLPARSER_LIBXML2
/* #undef CEGUI_BUILD_XMLPARSER_RAPIDXML */
/* #undef CEGUI_BUILD_XMLPARSER_TINYXML */

//////////////////////////////////////////////////////////////////////////
// The following define what scripting modules /should/ be available
// We say should because while they were built, perhaps some packager did
// not actually include them in the final distribution (or some other
// event that we do not have control over)
//////////////////////////////////////////////////////////////////////////
/* #undef CEGUI_BUILD_LUA_MODULE */
/* #undef CEGUI_BUILD_PYTHON_MODULES */

#endif

