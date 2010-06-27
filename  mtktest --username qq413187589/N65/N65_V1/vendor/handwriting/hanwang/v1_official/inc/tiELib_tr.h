/* (c) Copyright Sunrun, Inc., 2006.	All rights reserved.
 *	 Sunrun Confidential Proprietary
 *	 Contains confidential proprietary information of Sunrun, Inc.
 *	 Reverse engineering is prohibited.
 *	 The copyright notice does not imply publication.
 * 
 *
 *	 ���� :	��Ȼ��˾���뷨�������뷨��ƷAPI������˵��.
 *     
 *
    ע�⣺�ò�ƷΪ���׼��̨��BIG5�ֿ⼯
 
 
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
 *      Ŀǰ����Ӣ�ı���������ϳ���Ϊ17������һ���Ƽ������Ϊkeyinput[20]��
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
 * ������ T_fnCharAssociation 
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
 *      Ŀǰ���������ֵ���󳤶�Ϊ30��ֻҪ����30�����鶼�ɣ�
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

unsigned short T_fnCharAssociation(unsigned short selChar,unsigned short *searchresult);





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



/********************************************************************************
*  ˵��������ע�����뷢����������
*
*   �������1��input����ֵ��ע�������������ΧΪ1-9���ַ�
*   �������2��zyzh_sel��ע�����ѡ��-1ʱ����ע����ϣ��������ѡȡע�����
*   �������3��ZyzhStore��ע�����(����ע����ϵ�unicode����ϼ��Կո�ֿ�)
*   �������4��searchresult�����صĲ��ҽ����unicode��,��󷵻�280����
*   ���ܼ�����˵���ɲο�����ƴ�����뺯��
*   ע�⣺
*       input ��ֵʱҪע��Ϊ�ַ��͡��� input='2'��
*    RETURN VALUE: 
*      0 : work correctly.
*      1 : work incorrectly.
*    ��������ο���
*   
*       char a[10];
*       char a_tmp[10];
*       unsigned short b[20];
*       unsigned short c[280];
*       int d; 
*       int count_input_simu=0;
*       int ret=0; 
*   �������òο��� 
*
*     while(1)
*         {
*           
*           KeyInput_zy(count_input_simu);
*           
*            while(T_ZySearch(a,b,c,-1)==1)
*              {printf("\nyou input error key!\n");
*               printf("\nThe last right input zyzh is:");
*               for ( i=0;i<strlen(a_tmp);i++ ) 
*                  printf("(%c) ",a_tmp[i]);
*               printf("\n");
*               for(ret=0;ret<(sizeof(b)>>1);ret++)
*                 printf("(%d)0x%x ",ret,b[ret]);
*               printf("\nThe last right zyresult is:");
*               for(ret=0;ret<sizeof(c)>>1;ret++)
*                 printf("(%d)0x%x ",ret,c[ret]);
*               KeyInput_zy(count_input_simu);
*               //printf("\nplease input key:\n");
*               //a[count_input_simu]=getche();
*               }
*           memcpy(a_tmp,a,10);
*           printf("\nThe right zyzh is:");
*           for(ret=0;ret<(sizeof(b)>>1);ret++)
*              printf("(%d)0x%x ",ret,b[ret]);
*           printf("\nplease input sel(0--):\n");
*           printf("you input sel is:");
*           scanf("%d",&d);                       
*           if (T_ZySearch(a,b,c,d)==1)
*              printf("can not find word!\n");
*           else
*              {printf("The right zyresult is:");
*               for(ret=0;ret<(sizeof(c)>>1);ret++)
*                  printf("(%d)0x%x ",ret,c[ret]);
*              }
*           count_input_simu++;
*          }  
*
*
*     ********************
*     ȡ��ע���ļ�������
*     ********************
*     U16 KeyInput_zy(U16 count_input_simu) 
*      {
*        int i;
*
*        printf("\nPlease enter key..  ");
*    
*       //a[count_input_simu]=getche();
*       scanf(" %c",&a[count_input_simu]);
*      
*     
*       printf("\n your keyinput is:");
*       for ( i=0;i<strlen(a);i++ ) 
*          printf("(%c)",a[i]);
*    
*    
*       printf("\n");
*    
*     }
*
*********************************************************************************/
int T_ZySearch( char *input,unsigned short *ZyzhStore,unsigned short *searchresult,int zyzh_sel);

/**************************************************************
 ˵�������뷱����unicode��õ���ע�����unicode��

 ������� ��T_unicode
 ������� ��ZY_zh_unicode

 ���òο���
     unsigned short ZY_zh_unicode[4];
     unsigned short input_unicode;

     while(1)
           {
             printf("\nplease input unicode:");
             scanf("%x",&input_unicode);         
             ret=T_Give_uncode_to_GetCharInfo(input_unicode,ZY_zh_unicode);
            if (ret==0) 
            {   i=0;
               printf("unicode input is right!\n");
               printf("zuyin zhuhe is:");
              while (ZY_zh_unicode[i]!=0) {
                printf("0x%x,",ZY_zh_unicode[i]);
                i++;
              }
             
            }
           else
             printf("\nuncode input is wrong!\n");  
           }
 
***************************************************************/
int T_Give_uncode_to_GetCharInfo(unsigned short T_unicode,unsigned short *ZY_zh_unicode);





/******************************************************************************************/

/* 
 * cscount_result :ȫ�ֱ������洢���ص���ȷֵ�ĸ����� 
 *                  
 * pycount_result : ȫ�ֱ�����Ӣ������ȷӢ�ĵ�����
 *
 *
 * zy_zh_count_result �������ҵ���ע�������
 * zy_cs_count_result�� �����ҵ��Ķ�Ӧ׼ȷע�������������ֵĸ���,�϶�С��280�����ֵ
 */
extern U16 cscount_result ;
extern U16 pycount_result ;
extern U16 zy_zh_count_result;
extern U16 zy_cs_count_result; 
