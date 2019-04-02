#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[]){

  	struct rtcdate r;
	date(&r);
	// Tu codigo para imprimir la fecha
	printf(1,"%d:%d , %d de %d de %d \n",r.hour,r.minute,r.day,r.month,r.year);
  	exit();

}