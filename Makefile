CC = gcc # compiler desired
t1: soma.c
	${CC} soma.c -o soma.o
	./soma.o
	
t2: media.c
	clear
	${CC} media.c -o media.o
	./media.o
t3:    
	clear
	rmdir VVCSoftware_VTM/Target3
	rmdir VVCSoftware_VTM
t4:
	clear
	mkdir VVCSoftware_VTM
	mkdir VVCSoftware_VTM/Target3
	cd VVCSoftware_VTM/
	ls VVCSoftware_VTM

