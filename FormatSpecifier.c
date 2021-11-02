#include <stdio.h>

int main(void) {


//all is default signed
int int_num = 13;
printf("1.%d\n",int_num);
printf("2.%i\n",int_num);

unsigned int u_num;
printf("3.%u\n",u_num);


unsigned short us_num;
printf("4.%d\n",us_num);
printf("5.%i\n",us_num);
printf("6.%hu\n",us_num);


signed short ss_num;
printf("7.%d\n",ss_num);
printf("8.%i\n",ss_num);
printf("9.%hi\n",ss_num);
short s_num;
printf("10.%d\n",s_num);
printf("11.%i\n",s_num);
printf("12.%hi\n",ss_num);


long l_num;
printf("13.%ld\n",l_num);
long long ll_num;
printf("14.%lld\n",ll_num);
printf("15%lli\n",ll_num);


unsigned long long ull_num;
printf("16.%llu\n",ull_num);

float float_num;
printf("17.%f\n",float_num);
printf("18.%e\n",float_num);
printf("19.%E\n",float_num);
printf("20.%g\n",float_num);
printf("21.%G\n",float_num);

double double_num;
printf("22.%lf\n",double_num);
printf("23.%e\n",double_num);
printf("24.%E\n",double_num);
printf("25.%g\n",double_num);
printf("26.%G\n",double_num);

char char_value = 'S';
printf("27.%c\n",char_value);

int* pointer;
printf("28.%p\n",pointer);//void pointer
//printf("29.%d\n",*pointer);//returns error
pointer= &int_num ;
printf("30.%p\n",&int_num);
printf("31.%p\n",pointer);
printf("32.%d\n",*pointer);


printf("33.%o\n",int_num);
printf("34.%x %X\n",int_num,int_num);
printf("35.%%\n");


char* str = "this is a string";
char stri[100] = "this is a string";
printf("36.%s\n",str);
printf("37.%s\n",stri);
return 0;


}
