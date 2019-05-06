#include <stdio.h>
#include <pthread.h>
#define NUM_THREAD 10

long saldo=1000;

void * printHello(void *td){
	printf("Hello World desde el hilo %ld \n",(long)td);
	saldo+=100;
}
int main(){
	pthread_t threads[NUM_THREAD];
	long t;
	for(t=0;t<NUM_THREAD;t++){
		pthread_create(&threads[t],NULL,printHello,(void *)t);
	}
	pthread_exit(NULL);
	printf("Saldo final %ld\n",saldo);
}