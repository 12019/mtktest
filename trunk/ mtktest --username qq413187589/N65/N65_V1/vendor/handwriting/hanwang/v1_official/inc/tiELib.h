/* �������ĺ�Ӣ�ĵ�ͷ�ļ� 
 *(c) Copyright Sunrun, Inc., 2006.	All rights reserved.
 *	 Sunrun Confidential Proprietary
 *	 Contains confidential proprietary information of Sunrun, Inc.
 *	 Reverse engineering is prohibited.
 *	 The copyright notice does not imply publication.
 * 
 *
 *	 ���� :	��Ȼ��˾���뷨��ƷAPI������˵��.
 *   
 *
 ************** VERSION DEFINATION *******************************
 

        
/******************************************************************************************
 * 
 * ������: fnBhSearch 
 *  
 * ����: 
 *    �ú������ܰ�������İ���ֵ�Ĳ�����ͨ�����뷨�������棬���ֿ�����������ȷ�ĺ���unicode�룬�����ص�����ȷֵ0.
 *     �������������Ӧ��ֵ���򷵻ص��ô���ֵ1����������һ����ȷ�Ĳ�����ֵ�� 
 *     
 *     
 * ������
 *    keyinput : �洢���밴��ֵ���������顣��ֵ��Ϊ1-9�İ���ֵ��
 *               -- exp. ͨ���������� MMI ƽ̨�ж���Ϊ " char KeyInput[20]; " ��
 *    searchresult : �洢��Ӧ�������ֵ����������ȷ���ֵ�unicode�봮�����顣
 *               -- exp. ͨ���������� MMI ƽ̨�ж���Ϊ " U16 csSearchResult[LEN_RESULT_ONESEARCH];" 
 *                    LEN_RESULT_ONESEARCH ��һ���������ص�ֵ��������󳤶ȣ���ֵĿǰΪ118.
 * ˵����
 *      Ŀǰ���Ǻ��ֱ�������ʻ�Ϊ17���ɵõ����к��֣�����keyinputһ������Ҫ����17�������Ƽ�����Ϊkeyinput[20]���ɣ�
 *      ���ⷵ�ص�����ָ���Ϊ118��һ���Ƽ�����Ϊsearchresult[118]��
 *      ����ɲο���ʵ���еĶ��塣
 
 * ���÷��أ�
 *      0 : ������ȷ��
 *      1 : ���ô���
 *  
 * ��DOS�¼򵥵���ʵ���� 
 
       
        static char csKeyInput[20];
        U16 csSearchResult[LEN_RESULT_ONESEARCH];
        
        
         fnKeyInputSimu(count_input_simu); 
        
        while ( 1 ) {
            
            ret=fnBhSearch(csKeyInput,csSearchResult);
            if ( ret == FUC_RIGHT_CALLED ) {
                printf("\n ret = %d",ret);
                printf("\n cscount_result = %d",cscount_result);
                showAlternate();  
            } else {
                printf("\n ret = %d",ret);
                printf("\n cscount_result = %d",cscount_result);
                printf("\n no charactors... backkey");
                count_input_simu--;
            } 
            count_input_simu++;   
            fnKeyInputSimu(count_input_simu); 
        }
        
        U16 fnKeyInputSimu(U16 count_input_simu) {
          char i;
          printf("\nPlease enter key..  ");
          scanf("%16d",&csKeyInput[count_input_simu]);
          printf("\n your keyinput is:");
          for ( i=0;i<strlen(csKeyInput);i++ ) {
             printf("(%d) ",csKeyInput[i]);
          }
        }
 *         
 *         
 *         
 *******************************************************************************************/
U16 fnBhSearch(char *keyinput,U16 *searchresult);


/******************************************************************************************
 * 
 * ������fnPySearch 
 *  
 * ������ 
 *    �ú������ܰ�������İ���ֵ���γɿ��ܵ�ƴ����ϣ���ȷ����ƴ����Ϻ������������������ȷ�ĺ���unicode�롣�����ص�����ȷֵ0��
 *     �������������Ӧ��ֵ���򷵻ص��ô���ֵ1����������һ����ȷ�Ĳ�����ֵ��
 *
 * ������
 *    keyinput : �洢���밴��ֵ���������顣��ֵ��Ϊ1-9�İ���ֵ��
 *    csPyzhStore :  �洢���밴��ֵ���γɵĶ�Ӧ��ƴ����ϵ����顣������96������keyinput�д洢9,6����csPyzhStore ��ֵΪ 0x77,0x6f,0x20,0x79,0x6f,0x20,0x7a,0x6f,0x20,0x0,0x0,0x0....
                                 ��ʾ��������  wo yo zo��
 *    searchresult : �洢��Ӧ�������ֵ����������ȷ���ֵ�unicode�봮�����顣
 *    count_pyzh_sel : ���ڲ�ͬ�İ�����ϻ��в�ͬ��ƴ����ϲ������ò�������ȷ��Ŀǰ�û�ѡ���ĸ�ƴ����ϡ�
                                   ��ֵ�ڵ�һ�ε���ʱ����-1��ʾ����ƴ����ϣ������ƴ����Ϻ�csPyzhStore��Ϊ��ʱ��
                                   ��ȡ0-MAX�����ƴ����������Ա�ʾ����Ҫ���ֵ�ƴ����ϡ������������У���count_pyzh_selȡ0ʱ��ʾѡ��wo�� 
 *
 * ˵����
 *      Ŀǰ���Ǻ��ֱ������󷵻�ƴ����ϳ���Ϊ30(7426��)������һ���Ƽ������csPyzhStore[40]����ƴ���Ĵ������keyinputһ������Ҫ����6���ɣ��������Ƽ�����Ϊkeyinput[20]��ʻ�ͨ�ã�
 *      ���ⷵ�ص�����ָ���ͬ�ʻ�Ϊ118��һ���Ƽ�����Ϊsearchresult[118]��ʻ�ͨ�ã�
 *      ����ɲο���ʵ���еĶ��塣                    
 *   
 * ���÷��أ�
 *      0 : ������ȷ��
 *      1 : ���ô���
 *  
 * ��DOS�¼򵥵���ʵ����
 *  
 *     #define PYSEARCH_STEP1_pyzh  -1 
 
        U16 pyzh_count = 0;
        static char csKeyInput[20];
        U16 csSearchResult[LEN_RESULT_ONESEARCH];
        U16 csEnglishSearchResult[30];
        
        
        fnKeyInputSimu(count_input_simu); 
        while ( 1 ) {
            //-- lib call of fnPySearch() --//
            ret = fnPySearch(csKeyInput,csEnglishSearchResult,csSearchResult,PYSEARCH_STEP1_pyzh);
            if ( ret == FUC_RIGHT_CALLED ) {
                printf("\n ****<< pycount_result = %d >>****",pycount_result);
                printf("\n ret1 = %d",ret);
                fnShowPyzhStore();
                printf("\nPlease select the pinyin (0--..) ..  ");
                scanf(" %d",&pyzh_count);
                ret = fnPySearch(csKeyInput,csEnglishSearchResult,csSearchResult,pyzh_count);
                printf("\n ****<< cscount_result = %d >>****",cscount_result);
                printf("\n ret2 = %d",ret);
                showAlternate(); 
            } else {  //the return ret is error
                count_input_simu--;
                //printf("\n ****<< pycount_result = %d >>****",pycount_result);
                //printf("\n ret1 = %d",ret);
                //fnShowPyzhStore();
                //printf("\n ****<< cscount_result = %d >>****",cscount_result);
                //printf("\n ret2 = %d",ret);
                //showAlternate(); 
            }
            count_input_simu++;    
            fnKeyInputSimu(count_input_simu);  
        }
 *    
 *       
 *     
 *      
 *******************************************************************************************/
U16 fnPySearch(char *keyinput,U16 *csPyzhStore,U16 *searchresult,int count_pyzh_sel);


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
 * ������ fnCharAssociation 
 *  
 *������
 *    �ú������ڸ�ѡ�еĺ����������볣���֣������û��������롣
        EXP��ѡ�С��ҡ�ʱ�����Ͼ����뵽���ǡ����������ôʡ�
 *                                                                         
 * ������
 *    selChar : ��Ҫ�����������ֵ�unicode��ֵ��
 *    searchresult : ���ɵģ����봫�뺺����ɳ��ô���ĺ��ֵ�unicode�봮��
 * 
   ˵����
 *      Ŀǰ���������ֵ���󳤶�Ϊ30��ֻҪ����30�����鶼�ɣ�����һ���Ƽ������ΪcsSearchResult[118]��ʻ�ƴ��ͨ�ã�
 *      
 *      ����ɲο���ʵ���еĶ��塣
   
 * ���÷��أ�
 *      0 : ������ȷ�����ظ�ѡ���ֵ������֡�
 *      1 : ���ô��󡣷�����õ�30�����֡�
 *  
 * ��DOS�¼򵥵���ʵ����
 *  
 *    
      U16 csSearchResult[LEN_RESULT_ONESEARCH];
 
       ret = fnCharAssociation(0x8d5d,csSearchResult); 
        if ( ret == FUC_RIGHT_CALLED ) {
            printf("\n cscount_result = %d ",cscount_result);
            showAlternate();    
            printf("\n ret of association = %d",ret);
        } else {
            printf("\n error in fuction call fnCharAssociation ");
            showAlternate();
        }   
 
 
 
 *   
 *******************************************************************************************/

U16 fnCharAssociation(U16 selChar,U16 *searchresult);





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



/*************************************************************************
  ����: Give_uncode_to_GetCharInfo 
  ����������unicode�𣬵ó������Ӧ��ƴ����ϼ��ʻ����� ��
  ������
      uncode  ��Ҫ�õ���Ϣ�ĺ��ֵ�UNICODE��ֵ��
      bh      ��UNICODE���Ӧ���ֵıʻ���ϣ�ע��bh���鳤�ȱ������18�Ա��ܴ������бʻ������Ƽ���bh[18]��
      py      ��UNICODE���Ӧ���ֵ�ƴ����ϣ�ע��py���鳤�ȱ������10�Ա��ܴ������Py��������Ƽ���py[10]��
 

      
  ���÷��أ�
 *      0 : ������ȷ��
 *      1 : ���ô���
  ��DOS�¼򵥵���ʵ����
  
     unsigned char bh[18];
     unsigned char py[10];
  
     while(1)
         {
         printf("please input unicode:");
         scanf("%x",&input_unicode);         
         ret=Give_uncode_to_GetCharInfo(input_unicode,bh,py);
         if (ret==0) 
         {   i=0;
             printf("\nuncode input is right!\n");
             printf("bihua zhuhe is:");
         while (bh[i]!=0) {
          printf("%d",bh[i]);
          i++;
         }
         printf("\npiyin zhuhe is:%s\n",py);
         }
         else
            printf("\nuncode input is wrong!\n");  
         }
 
   ������0x7684(��)����bh�����ֵΪ32511354��py�����ֵλde��
************************************************************************/
int Give_uncode_to_GetCharInfo(unsigned short uncode,unsigned char *bh,unsigned char *py);

/******************************************************************************************/
/* 
 * cscount_result :ȫ�ֱ������洢���ص���ȷֵ�ĸ���������ƴ���ʻ��е���ȷ���غ��������϶�С��118�����ֵ�� 
 *                  
 * pycount_result : ȫ�ֱ������洢���ص���ȷ��ƴ����ϸ�����һ����  0 ��MAX�����ƴ���������,��Ӣ������ȷӢ�ĵ�������
 */
extern U16 cscount_result ;
extern U16 pycount_result ;

