default:
	gcc -Wall -o prog main.c input.c listElem.c listArrayList.c
debug:
	gcc -Wall -o prog -g main.c input.c listElem.c listArrayList.c
clean:
	rm -f prog
