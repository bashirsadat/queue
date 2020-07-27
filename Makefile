scheduler: scheduler.c libLL.so
	gcc -L./lib -o scheduler ./lib/scheduler.o -lLL
	mv scheduler bin/.
scheduler.o: src/scheduler.c include/queue.h
	gcc -c -I./include src/scheduler.c -o scheduler.o
	mv scheduler.o lib/.
libLL.so: queue.c process.o
	gcc -shared lib/queue.o lib/process.o -o libLL.so
	mv libLL.so lib/.
	cp lib/libLL.so bin/libLL.so
queue.o: src/queue.c include/queue.h include/process.h
	gcc -c -fpic -I./include src/queue.c -oqueue.o
	mv queue.o lib/.
process.o: src/process.c include/process.h
	gcc -c -fpic -I./include src/process.c -o process.o
	mv process.o lib/.
clean:
	rm lib/*.o
	rm bin/scheduler