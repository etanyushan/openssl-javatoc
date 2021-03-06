#ifndef PROJECT1_H_
#define PROJECT1_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<unistd.h>


typedef  struct PACKED
{
	char name[20];
	unsigned int user;
	unsigned int nice;
	unsigned int system;
	unsigned int idle;
	unsigned int iowait;
	unsigned int irq;
	unsigned int softirq;
}CPU_OCCUPY;

typedef struct PACKED1
{
	char name[20];
	unsigned long total;
	char name2[20];
	unsigned long free;
}MEM_OCCUPY;

typedef struct sent_info
{
	int   cpu;
	float memory;
	double put;
    double  get;

}info_ma;


/*cpu*/
void get_cpuoccupy (CPU_OCCUPY *cpust);

int cal_cpuoccupy (CPU_OCCUPY *o, CPU_OCCUPY *n);

//eth0
long *my_ipconfig(char *ath0);  

//memory
unsigned long my_split(char* s1,char** s2);

float get_memoccupy (MEM_OCCUPY *mem);

unsigned long my_split(char* s1,char** s2);

#endif





