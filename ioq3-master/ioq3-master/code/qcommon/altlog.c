#include "altlog.h"
#include <stdarg.h>
#include <time.h>

logger my_log;

FILE *fp = NULL;

// Put this at the beginning of the game - in the sys_main.c file at line 273.
void Profiler()
{
	printf("Would you like to start logging?\n");
	printf("0 = Logging Off.\n");
	printf("1 = Logging to File.\n");
	printf("2 = Logging to Console.\n");
	printf("3 = Logging to Both.\n");
	int loggingType;


	loggingType = scanf("%d", loggingType);

	my_log = loggingType;

	printf("%d", my_log);


}


void altlog(const char *log, ...)
{
	if (my_log != 0)
	{
		va_list logList;
		va_start(logList, log);

		if (my_log = 1 || 3)
		{
			for (int i = 0; i < log; i++)
			{
				vfprintf(fp, log[i], logList);
				fprintf(fp, "\n");
			}
		}
		if (my_log = 2 || 3)
		{
			for (int j = 0; j < log[j]; j++)
			{
				vprintf(fp, log[j], logList);
				printf(fp, "\n");
			}
		}
		
		va_end(log);
	}
}

void fileOpen()
{
	//FILE *fp = NULL;

	fp = fopen("altlog.txt", "a");

	return fp;
}

void fileClose()
{
	fclose(fp);
}

//void FPS() {
//	while (1)
//	{
//		clock_t t;
//		t = clock();
//
//		IN_Frame();
//		Com_Frame();
//
//		t = clock() - t;
//		double timePerFrame = ((double)t) / CLOCKS_PER_SEC;
//		//printf("Time for frame: %f seconds\n", timePerFrame);
//		
//		double FPS = ((1 / timePerFrame) * 60)/100;
//		printf("Frames Per Second: %f\n", FPS);
//
//	}
//}