#include "queue.h"

process process_arrived(int time);
int main(){ 

int SIMULATION_TIME = 665;
int wait_time[];
wait_time[0]=0;
comp_time[0]=0;

for(int time = 0; time < SIMULATION_TIME; time++){
	
	// call process_arrived() to check if a process arrived
	// if a process arrived, enqueue it in the queue
	process p = process_arrived(time);
	if (p!=NULL){
	enqueue(p);	

	if (p.arrival_time= >0 && p.execution_time=0)
	}

  

// if there is a current process running and the current
// execution time is not elapsed, then decrement
// the current execution time
// if there is a current process running and its execution
// time is elapsed, then print the process information,
// the completion time (time), and the waiting time
// (time – execution time – arrival time)
// reset current process id to 0 (no process running)
// if there is no current process running and
// the queue is not empty, then dequeue a process and set
// the current running process and the current execution
// time to the dequeued process and execution time
} 




}


process process_arrived(int time){
process p;
p.id = 0;p.arrival_time=0; p.execution_time=0;
switch(time){
case 15:p.id = 1; p.arrival_time = 15; p.execution_time = 100;
break;
case 25:p.id = 2; p.arrival_time = 25; p.execution_time = 50;
break;
case 50:p.id = 3; p.arrival_time = 50; p.execution_time = 180;
break;
case 75:p.id = 4; p.arrival_time = 75; p.execution_time = 10;
break;
case 100:p.id = 5; p.arrival_time = 100; p.execution_time = 75;
break;
case 125:p.id = 6; p.arrival_time = 125; p.execution_time = 35;
break;
case 130:p.id = 7; p.arrival_time = 130; p.execution_time = 200;
break;
}
return p;
}