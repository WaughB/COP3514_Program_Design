/*
 * Brett Waugh
 * 26 January 2017
 * Program will calculate the voltage
 * for an experiment based on time.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{

/* Declarations */

float volts, time;

printf("time (sec)\tvoltage\n");

/* Calculations */

for (time =0; time <1; )
	{
	volts = 0.5 * sin(2*time);
	printf("%.2f\t\t%.2f\n", time, volts);
	time = time + 0.5;
	}
for (time =1; time <= 10; )
	{
	volts = sin(time);
	printf("%.2f\t\t%.2f\n", time, volts);
	time = time + 0.5;
	}
for (time =10; time < 12.5; )
	{
	volts = sin(10);
	printf("%.2f\t\t%.2f\n", time, volts);
	time = time + 0.5;
	}
return 0;
}

