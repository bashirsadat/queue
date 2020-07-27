#include "process.h"


void print_process(process process_rec){
 printf("%d\t%.2lf\t%.2lf\n", process_rec.id, process_rec.exec_time,
 process_rec.arrival_time);
}
int compare_porcess(process p1, process p2){
 if (p1.id == p2.id ){
   
 return 0;
 
 }
 else {
  return 1;
 }
 
}

