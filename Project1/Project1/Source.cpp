# include <stdio.h>
#include <cstdlib>
# include "WDT_DIO.h"
int main() {
	printf("starting program\n");
		while (1) {
			bool status = GetStatusPoEPort(1);//get the status of the POE port
			if (DIReadLine(1) == 0)//if digital channel 1 reads some value
				DisablePoEPort(1);//then disable the POE port
			else
				EnablePoEPort(1);//else keep the POE port enabled
			printf("POE Status of port 1 is %d\n", status);//print the status of the POE port
		}
		system("pause");
	return 0;
}