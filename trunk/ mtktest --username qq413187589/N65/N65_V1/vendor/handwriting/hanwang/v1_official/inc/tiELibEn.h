/* (c) Copyright Sunrun, Inc., 2006.	All rights reserved.
 *	 Sunrun Confidential Proprietary
 *	 Contains confidential proprietary information of Sunrun, Inc.
 *	 Reverse engineering is prohibited.
 *	 The copyright notice does not imply publication.
 * 
 *
 *	 ���� :	��Ȼ��˾��Ӣ�����뷨��ƷAPI������˵��.
 *   
 *
 ************** VERSION DEFINATION *******************************
      
/******************************************************************************************
 * 
 * ������ fnEnglishSearch 
 *  
 *������
 *    �ú������ܰ�������İ���ֵ�������������������ȷ��Ӣ�ĵ��ʵ�unicode�롣
 *     
 *������
 *    keyinput : �洢���밴��ֵ���������顣
 *    csEnglishSearchResult ���洢��Ӧ�������ֵ����������ȷӢ�ĵ��ʵ�unicode�봮�����顣
 *                                                ÿ��Ӣ�ĵ���֮���Կո� 0x20�ֿ���
        EXP��    ���밴��2.2.6.4�ڵ���fnPyzhSearch����֮����������Ӧ�ĵ�������С�yahoo����wagon��
                       ��ʱcsEnglishSearchResult[0]=0x77
                           csEnglishSearchResult[1]=0x61
                           csEnglishSearchResult[2]=0x67
                           csEnglishSearchResult[3]=0x6f
                           csEnglishSearchResult[4]=0x6e
                           csEnglishSearchResult[5]=0x20
                           csEnglishSearchResult[6]=0x79
                           csEnglishSearchResult[7]=0x61
                           csEnglishSearchResult[8]=0x68
                           csEnglishSearchResult[9]=0x6f
                           csEnglishSearchResult[10]=0x6f
                           csEnglishSearchResult[11]=0x20
                           default=0��
                       
 *
 ˵����
 *      Ŀǰ����Ӣ�ı���������ϳ���Ϊ17������һ���Ƽ������Ϊkeyinput[20]��ʻ�ƴ��ͨ�ã�
 *      ���ⷵ�ص������ĸ����Ϊ100��һ���Ƽ�����ΪcsEnglishSearchResult[100]��
 *      ����ɲο���ʵ���еĶ��塣
 
    
 * ���÷��أ�
 *      0 : ������ȷ��
 *      1 : ���ô���
 *  
 * ��DOS�¼򵥵���ʵ����
 
         U16 csEnglishSearchResult[LEN_ENGLISHRESULT];
         static char csKeyInput[20];
         
         
         fnKeyInputSimu(count_input_simu);      
       
        while ( 1 ) {
            //-- lib call of fnEnglishSearch() --//
            ret = fnEnglishSearch(csKeyInput,csEnglishSearchResult);
            printf("\n------ret = %d ------------------English Result ---> ",ret);
            if ( ret == FUC_RIGHT_CALLED ) {
                printf("\n ****<< pycount_result = %d >>****\n",pycount_result);
                for ( i=0;i<LEN_ENGLISHRESULT;i++ ) {
                    printf("%c",csEnglishSearchResult[i]);
                }
                printf("\n ----------------------------------------------- ");
                fnEnCapSel(EN_CAP_FIRSTCAP,csEnglishSearchResult);
                printf("\n*********************************\n");
                for ( i=0;i<LEN_ENGLISHRESULT;i++ ) {
                    printf("%c",csEnglishSearchResult[i]);
                } 
            } else {
                printf("\n ****<< pycount_result = %d >>****\n",pycount_result);
                for ( i=0;i<LEN_ENGLISHRESULT;i++ ) {
                    printf("%c",csEnglishSearchResult[i]);
                }
                printf("\n ----------------------------------------------- ");
                count_input_simu--;
            }
            count_input_simu++;    
            fnKeyInputSimu(count_input_simu);  
        }
 
 
 *    
 *******************************************************************************************/
U16 fnEnglishSearch(char *keyinput,U16 *csEnglishSearchResult);
 

/******************************************************************************************
 * 
 * ����: fnEnCapSel 
 *  
 * ������
 *    �ú�������Ӣ������Ĵ�Сд�л����ܡ����ṩȫСд�����ִ�д��ȫ����д�� 
 *    
 *     
 * ������
 *    msel                  : ģʽѡ��
 *                            0:  ȫСд��Ĭ�ϡ�
 *                            1:  ���ִ�д��
 *                            2:  ȫ��д��
 *    csEnglishSearchResult : �洢��Ӧ�������ֵ����������ȷӢ�ĵ��ʵ�unicode�봮�����顣
 *                                                ÿ��Ӣ�ĵ���֮���Կո� 0x20�ֿ���
 *   
 * ���÷��أ�
 *      0 : ������ȷ��
 *      1 : ���ô���
 *  
 * ��DOS�¼򵥵���ʵ����
 
      �ɼ�Ӣ�ĵ��òο����л������ִ�д�����ӡ�
   
 
 *    
 *******************************************************************************************/
int fnEnCapSel(int msel,U16 *csEnglishSearchResult);

/******************************************************************************************/
/* 
 * cscount_result :ȫ�ֱ������洢���ص���ȷֵ�ĸ���������ƴ���ʻ��е���ȷ���غ�������Ӣ������ȷӢ�ĵ��������϶�С��118�����ֵ�� 
 *                  
 * pycount_result : ȫ�ֱ������洢���ص���ȷ��ƴ����ϸ�����һ����  0 ��MAX�����ƴ���������
 */
extern U16 Encscount_result ;
extern U16 Encount_result ;

#ifndef __MMI_LANG_SM_CHINESE__ /* ���û�з������뷨,��������Ŀպ���*/
U16 fnBhSearch(char *keyinput,U16 *searchresult)
{
	return 0;
}
U16 fnPySearch(char *keyinput,U16 *csPyzhStore,U16 *searchresult,int count_pyzh_sel)
{
	return 0;
}
U16 fnCharAssociation(U16 selChar,U16 *searchresult)
{
	return 0;
}
int Give_uncode_to_GetCharInfo(unsigned short uncode,unsigned char *bh,unsigned char *py)
{
	return 0;
}
U16 cscount_result = 0 ;
/*UNI@bw_20070724 15:36:06  û�м���İ汾��,���������յı���  */
U16 pycount_result = 0;

#endif
#ifndef __MMI_LANG_TR_CHINESE__ /* ���û�з������뷨,��������Ŀպ���*/
unsigned short T_fnCharAssociation(unsigned short selChar,unsigned short *searchresult)
{
	return 0;
}
int T_ZySearch( char *input,unsigned short *ZyzhStore,unsigned short *searchresult,int zyzh_sel)
{
	return 0;
}
int T_Give_uncode_to_GetCharInfo(unsigned short T_unicode,unsigned short *ZY_zh_unicode)
{
	return 0;
}
U16 zy_zh_count_result;
U16 zy_cs_count_result; 
#endif
