#include <stdio.h>
#include <unistd.h>

int main(void) {
    unsigned char n[20];
    getlogin_r(n,20);
    for(int i=0; i<20 && n[i]!='\0'; i++)
    {
	if(n[i]>=97 && n[i]<=122) {
	    n[i]=n[i]+5;
	    if(n[i]>122) n[i]-=26;
	}
    }
    puts(n);
}
