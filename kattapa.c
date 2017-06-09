#include <stdio.h>
int main(int argc, char** argv)
{int counter_odd=0,counter_even=0;
	int num_of_sld;
	scanf("%d",num_of_sld);
     int num_of_weapon[num_of_sld];
     int i=0;
     for(i=0;i<num_of_sld;i++)
	 {
       scanf("%d",num_of_weapon[i]);
	 }
	 
	 for(i=0;i<num_of_sld;i++)
	 {
	 	if(num_of_weapon[i]%2==0)
		 {
          counter_even++;
		 }
		 else
		 {
			 counter_odd++;
			 
		 }
		 
	 }
	 if(counter_even>counter_odd)
	 {
	 	printf("READY FOR BATTLE");
	 }else
	 {
		 printf("NOT READY");
	 }
	return 0;
}