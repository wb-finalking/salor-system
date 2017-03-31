
#pragma once

// ������
#include "windows.h"
#include <gl/GL.h>
#include "vector"
#include "math.h"
using namespace std;

// λ�ýṹ
struct point
{
    float x;  
    float y;
    float z;

	//���캯��
    point(float _x = 0, float _y = 0, float _z = 0)
        : x(_x), y(_y), z(_z)
    {
    }

    // ��λ��,����Ϊ�÷���ĵ�λ����)
    void normalize()
    {
        float len = sqrtf(x * x + y * y + z * z);   //�������

		//��һ�������÷���������
        x /= len;
        y /= len;
        z /= len;
    }
};

// ����
class planet
{
public :
    planet(point _pos, point _axes_rev, float _size, float _rev_speed, float _rota_speed, bool _sun, const char texname[]);
    virtual ~planet();
    
    // ��ת����ת�Ƕȸ���
    void update(float timepass);
    // ����
    void draw();
    // ���븽�����壬����8/9�����Ƕ���̫���ĸ������壬�����ǵ���ĸ�������
    void add_secondary(planet* p);
private :
    // ���������б�
    vector<planet*> m_secondary;
    // λ��
    point m_pos;
    // ��С
    float m_size;
    
	// �Ƿ���̫��
    bool m_sun;
    
	// ��ת�ٶ�
    float m_rev_speed;
	// ��ת�ٶ�
    float m_rota_speed;
    // ��ת�Ƕ�
    float m_revolution;
    // ��ת�Ƕ�
    float m_rotation;
    // ��ת��
    point m_axes;
    // ��ת��
    point m_axes_rev;
    
	// ��̫���ľ���
    float m_distance2sun;
    
	// ����
    GLuint m_tex;

};