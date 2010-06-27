//////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                          WDXT Software System                             //
//                                                                           //
//            Copyright (c) 1999-2007 by Netone Technology Inc.              //
//                        All Rights Reserved                                //
//                                                                           //
//  Model    :	WD_Def.h                                                     //
//                                                                           //
//  Purpose  :	���ⲿʹ�õ���д���뷨�Ĺ�������                             //
//                                                                           //
//  Designer :	srw,wd,nyf,zsq,rocky                                         //
//                                                                           //
// --------------------------------------------------------------------------//
//                                                                           //
//  $Workfile:: WD_HwDef.h                                                   //
//  $Date: 2007/08/02 02:59:54 $										 	 //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#ifndef WD_HWDEFINES
#define WD_HWDEFINES


	#define MAX_WORD_DATA 500		//���ĵ���
	#define MAX_LETTERS_COUNT 32 //������󳤶�
	#define MAX_WORD_COUNT 10//��󵥴ʸ���

	#define WD_SYMBOL		0x01//����

	#define WD_ENGLISH  	0x20//Ӣ��
	#define WD_RUSSIAN		0x21//����
	#define WD_THAI			0x22//̩��
	#define WD_ARAB			0x23//��������
	#define WD_VIET			0x24//Խ����
	#define WD_JAPANESE		0x25//����

typedef struct WD_HwData_t
{
	WD_UINT16 width;		//��д��Ŀ��
	WD_UINT16 height;		//��д��ĸ߶�
	WD_UINT16 imeType;		//��д���뷨����
	WD_UINT16 maxsize;		//��д����ʱ�����Խ��ܵ����ݸ���
	WD_UINT32 flag;			//��������,һ������´�0����
}WD_HwData;

typedef struct WD_useData_
{
	WD_UINT16* studyDataBuf;
	WD_UINT16* dataBuf;
	WD_UINT16* strokeDataBuf;
}WD_useData;


///////////////////��д���뷨��ʼ��///////////////////////
//														 /
//����: pHwData, WD_HwData�ṹ��ָ�� ������������ѧϰʹ��/
//����: �ɹ�����0,ʧ�ܷ��ظ���,Ϊ�������                /
//                                                       /
//////////////////////////////////////////////////////////
WD_INT16 WD_HwInitialize(WD_HwData* pHwData,WD_useData* usedata);



///////////�л����뷨//////////////////
WD_INT16 WD_HwSwitchIme(WD_UINT16 imeType);





///////////////////��д���뷨ʶ����/////////////////////
//														 /
//����: data,��������ʶ�������; letters,����ʶ��Ľ��  /
//      (��ѡ��ĸ�б�);									 /
//					   rev��������,���Դ�0               /
//����: �ɹ�����0,ʧ�ܷ��ظ���,Ϊ�������                /
//														 /
//////////////////////////////////////////////////////////
WD_INT16 WD_HwOnIdentify(WD_INT16* data, WD_UINT16* letters, WD_UINT32 rev);

///////////////////��д���뷨ʶ����չ����/////////////////
//														 /
//����: stroke_buffer,��������ʶ�������;				 /
//		candidate_array,����ʶ��Ľ��					 /
//					   rev��������,���Դ�0               /
//����: �ɹ�����0,ʧ�ܷ��ظ���,Ϊ�������                /
//														 /
//////////////////////////////////////////////////////////

WD_INT16 WD_HwOnIdentify_Ex(WD_UINT16* stroke_buffer,WD_UINT16* candidate_array,WD_UINT32 rev);

//////////////////��ѧϰ���ܺ���///////////////////////
//													 //
//  ����:letter Ҫѧϰ���ַ���dataBuf �������ݵĿռ� //
//  ����: �ɹ�����0,ʧ�ܷ��ظ���,Ϊ�������          //
//													 //
///////////////////////////////////////////////////////

WD_UINT8 WD_HWSetChars(WD_UINT16* letter);

//////////////////�����ֹ��ܺ���///////////////////////
//													 //
//  ����:letter �����ַ�������						 //
//  ����: �ɹ�����0,ʧ�ܷ��ظ���,Ϊ�������          //
//													 //
///////////////////////////////////////////////////////

WD_UINT8 WD_GetAssociation(WD_UINT16 letter);



////////////////�õ��ַ���ָ��ͳ���////////////////////
//													 //
//													 //
//													 //
///////////////////////////////////////////////////////
WD_UINT8 WD_GetLetterTable();









#endif
