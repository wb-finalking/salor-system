#pragma once

//����������
class camera  
{
public:
	camera();
	virtual ~camera();
    
    // �������λ��
    void update();
    
	// ��Ӧ������Ϣ
    void keyfunc(int key);
    
	// ��Ӧ�����Ϣ
    void mousefunc(int button, int state, int x, int y);
    void motion(int x, int y);

private:
    // �Ƿ��������
    bool m_leftkey;
    // �Ƿ��Ҽ�����
    bool m_rigtkey;
    
	// ��һ��x����
    int m_px;
    // ��һ��y����
    int m_py;
    
	// x���ƶ�
    int m_dx;
    // y���ƶ�
    int m_dy;
    // z����
    int m_dz;
    
	// x����ת
    int m_rx;
    // y����ת
    int m_ry;
};

