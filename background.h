#pragma once
#include "windows.h"
#include <gl/GL.h>

// ���汳��
class background  
{
public :
    void Init();
    void draw();

	background();
	virtual ~background();
private :
    // ����
    GLuint m_uText;
};

