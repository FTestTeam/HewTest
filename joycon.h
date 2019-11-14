/*==============================================================================

   �W���C�R�����͏��� [joycon.h]
                                                         Author : igarashi ryo
                                                         Date   : 2019/11/07
==============================================================================*/
#ifndef JOYCON_H_
#define JOYCON_H_


#include <Windows.h>
// dinput.h���C���N���[�h����O�ɂ�������Ȃ��ƌx�����o��̂Œ���
#define DIRECTINPUT_VERSION (0x0800)
#include <dinput.h>

//*********************************
//�{�^���̗�
//*********************************
#define DIJOY_L_DOWN	0
#define DIJOY_L_UP		1
#define DIJOY_L_RIGHT	2
#define DIJOY_L_LEFT	3
#define DIJOY_L_SR		4
#define DIJOY_L_SL		5
#define DIJOY_L_L		6
#define DIJOY_L_ZL		7
#define DIJOY_L_MINUS	8
#define DIJOY_L_L3		11
#define DIJOY_L_SC		13

#define DIJOY_R_Y		16
#define DIJOY_R_X		17
#define DIJOY_R_B		18
#define DIJOY_R_A		19
#define DIJOY_R_SR		20
#define DIJOY_R_SL		21
#define DIJOY_R_R		22
#define DIJOY_R_ZR		23
#define DIJOY_R_PULS	25
#define DIJOY_R_R3		26
#define DIJOY_R_HOME	28

#define DIJOY_ACCEL_X	0
#define DIJOY_ACCEL_Y	1
#define DIJOY_ACCEL_Z	2
/*------------------------------------------------------------------------------
   �֐��̃v���g�^�C�v�錾
------------------------------------------------------------------------------*/

// �W���C�R�����̓��W���[���̏�����
//
// �߂�l�F�������o���Ȃ������ꍇfalse
//
// �����Fhinstance ... �C���X�^���X�n���h���iWinMain�̈����ȂǂŎ擾�j
//       hWnd      ... �E�B���h�E�n���h��
//
bool Joycon_Initialize(HINSTANCE hInstance, HWND hWnd);

// �W���C�R�����W���[���̏I������
void Joycon_Finalize(void);

// �W���C�R�����W���[���̍X�V
// ���W���C�R���S�̂̃L�[��Ԃ̎擾
//
void Joycon_Update(void);

// �W���C�R���̃L�[��Ԃ̎擾
//
// Joycon_Update()�Ŏ擾�����L�[�̏�Ԃ��m�F����֐��Q
//
// �߂�l�F�w��̃L�[��
//     Press   ... ������Ă���
//     Trigger ... �������u��
//     Release ... �������u��
// �ł������ꍇtrue��Ԃ�
//
// �����FnKey ... �L�[�w��iDIJOY_�`�Ƃ����L�[�񋓁j
//
bool Joycon_IsPress(int nKey);
bool Joycon_IsTrigger(int nKey);
bool Joycon_IsRelease(int nKey);
float Joycon_GetAccel(int vec);

#endif