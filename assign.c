#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* t1(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=0;times<100;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t2(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=100;times<200;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t3(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=200;times<300;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t4(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=300;times<400;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t5(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=400;times<500;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t6(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=500;times<600;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t7(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=600;times<700;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t8(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=700;times<800;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t9(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=800;times<900;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}

void* t0(void* data)
{
    int* Array = (int*) data;
    int times;
    int halfsum=0;

	for(times=900;times<1000;times++)
		{
			halfsum = halfsum + Array[times];
		}

    return (void*)halfsum;
}


 
int main()
{

    int dataarray[1000];
    int k; 

    for(k=0;k<1000;k++)
	{
		dataarray[k]=k;
	}

    pthread_t thread1;
    pthread_t thread2;
    pthread_t thread3;
    pthread_t thread4;
    pthread_t thread5;
    pthread_t thread6;
    pthread_t thread7;
    pthread_t thread8;
    pthread_t thread9;
    pthread_t thread0;
    int*  halfsums[10];

    
    		pthread_create(&thread1, NULL, t1, (void*) dataarray );
		pthread_create(&thread2, NULL, t2, (void*) dataarray );
		pthread_create(&thread3, NULL, t3, (void*) dataarray );
		pthread_create(&thread4, NULL, t4, (void*) dataarray );
		pthread_create(&thread5, NULL, t5, (void*) dataarray );
		pthread_create(&thread6, NULL, t6, (void*) dataarray );
		pthread_create(&thread7, NULL, t7, (void*) dataarray );
		pthread_create(&thread8, NULL, t8, (void*) dataarray );
		pthread_create(&thread9, NULL, t9, (void*) dataarray );
		pthread_create(&thread0, NULL, t0, (void*) dataarray );
  	

	    pthread_join(thread1,(void*)&halfsums[1]);
	    pthread_join(thread2,(void*)&halfsums[2]);
	    pthread_join(thread3,(void*)&halfsums[3]);
	    pthread_join(thread4,(void*)&halfsums[4]);
	    pthread_join(thread5,(void*)&halfsums[5]);
	    pthread_join(thread6,(void*)&halfsums[6]);
	    pthread_join(thread7,(void*)&halfsums[7]);
	    pthread_join(thread8,(void*)&halfsums[8]);
	    pthread_join(thread9,(void*)&halfsums[9]);
	    pthread_join(thread0,(void*)&halfsums[0]);

    int finalsum = 0;

    for(k=0;k<10;k++)
	{
		finalsum = finalsum + (int) halfsums[k];
	}
    
    printf("final sum %d",finalsum);

    exit(0);
}
