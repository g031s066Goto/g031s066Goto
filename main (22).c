/*2020/09/07 0312020066 �㓡���� */
/*�K�{�ۑ�C7-1*/

/*
 * �f�o�b�K: �ۑ�
 * �@�܂̐��l����͂��C�����Ɗ�C���ꂼ��̍��v�l�����߂�
 * - ���@�~�X�������܂܂�Ă���D�܂��r���h���C�G���[���e���琄�����ďC������
 * - ������ăr���h����D�v���O�������s���ł���i�K�܂ŌJ��Ԃ�
 * - ���s�ł�����C���ʂ������������m�F����
 */
#include <stdio.h>

int main(void)
{
	int i;
	int n;						/* ���͂��ꂽ���l */
	int odd = 0;					/* ��̍��v�l */
	int even = 0;					/* �����̍��v�l */


	for (i = 0; i < 5; i++)
	{
		printf("���l����́F");
		scanf("%d", &n);

		if (n % 2 == 0) {			/* �������ǂ������� */
			even = even + n;	/* �����������̂ŁC���v�leven�ɉ��Z*/
		}
		else {
			odd = odd + n;		/* ��������̂ō��v�lodd�ɉ��Z*/
		}
	}

	printf("�����̍��v�l:%d\n", even);
	printf("��̍��v�l:%d\n", odd);

	return 0;
}

/*
���l����́F1
���l����́F2
���l����́F3
���l����́F4
���l����́F5
�����̍��v�l:6
��̍��v�l:9

C:\Users\MSLap\source\repos\�K�{�ۑ�C7-1\Debug\�K�{�ۑ�C7-1.exe (�v���Z�X 8356) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/