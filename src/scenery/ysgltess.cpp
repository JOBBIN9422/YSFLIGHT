#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

#include <ysgl.h>

GLUtriangulatorObj *YsGlGetTessObj(void)
{
	static GLUtriangulatorObj *GlTessObj=NULL;
	if(GlTessObj==NULL)
	{
		GlTessObj=gluNewTess();
	}
	return GlTessObj;
}


