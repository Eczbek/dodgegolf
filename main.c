#include<termios.h><fcntl.h>
d[16],i;main(c,f,g,j){struct termios a;srand(time(fcntl(tcgetattr(0,&a),4,fcntl(0,3)|2048)));a.c_lflag&=~10;tcsetattr(0,0,&a);for(c=16;puts("\ec"),!d[i]|d[i]/3;usleep(99999),i=(i+!(j=getchar()-97)-(j==3)+c)%c)for(f=c;f--;puts(""))for(g=c;g--;)printf("\e[%im  ",f?f/3|g-i?d[g]-f?44:41:42:43,d[g]+=!d[g]*(rand()%c+c)-!f);}
