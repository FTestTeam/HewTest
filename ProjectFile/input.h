/*==============================================================================

�L�[�{�[�h���͏��� [input.h]
Author : Youhei Sato
Date   : 2018/09/05
--------------------------------------------------------------------------------
�L�[�{�[�h���W���[���̏���������COM�C���^�[�t�F�[�X��
DirectInput�f�o�C�X�̏����������Ă���̂ŁA�}�E�X���͂�p�b�h���͂�
�ǉ�����ꍇ�́A�؂藣���Ȃ��Ƃ����Ȃ�
���p�b�h�Ή���xinput�̗��p�𐄏�
==============================================================================*/
#ifndef INPUT_H_
#define INPUT_H_


#include <Windows.h>
// dinput.h���C���N���[�h����O�ɂ�������Ȃ��ƌx�����o��̂Œ���
#define DIRECTINPUT_VERSION (0x0800)
#include <dinput.h>


/*------------------------------------------------------------------------------
�֐��̃v���g�^�C�v�錾
------------------------------------------------------------------------------*/

// �L�[�{�[�h���̓��W���[���̏�����
//
// �߂�l�F�������o���Ȃ������ꍇfalse
//
// �����Fhinstance ... �C���X�^���X�n���h���iWinMain�̈����ȂǂŎ擾�j
//       hWnd      ... �E�B���h�E�n���h��
//
bool Keyboard_Initialize(HINSTANCE hInstance, HWND hWnd);

// �L�[�{�[�h���W���[���̏I������
void Keyboard_Finalize(void);

// �L�[�{�[�h���W���[���̍X�V
// ���L�[�{�[�h�S�̂̃L�[��Ԃ̎擾(256�L�[���擾)
//
void Keyboard_Update(void);

// �L�[�{�[�h�̃L�[��Ԃ̎擾
//
// Keyboard_Update()�Ŏ擾�����L�[�̏�Ԃ��m�F����֐��Q
//
// �߂�l�F�w��̃L�[��
//     Press   ... ������Ă���
//     Trigger ... �������u��
//     Release ... �������u��
// �ł������ꍇtrue��Ԃ�
//
// �����FnKey ... �L�[�w��iDIK_�`�Ƃ����L�[�񋓁j
//
bool Keyboard_IsPress(int nKey);
bool Keyboard_IsTrigger(int nKey);
bool Keyboard_IsRelease(int nKey);

#endif