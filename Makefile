CC="g++"
ARTIFACT=vector

all:
	${CC} vector.cpp -o ${ARTIFACT}

clean:
	rm ${ARTIFACT}
