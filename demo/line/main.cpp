
#include "graphics.h"

int main()
{
	initgraph(800, 600);
	setcaption("Demo Point.");

	setpointsize(100.0f);
	setpointcolor(0xff00ff00); //���õ����ɫΪ��ɫ
	setclearcolor (0xff770000); //������ɫ����Ϊ 0xAARRGGBB

	//XEGE_FOREVER_BEGIN �� XEGE_FOREVER_END ֮��Ĵ��뽫���Զ�ѭ��ִ��
	//����60.0 ��ʾѭ����֡��, �������Խӽ���֡���ȶ�ѭ��ִ�д˼����.
	XEGE_FOREVER_BEGIN_WITH_FPS(60.0);

	cleardevice();
	putpixel(100, 100);

	XEGE_FOREVER_END();

	closegraph();
	return 0;
}