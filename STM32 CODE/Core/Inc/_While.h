


if(servo_deger<=3000 && derece180==0){


			for ( i = 520; i < 3001; i++)
			        {
							servo_deger=i;
									delay_1ms(1);
									derece180=1;

			        }

}


		else if(servo_deger>=3000 && derece180==1){

			for ( i = 3000; i > 520; i--)
			        {
							servo_deger=i;
									delay_1ms(1);
									derece180=0;
			        }

}
