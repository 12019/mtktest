#if defined(LCD_FT1505C_YT372604PE)

void LCD_reg_FT1505(kal_uint16 reg_index, kal_uint16 reg_data)
{
	LCD_CtrlWrite_FT1505(reg_index);
	LCD_DataWrite_FT1505(reg_data);
}
void LCD_BlockClear_FT1505(kal_uint16 startx,kal_uint16 starty,kal_uint16 endx,kal_uint16 endy,kal_uint16 data);
void LCD_Init_FT1505(kal_uint32 bkground, void **buf_addr)
{
	SET_LCD_CTRL_RESET_PIN;
	LCD_Delayms(5);
	CLEAR_LCD_CTRL_RESET_PIN;
	LCD_Delayms(50);
	SET_LCD_CTRL_RESET_PIN;

	LCD_Delayms(50);  //waiting for releasing reset

	//Power on setting
	
	LCD_reg_FT1505(0x002b, 0x0003);		
	LCD_reg_FT1505(0x0000, 0x0001); LCD_Delayms(50);        
	LCD_reg_FT1505(0x0007, 0x0000); LCD_Delayms(50);                
	LCD_reg_FT1505(0x0012, 0x0000); LCD_Delayms(50);
	
	LCD_reg_FT1505(0x0060, 0xA700);	//
	LCD_reg_FT1505(0x0008, 0x0405);	//
	LCD_reg_FT1505(0x0098, 0x0202);	
	LCD_reg_FT1505(0x0001, 0x0100);	

	/*************************** gamma setting 
************************************/
	LCD_reg_FT1505(0x0030, 0x0000);	
	LCD_reg_FT1505(0x0031, 0x0705);	
	LCD_reg_FT1505(0x0032, 0x0406);	
	
	//LCD_reg_FT1505(0x0033, 0x0000);	//
                                                                      
	//LCD_reg_FT1505(0x0034, 0x0505);	//
	LCD_reg_FT1505(0x0035, 0x0007);	
	LCD_reg_FT1505(0x0036, 0x0a07);	
	
	LCD_reg_FT1505(0x0037, 0x0203);	
	                                                              
	LCD_reg_FT1505(0x0038, 0x0302);	
	LCD_reg_FT1505(0x0039, 0x0707);		
	
        
/***************************************************************************/
        
	LCD_reg_FT1505(0x003c, 0x0501);	
	LCD_reg_FT1505(0x003d, 0x070a);
				
	//Power on			
        LCD_reg_FT1505(0x0010, 0x02c0);LCD_Delayms(50);		

	LCD_reg_FT1505(0x0011, 0x0247);	 LCD_Delayms(50);   					



	LCD_reg_FT1505(0x0012, 0x011a);	 LCD_Delayms(50);        		
	LCD_reg_FT1505(0x0013, 0x1d00);	 
	LCD_reg_FT1505(0x0029, 0x002d);	 LCD_Delayms(50); 

	
	//Set GRAM Area
        LCD_reg_FT1505(0x0001, 0x0100);
        LCD_reg_FT1505(0x0002, 0x0700);
	LCD_reg_FT1505(0x0003, 0x1030);	
	
	LCD_reg_FT1505(0x0061, 0x0001);
	        	
	 // ----------- Adjust the Gamma  Curve ----------//
	LCD_reg_FT1505(0x0050, 0x0000);	
	LCD_reg_FT1505(0x0051, 0x00EF);	
	LCD_reg_FT1505(0x0052, 0x0000);	
    	LCD_reg_FT1505(0x0053, 0x013F);	
	


	LCD_reg_FT1505(0x0080, 0x0000);	
	LCD_reg_FT1505(0x0081, 0x0000);	
	LCD_reg_FT1505(0x0082, 0x013f);	
	LCD_reg_FT1505(0x0083, 0x0000);	
	LCD_reg_FT1505(0x0084, 0x0000);	
	LCD_reg_FT1505(0x0085, 0x013f);	
	
	
	
	LCD_reg_FT1505(0x0090, 0x001a);	
	LCD_reg_FT1505(0x0092, 0x0000);	
	
	//display on
        LCD_reg_FT1505(0x0020, 0x0000);	
	LCD_reg_FT1505(0x0021, 0x0000);	
	
	
      	LCD_reg_FT1505(0x0010, 0x12f0);	 LCD_Delayms(30);
	        	        
	LCD_reg_FT1505(0x0012, 0x0117);	 LCD_Delayms(30);		
	LCD_reg_FT1505(0x0007, 0x0133);	

	LCD_CtrlWrite_FT1505(0x22);
	LCD_BlockClear_FT1505(0, 0, LCD_WIDTH, LCD_HEIGHT, 0x0000);
}

void LCD_PWRON_FT1505(kal_bool on)
{
}

void LCD_SetContrast_FT1505(kal_uint8 level)
{
}

void LCD_ON_FT1505(kal_bool on)
{
}

void LCD_BlockClear_FT1505(kal_uint16 startx,kal_uint16 starty,kal_uint16 endx,kal_uint16 endy,kal_uint16 data) 
{
	kal_uint16 LCD_x;
	kal_uint16 LCD_y;

        while (LCD_IS_RUNNING){};

        lcd_assert_fail = KAL_TRUE;

        SET_LCD_CMD_PARAMETER(0,LCD_CMD,0x0050);
        SET_LCD_CMD_PARAMETER(1,LCD_DATA,(startx&0x00FF));
        SET_LCD_CMD_PARAMETER(2,LCD_CMD,0x0051);
        SET_LCD_CMD_PARAMETER(3,LCD_DATA,(endx&0x00FF));
        SET_LCD_CMD_PARAMETER(4,LCD_CMD,0x0052);
        SET_LCD_CMD_PARAMETER(5,LCD_DATA,(starty&0x01FF));
        SET_LCD_CMD_PARAMETER(6,LCD_CMD,0x0053);
        SET_LCD_CMD_PARAMETER(7,LCD_DATA,(endy&0x01FF));
        SET_LCD_CMD_PARAMETER(8,LCD_CMD,0x0020);
        SET_LCD_CMD_PARAMETER(9,LCD_DATA,(startx&0x00FF));

        SET_LCD_CMD_PARAMETER(10,LCD_CMD,0x0021);
        SET_LCD_CMD_PARAMETER(11,LCD_DATA,(starty&0x01FF));
        SET_LCD_CMD_PARAMETER(12,LCD_CMD,0x0022);

        ENABLE_LCD_TRANSFER_COMPLETE_INT;
        ENABLE_LCD_ROI_CTRL_CMD_FIRST;
        SET_LCD_ROI_CTRL_NUMBER_OF_CMD(13);
        START_LCD_TRANSFER;

	   for(LCD_y=starty;LCD_y<=endy;LCD_y++)
		{
		for(LCD_x=startx;LCD_x<=endx;LCD_x++)
		   {
		   	LCD_DataWrite_FT1505(data); 
		   }
		} 

        lcd_assert_fail = KAL_FALSE;
}

void LCD_BlockWrite_FT1505(kal_uint16 startx,kal_uint16 starty,kal_uint16 endx,kal_uint16 endy)
{	
        while (LCD_IS_RUNNING){};

        lcd_assert_fail = KAL_TRUE;
        SET_LCD_CMD_PARAMETER(0,LCD_CMD,0x0050);
        SET_LCD_CMD_PARAMETER(1,LCD_DATA,(startx&0x00FF));
        SET_LCD_CMD_PARAMETER(2,LCD_CMD,0x0051);
        SET_LCD_CMD_PARAMETER(3,LCD_DATA,(endx&0x00FF));
        SET_LCD_CMD_PARAMETER(4,LCD_CMD,0x0052);
        SET_LCD_CMD_PARAMETER(5,LCD_DATA,(starty&0x01FF));
        SET_LCD_CMD_PARAMETER(6,LCD_CMD,0x0053);
        SET_LCD_CMD_PARAMETER(7,LCD_DATA,(endy&0x01FF));
        SET_LCD_CMD_PARAMETER(8,LCD_CMD,0x0020);
        SET_LCD_CMD_PARAMETER(9,LCD_DATA,(startx&0x00FF));

        SET_LCD_CMD_PARAMETER(10,LCD_CMD,0x0021);
        SET_LCD_CMD_PARAMETER(11,LCD_DATA,(starty&0x01FF));
        SET_LCD_CMD_PARAMETER(12,LCD_CMD,0x0022);

        ENABLE_LCD_TRANSFER_COMPLETE_INT;
        ENABLE_LCD_ROI_CTRL_CMD_FIRST;
        SET_LCD_ROI_CTRL_NUMBER_OF_CMD(13);
        START_LCD_TRANSFER;

        lcd_assert_fail = KAL_FALSE;
}


void LCD_Size_FT1505(kal_uint16 *out_LCD_width,kal_uint16 *out_LCD_height)
{
   	*out_LCD_width = LCD_WIDTH;
   	*out_LCD_height = LCD_HEIGHT;
}

void LCD_EnterSleep_FT1505(void)
{
        LCD_reg_FT1505(0x0007, 0x0001);	   // display OFF
        LCD_reg_FT1505(0x0012, 0x0118);           // SAP, BT[3:0], APE, AP, DSTB, SLP
        LCD_reg_FT1505(0x0007, 0x0000);           // DC1[2:0], DC0[2:0], VC[2:0]
        LCD_Delay(100);     
        LCD_reg_FT1505(0x0010, 0x0680);           // VREG1OUT voltage
        LCD_Delay(20);     
        LCD_reg_FT1505(0x0011, 0x0057);           
        LCD_reg_FT1505(0x0011, 0x0067);      
        LCD_Delay(20);                                  // Dis-charge capacitor power voltage
        LCD_reg_FT1505(0x0012, 0x0108);           // SAP, BT[3:0], APE, AP, DSTB, SLP
        LCD_Delay(100);   
        LCD_reg_FT1505(0x0010, 0x0600);           // SAP, BT[3:0], APE, AP, DSTB, SLP 
        LCD_Delay(20);   
        LCD_reg_FT1505(0x0010, 0x0602);           // SAP, BT[3:0], APE, AP, DSTB, SLP 
        LCD_Delay(20);   
}

void LCD_ExitSleep_FT1505(void)
{     
	LCD_reg_FT1505(0x0011, 0x0037);  //0007       // DC1[2:0], DC0[2:0], VC[2:0]modified by fred fan 2007-12-22
	LCD_Delay_ms(50);                                      // Delay 50ms  
	LCD_reg_FT1505(0x0010, 0x66B0);  //013a       // VREG1OUT voltage
	LCD_Delay_ms(50);                               // Delay 50ms
	LCD_reg_FT1505(0x0011, 0x0047);
	LCD_Delay_ms(20);
	LCD_reg_FT1505(0x0012, 0x0117);//000c         // VCM[4:0] for VCOMH
	LCD_Delay_ms(50);   
	LCD_reg_FT1505(0x0010, 0x76B0);
	LCD_Delay_ms(50);   
	LCD_reg_FT1505(0x0012, 0x1117);
	LCD_Delay_ms(50);   
	LCD_reg_FT1505(0x0007, 0x1233);
}

void LCD_Partial_On_FT1505(kal_uint16 start_page,kal_uint16 end_page)
{	
}

void LCD_Partial_Off_FT1505(void)
{
}

kal_uint8 LCD_Partial_line_FT1505(void)
{
	return 1;		/* partial display in 1 line alignment */
}

kal_uint8 LCD_GetParm_FT1505(lcd_func_type type)
{
	switch(type)
	{
		case lcd_Bais_func:
			return 1;
		case lcd_Contrast_func:
			return 1;
		case lcd_LineRate_func:
			return 4;
		case lcd_Temperature_Compensation_func:
			return 4;
		default:
			ASSERT(0);
			return 100;
	}
}


void LCD_SetBias_FT1505(kal_uint8 *bias)
{	
}

void LCD_Contrast_FT1505(kal_uint8 *contrast)
{
}

void LCD_LineRate_FT1505(kal_uint8 *linerate)
{
}

void LCD_Temp_Compensate_FT1505(kal_uint8 *compensate)
{
}

LCD_Funcs LCD_func_FT1505 = {
	LCD_Init_FT1505,
	LCD_PWRON_FT1505,
	LCD_SetContrast_FT1505,
	LCD_ON_FT1505,
	LCD_BlockWrite_FT1505, //8347 其他的都只要关注LCD_Init_FT1505
	LCD_Size_FT1505,
	LCD_EnterSleep_FT1505,
	LCD_ExitSleep_FT1505,
	LCD_Partial_On_FT1505,
	LCD_Partial_Off_FT1505,
	LCD_Partial_line_FT1505,
	/*Engineering mode*/
	LCD_GetParm_FT1505,
	LCD_SetBias_FT1505,
	LCD_Contrast_FT1505,
	LCD_LineRate_FT1505,
	LCD_Temp_Compensate_FT1505
};

#endif // end of _LCD_1505C
